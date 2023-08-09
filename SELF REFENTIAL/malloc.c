//malloc->memory allocation (heap)
#include<stdio.h>
struct node
{
    int data;
    char ch;
    struct node *ptr;
};
int main()
{
    struct node x,y;
    x.ch='a';
    x.data=65;
    x.ptr=NULL;

    y.ch='z';
    y.data=70;
    y.ptr=NULL;

    y.ptr=&x;
    x.ptr=&y;

    printf("x : \n data :%d \t ch : %c ", y.ptr->data,y.ptr->ch);

    printf("\n\ny : \n data :%d \t ch : %c ",x.ptr->data,x.ptr->ch);
}
