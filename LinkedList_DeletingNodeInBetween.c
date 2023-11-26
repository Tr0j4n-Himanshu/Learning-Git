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

struct Node *DeletingNodeInBetween(struct Node *head , int index)
{
    struct Node *p=head;
    int i=0;
    while(i!=index-1)
    {
        p=p->next;
        i++;
    }
    struct Node *q=p->next;
    p->next=q->next;
    free(q);
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

    printf("\nBefore Deletion \n");
    traversal(head);

    printf("\nAfter Deletion \n");
    head=DeletingNodeInBetween(head ,3);
    traversal(head);
}