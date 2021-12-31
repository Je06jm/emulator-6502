#ifndef EMULATOR_8086_TYPE_H
#define EMULATOR_8086_TYPE_H

#include <stdint.h>

typedef uint8_t E86_Byte;
typedef uint16_t E86_Word;
typedef uint32_t E86_Address;

#ifndef NULL
#define NULL ((void*)0)
#endif

#endif