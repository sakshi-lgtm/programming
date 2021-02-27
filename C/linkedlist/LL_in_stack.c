#include<stdio.h>
/**

   // Types first defined
   // Then you declare variable of that type
        // memory allocation (assume for now) happens when the variable are declared
   // Tnen you initialize them with values
        // meaning we put actual value in the memory location

    //This is type definition
    struct some_new_type {
        int x;
        char *str;
    };

    //This is declaration of the type as variable called 'p'
    struct some_new_type p; //Memory allocation happens due to this

    //This is initialization with some value
    p.str = "some string";
    p.x = 10;

*/
int main() {
    struct node {
        int data;
        struct node * next; // Self referential structure
    } head, nextNode, nextNextNode;

    head.data = 10;
    head.next = &nextNode;

    nextNode.data = 20;
    nextNode.next = &nextNextNode;

    nextNextNode.data = 30;
    nextNextNode.next = NULL;

    printf("Address of head: %u\n", &head);
    printf("Address of nextNode: %u\n", &nextNode);
    printf("Address of nextNextNode: %u\n", &nextNextNode);

    // 10 -> 20 -> 30 -> NULL

    //In array we have random access to any location
    //But in linked list we have to travel from the start to get to that location.

    //It would be slower than an array
    //Why would I ever choose linked list?

    struct node * itr;

    // We will start from the head of the linked list and traverse till NULL
    itr = &head;
    while(itr != NULL) {
        printf("%d -> ", itr->data);
        itr = itr->next;

    }
    printf("NULL\n");


    // Two things: Important
        //1) Stach has limited memory so we should create in HEAP for large amount of data.
        //2) Array have fixed length while linked lists have dynamic length (We add a node, anywhere at anytime)
    return 0;
}