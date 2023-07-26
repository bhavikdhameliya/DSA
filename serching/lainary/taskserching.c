#include<stdio.h>
#include<stdlib.h>

#define n 5
int a[n],i;


int find_linear(int z){

    for(i=0;i<n;i++){
    
        if(z==a[i])
        return i+1;
    }
    return -1;
}

int main(){
    int m; 
    for(i=0;i<n;i++){
    a[i]=rand()%100;
    printf("\n%d:[%d]",i+1,a[i]);
}

    printf("\n\nenter value for search:");
    scanf("%d",&m);

     int J = find_linear(m);

        
    if(J=-1)
       printf("\nYour Value in Array of Index Num : %d",i+1);
    else
        printf("\nYour Element Not Found..");

}
 