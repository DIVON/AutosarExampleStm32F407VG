/*
 * file: Rte_LedBlinkRequester.h
 *
 * Implementation for LedBlinkRequester header file
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 * 
 */
#ifndef RTE_LED_BLINK_REQUESTER_H
#define RTE_LED_BLINK_REQUESTER_H


/* INCLUDES */
#include "SystemErrors.h"
#include "Rte_DataTypes.h"

/* END OF INCLUDES */


/* MACROS */
/* Runnables frequences */
#define Rte_Period_LedBlinkRequester_ruRefresh    (250UL)
#define Rte_Call_Led2ClientPort_LedSwitchRequest  Rte_Call_LedBlinkRequester_Led2ClientPort_LedSwitchRequest
#define Rte_Write_Led1SenderPort_index            Rte_Write_LedBlinkRequester_Led1SenderPort_index

/* END OF MACROS */


/* RTE FUNCTION DECLARATIONS */

Std_ReturnType Rte_Call_Led2ClientPort_LedSwitchRequest(const boolean * const on);
Std_ReturnType Rte_Write_Led1SenderPort_index(const uint32 * const index);
/* END OF RTE FUNCTION DECLARATIONS */


#endif /* RTE_LED_BLINK_REQUESTER_H */
