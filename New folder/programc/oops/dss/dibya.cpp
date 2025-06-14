#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node*next;
};
typedef struct Node Node;

void linkedlist Traversal(struct Node*ptr)
{
    while (ptr!=Null){
        printf("Element:%d\n",ptr->data);
        ptr=ptr->next
    }
}
int main(){
    struct Node*head;
    struct Node*second;
    struct Node*third;
    struct Node*fourth;
    head =(struct Node*)malloc(size of(struct Node));
    second =(struct Node*)malloc(size of(struct Node));
    third =(struct Node*)malloc(size of(struct Node));
    head->data=7;
    head->next=second;
    second->data=11;
    second->next=third;
    third->data=41;
    third->next=fourth;
    fourth->data=66;
    fourth->next=NULL;
    Linked List Traversal(head);
    return 0;
}