#include<stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

struct Stack {
    char data[MAX_SIZE];
    int top;
};

void push(struct Stack *stack, char item) {
    if (stack->top >= MAX_SIZE - 1) {
        printf("Stack Overflow\n");
        exit(EXIT_FAILURE);
    }
    stack->data[++stack->top] = item;
}

char pop(struct Stack *stack) {
    if (stack->top == -1) {
        printf("Stack Underflow\n");
        exit(EXIT_FAILURE);
    }
    return stack->data[stack->top--];
}

int is_operator(char ch) {
    return ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^';
}

int precedence(char ch) {
    switch (ch) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
        default:
            return -1;
    }
}

void infix_to_postfix(const char *infix, char *postfix) {
    struct Stack stack;
    stack.top = -1;
    int postfixIndex = 0;

    for (int i = 0; infix[i] != '\0'; ++i) {
        if (infix[i] >= 'a' && infix[i] <= 'z') {
            postfix[postfixIndex++] = infix[i];
        } else if (infix[i] == '(') {
            push(&stack, infix[i]);
        } else if (infix[i] == ')') {
            while (stack.top != -1 && stack.data[stack.top] != '(') {
                postfix[postfixIndex++] = pop(&stack);
            }
            pop(&stack); // Pop '('
        } else if (is_operator(infix[i])) {
            while (stack.top != -1 && precedence(stack.data[stack.top]) >= precedence(infix[i])) {
                postfix[postfixIndex++] = pop(&stack);
            }
            push(&stack, infix[i]);
        }
    }

    while (stack.top != -1) {
        postfix[postfixIndex++] = pop(&stack);
    }

    postfix[postfixIndex] = '\0';
}

int main2() {
    char infix[MAX_SIZE];
    char postfix[MAX_SIZE];

    printf("Enter an infix expression: ");
    scanf("%s", infix);

    infix_to_postfix(infix, postfix);

    printf("Equivalent postfix expression: %s\n", postfix);

    return 0;
}

