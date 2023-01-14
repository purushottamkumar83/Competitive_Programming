#include<iostream>
using namespace std;
void pairWithSum(int *arr, int n, int sum)
{
    int lo, hi;
    lo=0;hi=n-1;
    bool pair=false;
    while(lo!=hi)
    {
        if(arr[lo]+arr[hi] == sum){
            pair=true;
            printf("%d %d\n", arr[lo], arr[hi]);
            lo++;
        }
        else if(arr[lo]+arr[hi]>sum)
            hi--;
        else
            lo++;
    }
    if(pair==false)
        printf("No any pair are in the given array with sum: %d",sum);
    return;
}
int main()
{
    int n, i, sum;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the element of the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the sum you are looking for:");
    scanf("%d",&sum);
    pairWithSum(arr, n, sum);
    return 0;
}