#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
} Node;
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}
void insertRear(Node** head, int data) {
    Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        Node* temp = *head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
    }
}
void deleteRear(Node** head) {
    if (*head == NULL) {
        printf("List is empty. Nothing to delete.\n");
    } else if ((*head)->next == NULL) {
        free(*head);
        *head = NULL;
    } else {
        Node* temp = *head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->prev->next = NULL;
        free(temp);
    }
}
void insertPosition(Node** head, int data, int position) {
    Node* newNode = createNode(data);
    if (position < 1) {
        printf("Invalid position. Position should be at least 1.\n");
        return;
    }
    if (position == 1) {
        newNode->next = *head;
        if (*head != NULL)
            (*head)->prev = newNode;
        *head = newNode;
    } else {
        Node* temp = *head;
        int i;
        for (i = 1; i < position - 1 && temp != NULL; i++)
            temp = temp->next;

        if (temp == NULL) {
            printf("Invalid position. Position exceeds the size of the list.\n");
            return;
        }

        newNode->next = temp->next;
        if (temp->next != NULL)
            temp->next->prev = newNode;
        temp->next = newNode;
        newNode->prev = temp;
    }
}
void deletePosition(Node** head, int position) {
    if (*head == NULL) {
        printf("List is empty. Nothing to delete.\n");
        return;
    }

    if (position < 1) {
        printf("Invalid position. Position should be at least 1.\n");
        return;
    }

    Node* temp = *head;
    int i;

    if (position == 1) {
        *head = (*head)->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(temp);
    } else {
        for (i = 1; i < position && temp != NULL; i++)
            temp = temp->next;

        if (temp == NULL) {
            printf("Invalid position. Position exceeds the size of the list.\n");
            return;
        }

        temp->prev->next = temp->next;
        if (temp->next != NULL)
            temp->next->prev = temp->prev;
        free(temp);
    }
}
void insertAfter(Node** head, int data, int targetData) {
    Node* newNode = createNode(data);
    Node* temp = *head;

    while (temp != NULL) {
        if (temp->data == targetData) {
            newNode->next = temp->next;
            if (temp->next != NULL)
                temp->next->prev = newNode;
            temp->next = newNode;
            newNode->prev = temp;
            return;
        }
        temp = temp->next;
    }

    printf("Target element not found in the list.\n");
}
void insertBefore(Node** head, int data, int targetData) {
    Node* newNode = createNode(data);
    Node* temp = *head;

    while (temp != NULL) {
        if (temp->data == targetData) {
            if (temp->prev == NULL) {
                newNode->next = temp;
                temp->prev = newNode;
                *head = newNode;
            } else {
                temp->prev->next = newNode;
                newNode->prev = temp->prev;
                newNode->next = temp;
                temp->prev = newNode;
            }
            return;
        }
        temp = temp->next;
    }

    printf("Target element not found in the list.\n");
}
void traverseList(Node* head) {
    Node* temp = head;
    if (temp == NULL) {
        printf("The list is empty.\n");
    } else {
        printf("Doubly Linked List: ");
        while (temp != NULL) {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}
void reverseList(Node** head) {
    Node* current = *head;
    Node* temp = NULL;

    while (current != NULL) {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }

    if (temp != NULL)
        *head = temp->prev;
}
int main() {
    Node* head = NULL;
    int choice, data, position, targetData;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert an element at the rear end of the list\n");
        printf("2. Delete an element from the rear end of the list\n");
        printf("3. Insert an element at a given position of the list\n");
        printf("4. Delete an element from a given position of the list\n");
        printf("5. Insert an element after another element\n");
        printf("6. Insert an element before another element\n");
        printf("7. Traverse the list\n");
        printf("8. Reverse the list\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to insert at the rear end: ");
                scanf("%d", &data);
                insertRear(&head, data);
                break;
            case 2:
                deleteRear(&head);
                break;
            case 3:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                printf("Enter position to insert: ");
                scanf("%d", &position);
                insertPosition(&head, data, position);
                break;
            case 4:
                printf("Enter position to delete: ");
                scanf("%d", &position);
                deletePosition(&head, position);
                break;
            case 5:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                printf("Enter target data: ");
                scanf("%d", &targetData);
                insertAfter(&head, data, targetData);
                break;
            case 6:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                printf("Enter target data: ");
                scanf("%d", &targetData);
                insertBefore(&head, data, targetData);
                break;
            case 7:
                traverseList(head);
                break;
            case 8:
                reverseList(&head);
                printf("List reversed.\n");
                break;
            case 9:
                while (head != NULL) {
                    Node* temp = head;
                    head = head->next;
                    free(temp);
                }
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}

