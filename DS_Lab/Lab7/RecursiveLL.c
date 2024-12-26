#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

Node* insertNode(Node* head, int data) {
    if (head == NULL) {
        return createNode(data);
    }
    head->next = insertNode(head->next, data);
    return head;
}

void displayList(Node* head) {
    if (head == NULL) {
        printf("NULL\n");
        return;
    }
    printf("%d -> ", head->data);
    displayList(head->next);
}

int main() {
    Node* head = NULL;
    head = insertNode(head, 10);
    head = insertNode(head, 20);
    head = insertNode(head, 30);

    printf("Linked list: ");
    displayList(head);

    // Free allocated memory
    while (head != NULL) {
        Node* temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}



#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

Node* insertNode(Node* head, int data) {
    if (head == NULL) {
        return createNode(data);
    }
    head->next = insertNode(head->next, data);
    return head;
}

void displayList(Node* head) {
    if (head == NULL) {
        return;
    }
    printf("%d -> ", head->data);
    displayList(head->next);
}

int main() {
    Node* head = NULL;
    head = insertNode(head, 10);
    head = insertNode(head, 20);
    head = insertNode(head, 30);

    printf("Linked list: ");
    displayList(head);
    printf("NULL\n");

    // Free allocated memory
    while (head != NULL) {
        Node* temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}

