#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100

struct Stack {
    int data[MAX_SIZE];
    int top;
};

void push(struct Stack *stack, int item) {
    if (stack->top >= MAX_SIZE - 1) {
        printf("Stack Overflow\n");
        exit(EXIT_FAILURE);
    }
    stack->data[++stack->top] = item;
}

int pop(struct Stack *stack) {
    if (stack->top == -1) {
        printf("Stack Underflow\n");
        exit(EXIT_FAILURE);
    }
    return stack->data[stack->top--];
}

int is_operator(char ch) {
    return ch == '+' || ch == '-' || ch == '*' || ch == '/';
}

int evaluate_postfix(const char *postfix) {
    struct Stack stack;
    stack.top = -1;

    for (int i = 0; postfix[i] != '\0'; ++i) {
        if (isdigit(postfix[i])) {
            push(&stack, postfix[i] - '0');
        } else if (is_operator(postfix[i])) {
            int operand2 = pop(&stack);
            int operand1 = pop(&stack);
            int result;

            switch (postfix[i]) {
                case '+':
                    result = operand1 + operand2;
                    break;
                case '-':
                    result = operand1 - operand2;
                    break;
                case '*':
                    result = operand1 * operand2;
                    break;
                case '/':
                    result = operand1 / operand2;
                    break;
            }

            push(&stack, result);
        }
    }

    return pop(&stack);
}

int main() {
    char postfix[MAX_SIZE];

    printf("Enter a postfix expression: ");
    scanf("%s", postfix);

    int result = evaluate_postfix(postfix);

    printf("Result of postfix expression: %d\n", result);

    return 0;
}

