/*
 * file: LedBlinker_Refresh.c
 *
 * Implementation for LedBlinker_Refresh
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 * 
 */

/* INCLUDES */
#include "LedBlinker.h"
#include "stm32f4xx_hal.h"
/* END OF INCLUDES */


/* MACROS */

/* END OF MACROS */


/* TYPE DEFINITIONS */

/* END OF TYPE DEFINITIONS */


/* VARIABLES */

/* END OF VARIABLES */


/* LOCAL FUNCTION DECLARATIONS */

/* END OF LOCAL FUNCTION DECLARATIONS */


/* LOCAL FUNCTION DEFINITIONS */

/* END OF LOCAL FUNCTION DEFINITIONS */


/* GLOBAL FUNCTION DEFINITIONS */

/* 
 *  This RTE function could be used: 
 *  Rte_CData_Pin
 *  Rte_Read_LedRequstStatus_On
 */
void LedBlinker_ruRefresh(Rte_ComponentInstance instance)
{
    boolean ledOn;
    uint16 pin;

    /* Read data from port */
    Rte_Read_LedRequstStatus_On(instance, &ledOn);

    /* Get pin from CData parameter */
    pin = Rte_CData_Pin(instance);

    if (FALSE != ledOn)
    {
        HAL_GPIO_WritePin(GPIOA, pin, GPIO_PIN_SET);
    }
    else
    {
        HAL_GPIO_WritePin(GPIOA, pin, GPIO_PIN_RESET);
    }
}

/* END OF GLOBAL FUNCTION DEFINITIONS */

/* End of file */
