/*
 * file: RunTimeEnvironment.h
 *
 * This component run all tasks with their own period
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 * 
 */
#ifndef RUN_TIME_ENVIRONMENT_H
#define RUN_TIME_ENVIRONMENT_H


#include "Rte_DataTypes.h"
#include "Rte_ExternalRunnables.h"
#include <stm32f4xx.h>

/* Time periods */
#define SYSTICK_FREQUENCY                         (1000)

#define FREQUENCY_10000                           (100)

/*
 * Rte tasks 
 */
void Rte_Task_Runnable_OsTask0(void);

#endif /* RUN_TIME_ENVIRONMENT_H */

/* End of file */
