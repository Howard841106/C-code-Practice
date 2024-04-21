#include "stack_array.h"
stack_array stack;
bool push(int value){
    if(stack.top >= STACK_LENGTH-1)
    {
        return false;
    }
    stack.top++;
    stack.memory[stack.top] = value;
    return true;
}

int pop(){
    if(stack.top == EMPTY)
    {
        return STACK_EMPTY;
    } 

    int reuslt = stack.memory[stack.top];
    stack.top--;
    return reuslt;
}

int main(){
    stack.top = EMPTY;
    push(56);
    push(78);
    push(13);

    int t;
    while((t=pop())!=STACK_EMPTY)
    {
        printf("t = %d\n", t);
    }
    return 0;
}