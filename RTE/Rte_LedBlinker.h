/*
 * file: Rte_LedBlinker.h
 *
 * Implementation for LedBlinker header file
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 * 
 */
#ifndef RTE_LED_BLINKER_H
#define RTE_LED_BLINKER_H


/* INCLUDES */
#include "SystemErrors.h"
#include "Rte_DataTypes.h"

/* END OF INCLUDES */


/* MACROS */
/* Runnables frequences */
#define Rte_Period_LedBlinker_ruRefresh           (10000UL)
#define Rte_CData_Pin                             Rte_CData_LedBlinker_Pin
#define Rte_Read_LedRequstStatus_On               Rte_Read_LedBlinker_LedRequstStatus_On

/* END OF MACROS */


/* RTE FUNCTION DECLARATIONS */

Std_ReturnType Rte_Read_LedRequstStatus_On(Rte_ComponentInstance instance, boolean * const On);
uint32 Rte_CData_Pin(Rte_ComponentInstance instance);
/* END OF RTE FUNCTION DECLARATIONS */


#endif /* RTE_LED_BLINKER_H */
