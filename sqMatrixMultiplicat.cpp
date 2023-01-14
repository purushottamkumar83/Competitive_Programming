#include <iostream>

using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of the matrix: ";
    cin>>n;
    int a[n][n], b[n][n], c[n][n];
    //Matrix A
    cout<<"Enter "<<n*n<<" element of the first array:"<<endl;
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    }
    //Matrix B
    cout<<"Enter "<<n*n<<" element of the second array:"<<endl;
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cin>>b[i][j];
    }
    //Matrix C=A*B;
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            c[i][j]=0;
            for(int k=0;k<n;k++)
                c[i][j]+=(a[i][k]*b[k][j]);
        }
    }
    cout<<"The multiplication of the A and B is:"<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<c[i][j]<<"\t";
        }
        cout<<endl;
    }
    return 0;
}