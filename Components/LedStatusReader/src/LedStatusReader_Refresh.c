/*
 * file: LedStatusReader_Refresh.c
 *
 * Implementation for LedStatusReader_Refresh
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
void LedStatusReader_ruRefresh(void)
{
    uint32 index;
    boolean onRequest;
    
    /* Reading from Led1ReceiverPort port */
    Rte_Read_Led1ReceiverPort_index(&index);

    uint32 division = index % 1000;

    if (division > 500)
    {
        onRequest = TRUE;
    }
    else
    {
        onRequest = FALSE;
    }

    /* Writing to Led1On port */
    Rte_Write_Led1On_On(&onRequest);
}

/* END OF GLOBAL FUNCTION DEFINITIONS */

/* End of file */
