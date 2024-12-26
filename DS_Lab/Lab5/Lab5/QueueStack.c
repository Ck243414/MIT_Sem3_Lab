#include <stdio.h>

#include <stdbool.h>



// Define the stack structure

struct Stack {

    int data[100];

    int top;

};



// Initialize a stack

void initialize(struct Stack *stack) {

    stack->top = -1;

}



// Check if the stack is empty

bool isEmpty(struct Stack *stack) {

    return stack->top == -1;

}



// Push an element onto the stack

void push(struct Stack *stack, int value) {

    stack->data[++stack->top] = value;

}



// Pop an element from the stack

int pop(struct Stack *stack) {

    return stack->data[stack->top--];

}



// Define the queue structure using two stacks

struct Queue {

    struct Stack stack1; // For enqueue operation

    struct Stack stack2; // For dequeue operation

};



// Initialize the queue

void initializeQueue(struct Queue *queue) {

    initialize(&queue->stack1);

    initialize(&queue->stack2);

}



// Enqueue an element into the queue

void enqueue(struct Queue *queue, int value) {

    push(&queue->stack1, value);

}



// Dequeue an element from the queue

int dequeue(struct Queue *queue) {

    if (isEmpty(&queue->stack2)) {

        // If stack2 is empty, transfer elements from stack1 to stack2

        while (!isEmpty(&queue->stack1)) {

            push(&queue->stack2, pop(&queue->stack1));

        }

    }



    // Pop from stack2

    if (!isEmpty(&queue->stack2)) {

        return pop(&queue->stack2);

    } else {

        printf("Queue is empty.\n");

        return -1;

    }

}



int main() {

    struct Queue queue;

    initializeQueue(&queue);



    // Enqueue elements

    enqueue(&queue, 1);

    enqueue(&queue, 2);

    enqueue(&queue, 3);



    // Dequeue and display elements

    printf("Dequeued element: %d\n", dequeue(&queue));

    printf("Dequeued element: %d\n", dequeue(&queue));



    // Enqueue more elements

    enqueue(&queue, 4);

    enqueue(&queue, 5);



    // Dequeue and display remaining elements

    printf("Dequeued element: %d\n", dequeue(&queue));

    printf("Dequeued element: %d\n", dequeue(&queue));



    return 0;

}

