#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node * next;
};

void traversal(struct Node *ptr)
{
    while(ptr!=NULL)
    {
        printf("Element : %d\n",ptr->data);
        ptr=ptr->next;
    }
}


struct Node * InsertInBetween(struct Node *head, int data, int index)
{
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


int main()
{
    struct Node* head=(struct Node*)malloc(sizeof(struct Node));
    struct Node* second=(struct Node*)malloc(sizeof(struct Node));
    struct Node* third=(struct Node*)malloc(sizeof(struct Node));
    struct Node* fourth=(struct Node*)malloc(sizeof(struct Node));
    struct Node* fifth=(struct Node*)malloc(sizeof(struct Node));

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

    printf("Before Insertion : \n");
    traversal(head);

    printf("\nAfter Insertion : \n");
    head=InsertInBetween(head,99,3);
    traversal(head);

    return 0;
}
