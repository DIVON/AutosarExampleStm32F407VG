/*
 * file: Rte_LedStatusReader.h
 *
 * Implementation for LedStatusReader header file
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 * 
 */
#ifndef RTE_LED_STATUS_READER_H
#define RTE_LED_STATUS_READER_H


/* INCLUDES */
#include "SystemErrors.h"
#include "Rte_DataTypes.h"

/* END OF INCLUDES */


/* MACROS */
/* Runnables frequences */
#define Rte_Period_LedStatusReader_ruRefresh      (250UL)
#define Rte_Write_Led1On_On                       Rte_Write_LedStatusReader_Led1On_On
#define Rte_Write_Led2On_On                       Rte_Write_LedStatusReader_Led2On_On
#define Rte_Read_Led1ReceiverPort_index           Rte_Read_LedStatusReader_Led1ReceiverPort_index
#define Rte_Call_Led2ServerPort_LedSwitchRequest  Rte_Call_LedStatusReader_Led2ServerPort_LedSwitchRequest

/* END OF MACROS */


/* RTE FUNCTION DECLARATIONS */

Std_ReturnType Rte_Write_Led1On_On(const boolean * const On);
Std_ReturnType Rte_Write_Led2On_On(const boolean * const On);
Std_ReturnType Rte_Read_Led1ReceiverPort_index(uint32 * const index);
/* END OF RTE FUNCTION DECLARATIONS */


#endif /* RTE_LED_STATUS_READER_H */
