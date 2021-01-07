/*
 * file: LedStatusReader_Led2ServerPort.c
 *
 * Implementation for LedStatusReader Led2ServerPort
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 * 
 */

/* INCLUDES */
#include "LedStatusReader.h"

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
 *  Rte_Read_Led1ReceiverPort_index
 *  Rte_Write_Led1On_On
 *  Rte_Write_Led2On_On
 */
Std_ReturnType Rte_Call_Led2ServerPort_LedSwitchRequest(const boolean * const on)
{
    return RTE_E_OK;
}

/* END OF GLOBAL FUNCTION DEFINITIONS */

/* End of file */
