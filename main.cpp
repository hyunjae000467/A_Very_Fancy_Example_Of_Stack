//Command Prompt-Styled Stack Program.
//Adjust MSS to change MAX Stack Value.
//Made by OrangeZone
#include <stdio.h>
#include <string.h>
#define MSS 10
int stack[MSS];
int top = -1;


int IsFull()
{
    if(top>MSS-1) return true;
    else return false;
}

int IsEmpty()
{
    if(top>-1) return false;
    else return true;
}

int pop()
{
    return stack[top--];
}

void push(int num)
{
    if(IsFull() == true) printf("[Error] Stack Is Full. Failed to push\n");
    else {
        stack[++top] = num;
        printf("[Info] %d pushed to Stack room %d.\n",num,top);
    }
}

int main()
{
    int input;
    char command[9];
    printf("Example Stack Program.\nMax size is set to %d.\nInput any number.\n",MSS);
    while(true){
        printf("$/home/stack.cpp  ");
        scanf("%s",command);
        if(strcmp(command, "help") == 0) {
            printf("push | Push number to Stack.\npop | Pop number from Stack.\nIsEmpty | Check Stack is empty\nIsFull | Check Stack is full.\n");
            continue;
        }
        else if(strcmp(command, "push") == 0) {
            printf("$/home/stack.cpp  Input Number: ");
            scanf("%d",&input);
            push(input);
            continue;
        }
        else if(strcmp(command, "pop") == 0) {
            if(IsEmpty() == true) {
                printf("[Error] Stack Is Empty. Failed to pop.\n");
            }
            else printf("[Info] Popped number is %d\n",pop());
            continue;
        }
        else if(strcmp(command, "IsEmpty") == 0){
            if(IsEmpty() == true) printf("[Info] Stack is Empty\n");
            else printf("[Info] Stack is not Empty\n");
        }
        else if(strcmp(command, "IsFull") == 0){
            if(IsFull() == true) printf("[Info] Stack is Full\n");
            else printf("[Info] Stack is not Full\n");
        }
        else if(strcmp(command, "exit") == 0){
            return 0;
        }
        else printf("[Error] Unknown Command. Type \"help\" to list commands.\n");
    }
    return 0;
}