#include<iostream>
using namespace std;
template<class a,int size=10>
class array
{
    a arr[size];
};
int main()
{
    array<int, 5> aa;
    cout<<"Hello world"<<endl;
    return 0;
}



// template <class a, class b>
// a& minmax(a x, b y)
// {
//     return x < y ? x : y;
//     cout<<" ";
// }
// int main()
// {
//     cout<< ++minmax(5, 3);
//     return 0;
//}