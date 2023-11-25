#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void traversal(struct Node *ptr)
{
  while(ptr!=NULL)
  {
    printf("Element : %d\n",ptr->data);
    ptr=ptr->next;
  }  
}

struct Node* InsertAtFirst(struct Node *head , int data)
{
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    ptr->next=head;
    return ptr;
}

int main()
{
    struct Node* head;
    struct Node* second;
    struct Node* third;
    struct Node* fourth;
    struct Node* fifth;

    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));
    fourth=(struct Node*)malloc(sizeof(struct Node));
    fifth=(struct Node*)malloc(sizeof(struct Node));

    head->data=2;
    head->next=second;
     

    second->data=3;
    second->next = third;


    third->data=5;
    third->next=fourth;


    fourth->data=7;
    fourth->next=fifth; 


    fifth->data=11;
    fifth->next=NULL;
    
    printf("Before Insertion : \n");
    traversal(head);
    printf("\nAfter Insertion : \n");
    head=InsertAtFirst(head,0);
    traversal(head);

}
