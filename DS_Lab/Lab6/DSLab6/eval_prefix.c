#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_STACK_SIZE 100


struct Stack {
    int items[MAX_STACK_SIZE];
    int top;
};


void initialize(struct Stack* stack) {
    stack->top = -1;
}


int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}


void push(struct Stack* stack, int item) {
    if (stack->top == MAX_STACK_SIZE - 1) {
        printf("Stack overflow\n");
        exit(1);
    }
    stack->items[++stack->top] = item;
}


int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow\n");
        exit(1);
    }
    return stack->items[stack->top--];
}


int evaluatePrefix(char expression[]) {
    struct Stack operandStack;
    initialize(&operandStack);

    int length = strlen(expression);


    for (int i = length - 1; i >= 0; i--) {
        char token = expression[i];

        if (isdigit(token)) {

            int operand = token - '0';
            push(&operandStack, operand);
        } else if (token == ' ') {

            continue;
        } else {

            int operand1 = pop(&operandStack);
            int operand2 = pop(&operandStack);

            switch (token) {
                case '+':
                    push(&operandStack, operand1 + operand2);
                    break;
                case '-':
                    push(&operandStack, operand1 - operand2);
                    break;
                case '*':
                    push(&operandStack, operand1 * operand2);
                    break;
                case '/':
                    push(&operandStack, operand1 / operand2);
                    break;
                default:
                    printf("Invalid operator: %c\n", token);
                    exit(1);
            }
        }
    }


    return pop(&operandStack);
}

int main() {
    char expression[MAX_STACK_SIZE];

    printf("Enter a prefix expression: ");
    gets(expression);

    int result = evaluatePrefix(expression);

    printf("Result of the expression: %d\n", result);

    return 0;
}

