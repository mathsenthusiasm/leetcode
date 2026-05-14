#include <stdio.h>
#include <stdlib.h>

// Define the node
struct Node {
    int data;
    struct Node* next;
};

// Function to reverse a linked list
struct Node* reverse(struct Node* head) {
    struct Node* prev = NULL;
    struct Node* current = head;
    struct Node* next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}

// Function to delete nodes that have a greater value on the right
struct Node* deleteLesserNodes(struct Node* head) {
    // Step 1: Reverse the list
    head = reverse(head);

    // Step 2: Traverse and keep track of max
    struct Node* current = head;
    struct Node* maxNode = head;
    struct Node* temp;

    while (current != NULL && current->next != NULL) {
        if (current->next->data < maxNode->data) {
            // Delete next node
            temp = current->next;
            current->next = temp->next;
            free(temp);
        } else {
            // Move forward
            current = current->next;
            maxNode = current;
        }
    }

    // Step 3: Reverse the list back to original order
    head = reverse(head);

    return head;
}

// Function to print the list
void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d", head->data);
        if (head->next != NULL) printf(" -> ");
        head = head->next;
    }
    printf("\n");
}

// Helper to create a new node
struct Node* newNode(int data) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

// Driver code
int main() {
    // Create the list: 12 -> 15 -> 10 -> 11 -> 5 -> 6 -> 2 -> 25
    struct Node* head = newNode(12);
    head->next = newNode(15);
    head->next->next = newNode(10);
    head->next->next->next = newNode(11);
    head->next->next->next->next = newNode(5);
    head->next->next->next->next->next = newNode(6);
    head->next->next->next->next->next->next = newNode(2);
    head->next->next->next->next->next->next->next = newNode(25);

    printf("Original list:\n");
    printList(head);

    head = deleteLesserNodes(head);

    printf("Modified list:\n");
    printList(head);

    return 0;
}
