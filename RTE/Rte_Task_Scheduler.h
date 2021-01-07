/*
 * file: Rte_Task_Scheduler.h
 *
 * This file contains extern functions defenitions and variables for organizing task scheduling.
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 * 
 */
#ifndef RTE_TASK_SCHEDULER_H
#define RTE_TASK_SCHEDULER_H

#include "Rte_DataTypes.h"

extern volatile boolean timeEventOccured;

void DoScheduling(void);

#endif /* RTE_TASK_SCHEDULER_H */

/* End of file */
