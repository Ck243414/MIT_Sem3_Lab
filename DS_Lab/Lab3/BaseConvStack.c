#include <stdio.h>

#include <stdbool.h>



// Define a stack structure

struct Stack {

    int data[100];

    int top;

};



// Function to initialize the stack

void initialize(struct Stack *stack) {

    stack->top = -1;

}



// Function to check if the stack is empty

bool isEmpty(struct Stack *stack) {

    return stack->top == -1;

}



// Function to push an element onto the stack

void push(struct Stack *stack, int value) {

    stack->data[++stack->top] = value;

}



// Function to pop an element from the stack

int pop(struct Stack *stack) {

    return stack->data[stack->top--];

}



// Function to convert a decimal number to any base using a stack

void decimalToBase(int decimalNumber, int base) {

    struct Stack stack;

    initialize(&stack);



    while (decimalNumber > 0) {

        int remainder = decimalNumber % base;

        push(&stack, remainder);

        decimalNumber /= base;

    }



    printf("Converted number in base %d: ", base);

    while (!isEmpty(&stack)) {

        printf("%d", pop(&stack));

    }

    printf("\n");

}



int main() {

    int decimalNumber, base;



    printf("Enter a decimal number: ");

    scanf("%d", &decimalNumber);



    printf("Enter the base for conversion: ");

    scanf("%d", &base);



    if (base < 2 || base > 16) {

        printf("Invalid base. Base should be between 2 and 16.\n");

    } else {

        decimalToBase(decimalNumber, base);

    }



    return 0;

}
