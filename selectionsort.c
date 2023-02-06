#include<stdio.h>
 void selection_sort(int *A, int n){

    int i,temp,j,min;
    for(i=0;i<n-1;i++)
    {
        min=i;
    for(j=i+1;j<n;j++)
    {
        if(A[j]<A[min])
        {
            min=j;
        }}
    temp=A[i];
    A[i]=A[min];
    A[min]=temp;
    
    }
}

int main()
 {
    int A[50],n,j;
    printf("Enter Array Size :");
    scanf("%d",&n);
    printf("Enter Array elements :");
    for(j=0;j<n;j++)
    {
        scanf("%d",&A[j]);
    }
    printf("Before sorting Data is :");
     for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    
    selection_sort(A,n);
printf("\nAfter Sorting Data Is :");
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    return 0;
 }