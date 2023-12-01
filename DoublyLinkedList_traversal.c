#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

void traversal(struct Node *head)
{
    struct Node *ptr=head;
    struct Node *p=head->next;

    do
    {
        printf("Element : %d\n",ptr->data);
        ptr=ptr->next;
        p=p->next;
    }while(p->next!=NULL);
    
    do
    {
        printf("Element : %d\n",ptr->data);
        ptr=ptr->prev;
        p=p->prev;
    } while (p->next!=NULL);
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
    head->prev=NULL;

    second->data=3;
    second->next=third;
    second->prev=head;

    third->data=5;
    third->next=fourth;
    third->prev=second;

    fourth->data=7;
    fourth->next=fifth;
    fourth->prev=third;

    fifth->data=11;
    fifth->next=NULL;
    fifth->prev=fourth;

    traversal(head);

    return 0;
}