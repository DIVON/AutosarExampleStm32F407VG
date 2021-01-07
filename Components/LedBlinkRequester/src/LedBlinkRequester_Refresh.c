/*
 * file: LedBlinkRequester_Refresh.c
 *
 * Implementation for LedBlinkRequester_Refresh
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 * 
 */

/* INCLUDES */
#include "LedBlinkRequester.h"

/* END OF INCLUDES */


/* MACROS */
STATIC_GLOBAL uint32 counter;

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
 *  Rte_Write_Led1SenderPort_index
 *  Rte_Call_Led2ClientPort_LedSwitchRequest
 */
void LedBlinkRequester_ruRefresh(void)
{
    counter++;
    Rte_Write_Led1SenderPort_index(&counter);
    
    if (counter % 500U == 0U)
    {
        boolean led2Request;

        led2Request = TRUE;

        Rte_Call_Led2ClientPort_LedSwitchRequest(&led2Request);
    }
    else if (counter % 500U == 250U)
    {
        boolean led2Request;

        led2Request = FALSE;

        Rte_Call_Led2ClientPort_LedSwitchRequest(&led2Request);
    }

}

/* END OF GLOBAL FUNCTION DEFINITIONS */

/* End of file */
