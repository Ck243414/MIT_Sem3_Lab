
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

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

    return ch == '+' || ch == '-' || ch == '*' || ch == '/';
}

void postfix_to_infix(const char *postfix, char *infix) {
    struct Stack stack;
    stack.top = -1;

    for (int i = 0; postfix[i] != '\0'; ++i) {
        if (isalnum(postfix[i])) {
            push(&stack, postfix[i]);
        } else if (is_operator(postfix[i])) {
            char operand2 = pop(&stack);
            char operand1 = pop(&stack);

            sprintf(infix, "(%c%c%c)", operand1, postfix[i], operand2);
            push(&stack, infix[0]);
        }
    }

    strcpy(infix, stack.data);

}

int main() {
    char postfix[MAX_SIZE];
    char infix[MAX_SIZE];

    printf("Enter a postfix expression: ");
    scanf("%s", postfix);

    postfix_to_infix(postfix, infix);

    printf("Fully parenthesized infix expression: %s\n", infix);

    return 0;
}

