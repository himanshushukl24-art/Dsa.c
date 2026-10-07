#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head = NULL;
    struct Node *newNode, *temp;

    // Create node 20
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = 20;
    newNode->next = NULL;
    head = newNode;

    // Create node 30
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = 30;
    newNode->next = NULL;
    head->next = newNode;

    // Create node 40
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = 40;
    newNode->next = NULL;
    head->next->next = newNode;

    // Insert 10 at beginning
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = 10;
    newNode->next = head;
    head = newNode;

    // Display updated list
    temp = head;
    printf("Updated Linked List: ");

    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL");

    return 0;
}