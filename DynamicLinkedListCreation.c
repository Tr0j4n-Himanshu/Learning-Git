#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a new node at the end of the linked list
void insertNode(struct Node** head, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (*head == NULL) {
        // If the list is empty, make the new node the head
        *head = newNode;
    } else {
        // Otherwise, find the last node and append the new node
        struct Node* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

// Function to display the linked list
void displayList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL; // Initialize an empty linked list

    int n;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    // Create nodes and insert them into the linked list
    for (int i = 0; i < n; ++i) {
        int value;
        printf("Enter the value for node %d: ", i + 1);
        scanf("%d", &value);
        insertNode(&head, value);
    }

    // Display the linked list
    printf("Linked List: ");
    displayList(head);

    // Don't forget to free the allocated memory
    struct Node* current = head;
    while (current != NULL) {
        struct Node* next = current->next;
        free(current);
        current = next;
    }

    return 0;
}
