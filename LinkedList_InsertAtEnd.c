#include <stdio.h>
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

struct Node * InsertAtEnd(struct Node * head,int data)
{
    struct Node* ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node* p=head;

    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
}

int main()
{
    struct Node* head=(struct Node *)malloc(sizeof(struct Node));
    struct Node* second=(struct Node *)malloc(sizeof(struct Node));
    struct Node* third=(struct Node *)malloc(sizeof(struct Node));
    struct Node* fourth=(struct Node *)malloc(sizeof(struct Node));
    struct Node* fifth=(struct Node *)malloc(sizeof(struct Node));

    head->data=2;
    head->next=second;

    second->data=3;
    second->next=third;

    third->data=5;
    third->next=fourth;

    fourth->data=7;
    fourth->next=fifth;

    fifth->data=11;
    fifth->next=NULL;

    printf("\nBefore Insertion \n");
    traversal(head);

    printf("\nAfter Insertion \n");
    head=InsertAtEnd(head,99);
    traversal(head);

    return 0;
}