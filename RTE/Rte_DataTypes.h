/*
 * file: Rte_DataTypes.h
 *
 * This file contains all datatypes for programm architecture.
 *
 * $Author: $
 * $Date: $
 * $Revision: $
 *
 * 
 */
#ifndef RTE_DATA_TYPES_H
#define RTE_DATA_TYPES_H


#include "Rte_ReturnCodes.h"

#ifdef COMPONENT_TEST
#define STATIC_GLOBAL
#else
#define STATIC_GLOBAL static
#endif

/* Base datatypes */
#define TRUE	1
#define FALSE	0

typedef  unsigned char  boolean;
typedef  float  float32;
typedef  signed short  int16;
typedef  signed int  int32;
typedef  signed char  int8;
typedef  unsigned short  uint16;
typedef  unsigned int  uint32;
typedef  unsigned char  uint8;

/* Rte data types */
typedef uint16               Std_ReturnType;
typedef void    *Rte_ComponentInstance;

/* Enums data types */

/* Simple data types */

/* Complex data types */

/* Datatype for LedBlinker */
typedef struct
{
    uint32 index;
    uint32 Rte_CDataField_LedBlinker_Pin;
} LedBlinker;

/* Datatype for LedBlinkRequester */
typedef struct
{
    uint32 Rte_WriteField_Led1SenderPort_index;
} LedBlinkRequester;

/* Datatype for LedStatusReader */
typedef struct
{
    boolean Rte_WriteField_Led1On_On;
    boolean Rte_WriteField_Led2On_On;
} LedStatusReader;

#endif /* RTE_DATA_TYPES_H */
/* End of file */
