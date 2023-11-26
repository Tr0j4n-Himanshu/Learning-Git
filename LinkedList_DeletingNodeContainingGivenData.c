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

struct Node *DeletingNodeContainingGivenData(struct Node *head , int data)
{
    struct Node *p=head;
    struct Node *q=head->next;

    while(q->data!=data && q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }
    if(q->data==data)
    {
        p->next=q->next;
        free(q);
    }
    else
    {
        printf("\nElement not found !!\n");

    }

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

    int data;
    printf("\nEnter data to delete : ");
    scanf("%d",&data);

    printf("\nAfter Deletion \n");
    head=DeletingNodeContainingGivenData(head,data);
    traversal(head);
}