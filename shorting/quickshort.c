#include<stdio.h>
#include<stdlib.h>
int n;
void print (int a[])
{
    int i;
    printf("\n");
    for(i=0;i<n;i++)
    printf(" \t%d ",a[i]);
}

void quicksort(int a[],int frist,int last)
{
    int i,j,temp,pivot;
    if(frist<last)
    {
        print(a);
        pivot=frist;
        i=frist,j=last;
        while(i<j)
        {
            while(a[i]<=a[pivot]&&i<last)
            i++;
            while(a[j]>a[pivot])
            j--;
            if(i<j)
            {
                temp=a[i];
                a[i]=a[j];
                a[i]=temp;
            }
        temp=a[pivot];
        a[pivot]=a[j];
        a[j]=temp;
        quicksort(a,frist,j-1);
        quicksort(a,j+1,last);
        }
    }
}
int main()
{
    int a[25],i;
    //int a[]={60,10,30,49,45,34,23,12};
    printf("how many elements enter:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
      a[i]=rand()%100+1;
      //printf(a);
      quicksort(a,0,n-1);
      printf("\n after quick sort :");
      print(a);
}