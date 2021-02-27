#include<stdio.h>
#include<stdlib.h>


int main() {
    struct node {
        int data;
        struct node * next;
    };

    // We use malloc function defined in <stdlib.h> to allocate memory in heap
    // We allocate memory for the node with 'malloc(sizeof(struct node))
    // Malloc will allocate the memory in heap and return us the address of the location in heap
    // as 'void *'
    // To read and write from the memory we will need to give it a type. We do this by explicit type
    // casting.
    struct node* head = (struct node *)malloc(sizeof(struct node));
    struct node* nextNode = (struct node *)malloc(sizeof(struct node));
    struct node* nextNextNode = (struct node *)malloc(sizeof(struct node));

    head->data = 10;
    head->next = nextNode;

    nextNode->data = 20;
    nextNode->next = nextNextNode;

    nextNextNode->data = 30;
    nextNextNode->next = NULL;

    printf("Address of head: %u\n", head);
    printf("Address of nextNode: %u\n", nextNode);
    printf("Address of nextNextNode: %u\n", nextNextNode);

    struct node * itr;

    // We will start from the head of the linked list and traverse till NULL
    itr = head;
    while(itr != NULL) {
        printf("%d -> ", itr->data);
        itr = itr->next;

    }
    printf("NULL\n");

    return 0;
}