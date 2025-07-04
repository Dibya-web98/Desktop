// // #include<stdio.h>  
// // int main(){
// //     int a=10,b=20,e,f;
// //     printf("%d %d",a,b);
// //     swap(&a,&b);
// //     printf("%d %d",a,b);
// // }
// // swap(int*c,int*d){
// //     interchange(&c,&d);

// // }
// // interchange(int **e,int **f){
// //     int t;
// //     t=e;
// //     e=f;
// //     f=t;

// // // }
// // #include <stdio.h>

// // // Function to swap values using pointers
// // void interchange(int *e, int *f) {
// //     int t = *e;
// //     *e = *f;
// //     *f = t;
// // }

// // // Function to call interchange
// // void swap(int *c, int *d) {
// //     interchange(c, d);
// // }

// // int main() {
// //     int a = 10, b = 20;
// //     printf("Before swap: %d %d\n", a, b);
    
// //     swap(&a, &b); // Pass addresses of a and b
    
// //     printf("After swap: %d %d\n", a, b);
// //     return 0;
// // }
// #include<stdio.h>

// void swap(int*, int*);
// void interchange(int*, int*);

// int main() {
//     int a = 10, b = 20;
//     printf("Before swapping: %d %d\n", a, b);
//     swap(&a, &b);
//     printf("After swapping: %d %d\n", a, b);
//     return 0;
// }

// void swap(int* c, int* d) {
//     interchange(c, d);
// }

// void interchange(int* e, int* f) {
//     int t;
//     t = *e;
//     *e = *f;
//     *f = t;
// }
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// Case 1
struct Node * insertAtFirst(struct Node *head, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = head;
    return ptr; 
}

// Case 2
struct Node * insertAtIndex(struct Node *head, int data, int index){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    struct Node * p = head;
    int i = 0;

    while (i!=index-1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

// Case 3
struct Node * insertAtEnd(struct Node *head, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node * p = head;

    while(p->next!=NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

// Case 4
struct Node * insertAfterNode(struct Node *head, struct Node *prevNode, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = prevNode->next;
    prevNode->next = ptr;

    
    return head;
}


int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 11;
    second->next = third;

    // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = 66;
    fourth->next = NULL;

    printf("Linked list before insertion\n");
    linkedListTraversal(head);
    // head = insertAtFirst(head, 56);
    // head = insertAtIndex(head, 56, 1);
    // head = insertAtEnd(head, 56);
    head = insertAfterNode(head, third, 45);
    printf("\nLinked list after insertion\n");
    linkedListTraversal(head);

    
    return 0;
}
