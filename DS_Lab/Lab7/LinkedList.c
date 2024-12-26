#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
typedef struct Node Node;
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
void insertBefore(Node** head, int element, int newData) {
    Node* temp = *head;
    Node* prev = NULL;
    while (temp != NULL && temp->data != element) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Element not found\n");
        return;
    }
    Node* newNode = createNode(newData);
    newNode->next = temp;
    if (prev == NULL)
        *head = newNode;
    else
        prev->next = newNode;
}
void insertAfter(Node* prevNode, int newData) {
    if (prevNode == NULL) {
        printf("Previous node cannot be NULL\n");
        return;
    }
    Node* newNode = createNode(newData);
    newNode->next = prevNode->next;
    prevNode->next = newNode;
}
void deleteNode(Node** head, int key) {
    Node* temp = *head;
    Node* prev = NULL;
    if (temp != NULL && temp->data == key) {
        *head = temp->next;
        free(temp);
        return;
    }
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Element not found\n");
        return;
    }
    prev->next = temp->next;
    free(temp);
}
void traverseList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}
Node* reverseList(Node* head) {
    Node* prev = NULL;
    Node* current = head;
    Node* next = NULL;
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}
void sortList(Node** head) {
}
void deleteAlternateNodes(Node* head) {
    Node* current = head;
    Node* temp = NULL;
    while (current != NULL && current->next != NULL) {
        temp = current->next;
        current->next = temp->next;
        free(temp);
        current = current->next;
    }
}
void insertInSortedOrder(Node** head, int newData) {
    Node* newNode = createNode(newData);
    if (*head == NULL || (*head)->data >= newData) {
        newNode->next = *head;
        *head = newNode;
        return;
    }
    Node* current = *head;
    while (current->next != NULL && current->next->data < newData) {
        current = current->next;
    }
    newNode->next = current->next;
    current->next = newNode;
}
int main() {
    Node* head = NULL;
    int choice, element, newData;
    while (1) {
        printf("\nLinked List Operations:\n");
        printf("1. Insert element before another element\n");
        printf("2. Insert element after another element\n");
        printf("3. Delete a given element\n");
        printf("4. Traverse the list\n");
        printf("5. Reverse the list\n");
        printf("6. Sort the list\n");
        printf("7. Delete every alternate node\n");
        printf("8. Insert element in sorted order\n");
        printf("9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the element before which you want to insert: ");
                scanf("%d", &element);
                printf("Enter the new data: ");
                scanf("%d", &newData);
                insertBefore(&head, element, newData);
                break;

            case 2:
                printf("Enter the element after which you want to insert: ");
                scanf("%d", &element);
                printf("Enter the new data: ");
                scanf("%d", &newData);
                insertAfter(createNode(element), newData);
                break;

            case 3:
                printf("Enter the element you want to delete: ");
                scanf("%d", &element);
                deleteNode(&head, element);
                break;

            case 4:
                printf("List: ");
                traverseList(head);
                break;

            case 5:
                head = reverseList(head);
                printf("List reversed.\n");
                break;

            case 6:
                sortList(&head);
                printf("List sorted.\n");
                break;

            case 7:
                deleteAlternateNodes(head);
                printf("Alternate nodes deleted.\n");
                break;

            case 8:
                printf("Enter the new data: ");
                scanf("%d", &newData);
                insertInSortedOrder(&head, newData);
                break;

            case 9:
                while (head != NULL) {
                    Node* temp = head;
                    head = head->next;
                    free(temp);
                }
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
