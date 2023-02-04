#include<stdio.h>
int main()
{
    int n,sum=0,i,j,arr[10][10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
            if(i==j)
              sum+=arr[i][j];
        }
    printf("%d",sum);
}
