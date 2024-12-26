#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
} Node;

void append(Node** head_ref, int data) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = data;
    new_node->next = NULL;

    if (*head_ref == NULL) {
        new_node->prev = NULL;
        *head_ref = new_node;
        return;
    }

    Node* last = *head_ref;
    while (last->next != NULL)
        last = last->next;

    last->next = new_node;
    new_node->prev = last;
}

void concatenate(Node** X1, Node* X2) {
    if (*X1 == NULL) {
        *X1 = X2;
        return;
    }

    Node* temp = *X1;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = X2;
    if (X2 != NULL)
        X2->prev = temp;
}

void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    Node* X1 = NULL;
    Node* X2 = NULL;

    append(&X1, 1);
    append(&X1, 2);
    append(&X1, 3);

    append(&X2, 4);
    append(&X2, 5);

    printf("X1: ");
    display(X1);

    printf("X2: ");
    display(X2);

    concatenate(&X1, X2);

    printf("Concatenated list (X1 after concatenation): ");
    display(X1);

    return 0;
}
