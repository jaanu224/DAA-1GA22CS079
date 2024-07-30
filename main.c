#include <stdio.h>
#include <stdlib.h>
int min(int a,int b)
{
    if(a<b)
        return a;
    else
        return b;
}
void floyds(int a[10][10],int n)
{
    int i,j,k;
    for(k=1;k<=n;k++)
        for(i=1;i<=n;i++)
           for(j=1;j<=n;j++)
              a[i][j]=min(a[i][j],a[i][k]+a[k][j]);
}

int main()
{
    int n,a[10][10],i,j;
    printf("\nEnter number of nodes:");
    scanf("%d",&n);
    printf("\nRead cost matrix:\n");
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
          scanf("%d",&a[i][j]);
    floyds(a,n);
    printf("\nAll pair shortest path:\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

