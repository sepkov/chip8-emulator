#ifndef CHIP8REGISTERS_H
#define CHIP8REGISTERS_H

#include "config.h"

struct chip8_registers
{
    unsigned char V[CHIP8_TOTAL_DATA_REGISTERS];
    unsigned short I;
    unsigned char delay_timer;
    unsigned char sound_timer;
    unsigned char stack_pointer;
    unsigned short program_counter;
};

#endif