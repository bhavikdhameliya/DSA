#include<stdio.h>
#define n 5 
int f=-1,r=-1;
int a[n];
int dispaly ()

{
    if(f<0)
    {
        printf(" queue is empty\n");

    }
    else
    {
    for(int i=f;i<=r;i++)
    {

        printf("\n%d",a[i]);
    }
    printf("\n");
}
}

int insertend(int val)
{
   if(r>= n-1)
   printf("\nqueue is full ");
   else if (r<0)
   {
    f=r=0;
    a[r]=val;
   }
   else 
   {
    r++;
    a[r]=val;
   }
}



int delet()
{
    if(f<0){
    printf("\nqueue is empty ");}
    else if(f==r)
    {
        f=r=-1;
    }
    else
    {
        f++;
    }
    
}
int main()
{
    {
        int m,ch;
    printf("1.insertend:\n");
    printf("2.delet:\n");
    printf("3.dispaly:\n");
    printf("4.exit:\n");

    while(ch!=4)
    {
      printf("enter your choise:");
      scanf("%d",&ch);
      switch ((ch))
      {
        case 1:
        printf("enter your elements :");
      scanf("%d",&m);
      insertend(m);
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
}