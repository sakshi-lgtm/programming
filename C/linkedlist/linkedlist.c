#include<stdio.h>
#include<stdlib.h>

#define _nodePtr struct node *
#define _llPtr struct linkedList *

#define _node struct node
#define _ll struct linkedList


struct node {
    int data;
    struct node * next;
};

struct linkedList {
    struct node * head;
    int size;
};

//Create node object in heap and return its address
_nodePtr createNode() {
    return (_nodePtr)malloc(sizeof(_node));
}

void insertNodeAtHead(_llPtr list, int value) {
    _nodePtr newNode = createNode();

    // Initialize node
    newNode->data = value;
    newNode->next = list->head;

    // Update list
    list->head = newNode;

    list->size++;
}

void insertNodeAtTail(_llPtr list, int value) {
    _nodePtr newNode = createNode();
    newNode->data = value;
    newNode->next = NULL;

    if (list->head == NULL) {
        list->head = newNode;
    } else {
        // Go till the end
        _nodePtr itr = list->head;
        while (itr->next != NULL) {
            itr = itr->next;
        }

        itr->next = newNode;
    }

    list->size++;
}

int findNumInList(_llPtr list, int num) {
    _nodePtr itr = list->head;
    while(itr != NULL && itr->data != num) {
        itr = itr->next;
    }

    if (itr)
        return 1;
    else
        return 0;
}

void printList(_llPtr list) {
    _nodePtr itr = list->head;

    while (itr != NULL) {
        printf("%d -> ", itr->data);
        itr = itr->next;
    }

    printf("NULL\n");
}

void insertAt(_llPtr list, int index, int value) {
    if (index <= 0 || index > list->size + 1) {
        return; //
    }

    if (index == 1) {
        insertNodeAtHead(list, value);
    } else if (index == list->size + 1) {
        insertNodeAtTail(list, value);
    } else {
        _nodePtr itr = list->head;
        index = index - 2; // We have one based indexing
        while(index--) {
            itr = itr->next;
        }

        _nodePtr newNode =  createNode();

        newNode->data = value;
        newNode->next = itr->next;
        itr->next = newNode;

        list->size++;
    }
}

int main() {

    _llPtr list = (_llPtr)malloc(sizeof(_ll));

    list->head = NULL;
    list->size = 0;

    int numNodes;
    scanf("%d", &numNodes);

    while(numNodes--) {
        int num;
        scanf("%d", &num);

        insertNodeAtTail(list, num);
        printList(list);
    }

    int numToFind;
    scanf("%d", &numToFind);

    if(findNumInList(list, numToFind)) {
        printf("Number found!!\n");
    } else {
        printf("Number not found!!\n");
    }

    while (1) {
        int numToAdd, index;
        scanf("%d%d", &numToAdd, &index);

        insertAt(list, index, numToAdd);
        printList(list);
    }

    return 0;
}