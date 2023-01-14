#include <iostream>

using namespace std;
int maxCrossing(int *, int, int, int);
int maxSubarray(int *, int, int);
int main()
{
    int x;
    cout<<"Enter the size of the array:";
    cin>>x;
    int a[x];
    cout<<"Enter the "<<x<<" element of the array:"<<endl;
    for (int i = 0; i < x; i++)
        cin>>a[i];
    int res= maxSubarray(a,0,x-1);
    cout<<"The result is :"<<res;
    return 0;
}
int maxCrossing(int a[], int low, int mid, int high)
{
    int lsum = 0, sum=0, rsum=0;
    for (int i = mid; i >= low; i--)
    {
        if(i==0)
            lsum=a[i];
        sum+=a[i];
        if (lsum<sum)
            lsum=sum;
    }
    sum=0;
    for (int i = mid+1; i <= high; i++)
    {
        if(i == mid+1)
            rsum=a[i];
        sum+=a[i];
        if(sum>rsum)
            rsum=sum;
    }
    return lsum+rsum;
}
int maxSubarray(int a[], int low, int high)
{
    if (high == low) return a[low];
    else
    {
        int mid = (low+high)/2;
        int lsum=maxSubarray(a,low,mid);
        int rsum=maxSubarray(a,mid+1,high);
        int csum=maxCrossing(a, low, mid, high);
        if (lsum > rsum && lsum > csum) return lsum;
        else if(rsum > lsum && rsum > csum) return rsum;
        else return csum;
    }
}