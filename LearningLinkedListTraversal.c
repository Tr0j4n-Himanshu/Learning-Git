#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node* next;
};

void traversal(struct Node *ptr)
{
    int i=0;
    while(ptr!=NULL)
    {
        
        i++;
        printf("Element %d ",i);
        printf(" : %d \n",ptr->data);
        ptr=ptr->next;
    }
}

int main()
{
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;
    struct Node* fifth;


//Allocate memory for nodes in the linked list in Heap
    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));
    fifth=(struct Node*)malloc(sizeof(struct Node));

//Link fisrt and second nodes
    head->data=2;
    head->next=second;
     
//Link second and third nodes
    second->data=3;
    second->next = third;

//Link third and fourth nodes
    third->data=5;
    third->next=fourth;

//Link third and fourth nodes
    fourth->data=7;
    fourth->next=fifth;    

//Terminate the list at the third node
     fifth->data=11;
     fifth->next=NULL;

     traversal(head);



}