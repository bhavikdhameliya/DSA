#include<stdio.h>
#define n 5
int a[n],top=-1;
void dispaly()
{
    int i;
    for(i=0;i<=top;i++)
    printf("%d\t",a[i]);
    printf("\n");

}
int insert(int val)
{
    if(top>=n-1)
    printf("array is fill....\n");
    else{
        top++;
        a[top]=val;
    }
}
int delet()
{
    if(top<0)
    printf("array is empty....");
    else{
        top--;

    }
}
int main()
{
    int ch;
    printf("1.insert:\n");
    printf("1.deleat:\n");
    printf("1.display:\n");
    printf("1.exit:\n");

    while(ch!=4)
    {
      printf("enter your choise:");
      scanf("%d",&ch);
      switch ((ch))
      {
        case 1:
        insert(10);
        insert(20);
        insert(30);
        insert(40);
        insert(50);
        insert(60);
        break;

        case 2:
              delet();
           break;

        case 3:
              dispaly();
           break;   

        case 4:
            printf("exit :");
            break;
            default:

         printf("please enter valid num");            
      }
    };
}