/*
 * file: Rte_Connections.c
 *
 * Implementation for RTE connections source file
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 * 
 */
#include <string.h>
#include <stm32f4xx.h>
#include "Rte_DataTypes.h"
#include "SystemErrors.h"
#include "Rte_ExternalRunnables.h"

/* Component instance :LedBlinker1  */
LedBlinker                                        cinLedBlinker1 = 
{
    .index = 0, 
    .Rte_CDataField_LedBlinker_Pin = GPIO_PIN_6
};

/* Component instance :LedBlinker2  */
LedBlinker                                        cinLedBlinker2 = 
{
    .index = 1, 
    .Rte_CDataField_LedBlinker_Pin = GPIO_PIN_7
};

/* Component instance :LedBlinkRequester1  */
LedBlinkRequester                                 cinLedBlinkRequester1 = 
{
    .Rte_WriteField_Led1SenderPort_index = 0
};

/* Component instance :LetStatusReader1  */
LedStatusReader                                   cinLetStatusReader1 = 
{
    .Rte_WriteField_Led1On_On = 0,
    .Rte_WriteField_Led2On_On = 0
};

/**************************************************
        LedBlinker
***************************************************/
Std_ReturnType Rte_Read_LedBlinker_LedRequstStatus_On(Rte_ComponentInstance instance, boolean * const On)
{
    switch(((LedBlinker*)instance)->index)
    {
        case 0: 
        {
            memcpy(On, &cinLetStatusReader1.Rte_WriteField_Led1On_On, sizeof(boolean));
            return RTE_E_OK;
        }
        case 1: 
        {
            memcpy(On, &cinLetStatusReader1.Rte_WriteField_Led2On_On, sizeof(boolean));
            return RTE_E_OK;
        }
    }
    return RTE_E_UNCONNECTED;
}

uint32 Rte_CData_LedBlinker_Pin(Rte_ComponentInstance instance)
{
    return ((LedBlinker*)instance)->Rte_CDataField_LedBlinker_Pin;
}

/**************************************************
        LedBlinkRequester
***************************************************/
Std_ReturnType Rte_Write_LedBlinkRequester_Led1SenderPort_index(const uint32 * const index)
{
    cinLedBlinkRequester1.Rte_WriteField_Led1SenderPort_index = *index;
    return RTE_E_OK;
}

Std_ReturnType Rte_Call_LedBlinkRequester_Led2ClientPort_LedSwitchRequest(const boolean * const on)
{
    return Rte_Call_LedStatusReader_Led2ServerPort_LedSwitchRequest(on);
}

/**************************************************
        LedStatusReader
***************************************************/
Std_ReturnType Rte_Write_LedStatusReader_Led1On_On(const boolean * const On)
{
    cinLetStatusReader1.Rte_WriteField_Led1On_On = *On;
    return RTE_E_OK;
}

Std_ReturnType Rte_Write_LedStatusReader_Led2On_On(const boolean * const On)
{
    cinLetStatusReader1.Rte_WriteField_Led2On_On = *On;
    return RTE_E_OK;
}

Std_ReturnType Rte_Read_LedStatusReader_Led1ReceiverPort_index(uint32 * const index)
{
    memcpy(index, &cinLedBlinkRequester1.Rte_WriteField_Led1SenderPort_index, sizeof(uint32));
    return RTE_E_OK;
}

