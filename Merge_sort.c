#include<stdio.h>
void merge(int *a,int low,int high,int mid){

int i,k, j ,b[100];
i=low;
j=mid+1;
k=low;

while(i<=mid && j<=high){
    if (a[i]<a[j]){
        b[k]=a[i];
        i++,k++;
        }
    else {
        b[k]=a[j];
        j++,k++;
    }
}
while(i<=mid){
    b[k]=a[i];
    i++,k++;
}
while(j<=high)
{
    b[k]=a[j];
    j++,k++;
}
 for (int i = low; i <= high; i++)
    {
        a[i] = b[i];
    }
}
void merge_sort(int *a,int low,int high)
 {
    if(low<high){
        int mid=(low+high)/2;
        merge_sort(a,low,mid);
        merge_sort(a,mid+1,high);
        merge(a,low,high,mid);
    }
 }
 
 
 
 
 
 int main()
 {
    int a[50],n,j;
    printf("Enter Array Size");
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        scanf("%d",&a[j]);
    }
    int low=0;
    int high=n;
    
    merge_sort(a,low,high);
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
 }