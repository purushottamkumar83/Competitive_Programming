#include <stdio.h>
#include <stdlib.h>
int checkBeauty(int [],int);
int main()
{
    int i,t;
    printf("Enter the number of test cases:");
    scanf("%d",&t);
    for ( i = 0; i < t; i++)
    {
        int n;
        printf("\nEnter the size of the array");
        scanf("%d",&n);
        int arr[n],j,res;
        printf("\nEnter the element\n");
        for(j=0;j<n;j++)
        {
            scanf("%d ",&arr[j]);
        }
        res=checkBeauty(arr,n);
        printf("\n%d",res);
    }
    return 0;
}

int checkBeauty(int a[],int n)
{
    int i,j, count = 0;
    for ( i = 0; i < n; i++)
    {
        for ( j =i+1; j < n; j++)
        {
            if(a[i] % a[j] != 0 && a[j] % a[i] != 0)
                count++;
        }
    }
    return count;
}