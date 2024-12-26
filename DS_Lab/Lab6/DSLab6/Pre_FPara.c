#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

#define MAX_STACK_SIZE 100


struct Stack {
    char items[MAX_STACK_SIZE];
    int top;
};


void initialize(struct Stack* stack) {
    stack->top = -1;
}


int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

void push(struct Stack* stack, char item) {
    if (stack->top == MAX_STACK_SIZE - 1) {
        printf("Stack overflow\n");
        exit(1);
    }
    stack->items[++stack->top] = item;
}


char pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow\n");
        exit(1);
    }
    return stack->items[stack->top--];
}


int isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}


void prefixToInfix(char prefix[], char infix[]) {
    struct Stack operandStack;
    initialize(&operandStack);

    int length = strlen(prefix);
    int infixIndex = 0;


    for (int i = length - 1; i >= 0; i--) {
        char token = prefix[i];

        if (isOperator(token)) {

            char operand1 = pop(&operandStack);
            char operand2 = pop(&operandStack);
            infix[infixIndex++] = '(';
            infix[infixIndex++] = operand1;
            infix[infixIndex++] = token;
            infix[infixIndex++] = operand2;
            infix[infixIndex++] = ')';
            push(&operandStack, operand1);
        } else {

            push(&operandStack, token);
        }
    }


    for (int i = infixIndex - 1; i >= 0; i--) {
        printf("%c", infix[i]);
    }
    printf("\n");
}

int main() {
    char prefix[MAX_STACK_SIZE];
    char infix[MAX_STACK_SIZE];

    printf("Enter a prefix expression: ");
    gets(prefix);

    prefixToInfix(prefix, infix);

    return 0;
}
