/*
 * file: RunTimeEnvironment.c
 *
 * This component run all tasks with their own period
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 * 
 */
#ifndef RUN_TIME_ENVIRONMENT_C
#define RUN_TIME_ENVIRONMENT_C


#include "RunTimeEnvironment.h"

/* Scheduler variables  */
static uint32 OsTask0_FREQUENCY_10000_0 = 0;
static uint32 OsTask0_FREQUENCY_250_1 = 0;

/* Extern component instances  */
extern LedBlinker cinLedBlinker1;
extern LedBlinker cinLedBlinker2;
extern LedBlinkRequester cinLedBlinkRequester1;
extern LedStatusReader cinLetStatusReader1;

void Rte_Task_Runnable_OsTask0(void)
{
    if (++OsTask0_FREQUENCY_10000_0 >= 10)
    {
        OsTask0_FREQUENCY_10000_0 = 0u;
        LedBlinker_ruRefresh((Rte_ComponentInstance)&cinLedBlinker1);
        LedBlinker_ruRefresh((Rte_ComponentInstance)&cinLedBlinker2);
    }
    if (++OsTask0_FREQUENCY_250_1 >= 0)
    {
        OsTask0_FREQUENCY_250_1 = 0u;
        LedBlinkRequester_ruRefresh();
        LedStatusReader_ruRefresh();
    }
}


#endif /* RUN_TIME_ENVIRONMENT_C */

/* End of file */
