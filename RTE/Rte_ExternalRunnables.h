/*
 * file: Rte_ExternalRunnables.h
 *
 * This file will keep all links to components runnables.
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 * 
 */
#ifndef RTE_EXTERNAL_RUNNABLES_H
#define RTE_EXTERNAL_RUNNABLES_H


/* Declaration of all periodic runnables */

void LedBlinker_ruRefresh(Rte_ComponentInstance instance);
void LedBlinkRequester_ruRefresh(void);
void LedStatusReader_ruRefresh(void);

/* Declaration of all server call functions */

Std_ReturnType Rte_Call_LedStatusReader_Led2ServerPort_LedSwitchRequest(const boolean * const on);

#endif /* RTE_EXTERNAL_RUNNABLES_H */

/* End of file */
