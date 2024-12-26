#include<stdio.h>
#include<string.h>
#define MAX_SIZE 100

struct Stack{
    int items[MAX_SIZE];
    int top;
};

void initilize(struct Stack *stack)
{
    stack->top=-1;
}

_Bool isEmpty(struct Stack *stack)
{
    return stack->top==-1;
}
_Bool isFull(struct Stack *stack)
{
    return stack->top == MAX_SIZE - 1;
}
/*void push(struct Stack *stack, int item)
 {
     if (isFull(stack)) {
     printf("Stack overflow, cannot push %d\n", item);
     return;
    }
    stack -> top++;

    stack-> items[stack->top]=item;
 }*/

 void push2(struct Stack *stack, int item)
 {
     if (isFull(stack)) {
     printf("Stack overflow, cannot push %d\n", item);
     return;
    }
    stack -> top++;
    stack-> items[stack->top]=item;
 }

 int pop2(struct Stack *stack) {
 if (isEmpty(stack)) {
 printf("Stack underflow, cannot pop\n");
 return -1;
 }

 int poppedItem = stack->items[stack->top];
 stack->top--;
 return poppedItem;
}

int peek2(struct Stack *stack) {
 if (isEmpty(stack)) {
 printf("Stack is empty, cannot peek\n");
 return -1;
 }
 return stack->items[stack->top];
}

int main3()
{
    struct Stack stack;
    initilize(&stack);

    int n,opt;
    printf("Enter num:");
    scanf("%d",&n);
    printf("1. Binary\n");
    printf("2. Octal\n");
    printf("3. Hexadecimal\n");
    scanf("%d",&opt);

    switch(opt)
    {
    case 1:
        while(n>0)
        {
            push(&stack,n%2);
            n=n/2;
        }

        while(stack.top != -1)
        {
            printf("%d",pop(&stack));
        }
        break;

    case 2:
        while(n>0)
        {
            push(&stack,n%8);
            n=n/8;
        }

        while(stack.top != -1)
        {
            printf("%d",pop(&stack));
        }
        break;

    case 3:
        while(n>0)
        {
            int dig=n%16;
            if(dig>=10 && dig<=15)
            {
                char ch='A' +(dig%10);
                push(&stack,ch);
            }
            else
            {
                push(&stack,dig);
            }
            n=n/16;

        }
        while(stack.top != -1)
            {

                if(peek2(&stack)>='A' && peek2(&stack)<='F')
                {
                    char ch=pop(&stack);
                    printf("%c",ch);
                }
                else
                {
                    printf("%d",pop(&stack));
                }

            }
            break;
    }






}
