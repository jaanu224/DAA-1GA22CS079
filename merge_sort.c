#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int count;
void Merge(int A[SIZE],int l,int m,int r)
{
    int i,j,k,B[SIZE];
    i=l;
    j=m+1;
    k=l;
    while(i<=m&&j<=r)
    {
        count++;
        if(A[i]<A[j])
            B[k++]=A[i++];
        else
            B[k++]=A[j++];
    }
    while(i<=m)
        B[k++]=A[i++];
    while(j<=r)
        B[k++]=A[j++];
    for(i=l;i<=r;i++)
        A[i]=B[i];
}
void Mergesort(int A[SIZE],int l,int r)
{
    int m;
    if(l<r)
    {
        m=(l+r)/2;
        Mergesort(A,l,m);
        Mergesort(A,m+1,r);
        Merge(A,l,m,r);
    }
}
int main()
{
    int i,n,A[SIZE];
    printf("\nEnter size:\n");
    scanf("%d",&n);
    printf("\nEnter the elements for the array\n");
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    Mergesort(A,0,n-1);
    printf("\nSorted array:\n");
    for(i=0;i<n;i++)
        printf("%d\t",A[i]);
    printf("\nTotal number of comparisons is %d\n",count);
    return 0;
}
