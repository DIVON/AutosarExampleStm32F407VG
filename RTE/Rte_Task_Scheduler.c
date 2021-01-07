/*
 * file: Rte_Task_Scheduler.c
 *
 * This component run all tasks with their own period
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 * 
 */

#include "RunTimeEnvironment.h"

#define RTE_TASKS_COUNT                           1

#define RTE_SCHEDULER_STEPS                       1

/* One Rte Task pointer */
typedef void (*Rte_Scheduler_Task)();

/* One step of scheduler */
typedef  Rte_Scheduler_Task Rte_Scheduler_Step[RTE_TASKS_COUNT];

/* All possible steps in scheduler */
typedef  Rte_Scheduler_Step Rte_Scheduler_Sequence[RTE_SCHEDULER_STEPS];

static uint32 schedulingCounter = 0u;

volatile boolean timeEventOccured = FALSE;

static Rte_Scheduler_Sequence  taskScheduling =
{
    {
        Rte_Task_Runnable_OsTask0
    }
};

void DoScheduling(void)
{
    if (FALSE != timeEventOccured)
    {
        uint32 index = schedulingCounter % RTE_SCHEDULER_STEPS;
        for (uint32 i = 0; i < RTE_TASKS_COUNT; i++)
        {
            if (NULL != taskScheduling[index][i])
            {
                taskScheduling[index][i]();
            }
            else
            {
                break;
            }
        }
        schedulingCounter++;
        timeEventOccured = FALSE;
    }
}
/* End of file */
