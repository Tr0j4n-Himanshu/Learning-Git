#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if(ptr->top==-1)
    {
        return 1;
    }
    return 0;
}
int isFull(struct stack *ptr)
{
    if(ptr->top==ptr->size-1)
    {
        return 1;
    }
    return 0;
}
int main()
{
    struct stack *s;
    s->size=10;
    s->top=-1;
    s->arr=(int*)malloc(s->size* sizeof(int));

    if(isEmpty(s))
    {
        printf("The Stack is empty !!");
    }
    else
    {
        printf("The Stack is empty !!");
    }

    s->arr[0]=18;
    s->top++;

    if(isEmpty(s))
    {
        printf("The Stack is empty !!");
    }
    else
    {
        printf("The Stack is not empty !!");
    }

    /*for(int i=1;i<s->size-1;i++)
    {
        s->arr[i]=18;
        s->top++;
    }*/
    if(isFull(s))
    {
        printf("The Stack is full !!");
    }
    else
    {
        printf("The Stack is not full !!");
    }

    return 0;
}