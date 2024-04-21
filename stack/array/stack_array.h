#include <stdio.h>
#include <stdbool.h>
#define STACK_LENGTH 5
#define EMPTY (-1)
#define INT_MIN (-2147483648)
#define STACK_EMPTY INT_MIN
typedef struct stack_array
{
    int memory[STACK_LENGTH];
    int top ;
    /* data */
}stack_array;