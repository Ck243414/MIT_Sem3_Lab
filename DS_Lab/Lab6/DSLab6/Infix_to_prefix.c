#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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


int getPrecedence(char operator) {
    switch (operator) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
        default:
            return 0; // Lower precedence for operands and '('
    }
}


void infixToPrefix(char infix[], char prefix[]) {
    struct Stack operatorStack;
    initialize(&operatorStack);

    int infixLength = strlen(infix);
    int prefixIndex = 0;


    for (int i = infixLength - 1; i >= 0; i--) {
        char symbol = infix[i];

        if (symbol == ' ')
            continue;

        if (symbol == ')')
            push(&operatorStack, symbol);
        else if (symbol == '(') {
            while (!isEmpty(&operatorStack) && operatorStack.items[operatorStack.top] != ')') {
                prefix[prefixIndex++] = pop(&operatorStack);
            }
            pop(&operatorStack); // Pop the corresponding ')'
        } else if (symbol >= 'a' && symbol <= 'z') {
            prefix[prefixIndex++] = symbol;
        } else { // Operator
            while (!isEmpty(&operatorStack) &&
                   getPrecedence(operatorStack.items[operatorStack.top]) >= getPrecedence(symbol)) {
                prefix[prefixIndex++] = pop(&operatorStack);
            }
            push(&operatorStack, symbol);
        }
    }


    while (!isEmpty(&operatorStack)) {
        prefix[prefixIndex++] = pop(&operatorStack);
    }

    prefix[prefixIndex] = '\0';
}

int main() {
    char infix[MAX_STACK_SIZE];
    char prefix[MAX_STACK_SIZE];

    printf("Enter an infix expression: ");
    gets(infix);

    infixToPrefix(infix, prefix);

    printf("Equivalent prefix expression: %s\n", prefix);

    return 0;
}
