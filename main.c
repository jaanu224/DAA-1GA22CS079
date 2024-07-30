#include <stdio.h>
#include <stdlib.h>
#define size 100
int count;
void selectionsort(int A[size],int n)
{
    int i,j,temp,min;
    for(i=0;i<=n-2;i++)
    {
       min=i;
       for(j=i+1;j<=n-1;j++)
       {
           count++;
           if(A[j]<A[min])
             min=j;
       }
       temp=A[i];
       A[i]=A[min];
       A[min]=temp;
    }
}
int main()
{
    int A[size],n,i;
    printf("\nEnter the size of array:");
    scanf("%d",&n);
    printf("\nEnter the elements of array:\n");
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    selectionsort(A,n);
    printf("\nSorted elements are:\n");
    for(i=0;i<n;i++)
        printf("%d\t",A[i]);
    printf("\nNumber of comparisons is:%d\n",count);
    return 0;
}
