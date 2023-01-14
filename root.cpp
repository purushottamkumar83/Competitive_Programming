#include <iostream>
#include <math.h>
using namespace std;
template<class t>
void root(t a, t b, t c)
{
    t d;
    d=b*b-4*a*c;
    if(d==0)
    {
        cout<<"Roots are equal"<<endl;
        cout<<"R1 = R2 = "<<(-b/2*a);
    }
    else if(d > 0)
    {
        float r = sqrt(d);
        float r1 = (-b+r)/(2*a);
        float r2 = (-b-r)/(2*a);
        cout<<"Roots are real"<<endl;
        cout<<"R1 = "<<r1<<" , R2 = "<<r2<<endl;
    }
    else
    {
        float r = sqrt(-d);
        float r1 = -b/(2*a);
        float r2 = r/(2*a);
        cout<<"Root are complex"<<endl;
        cout<<"R1 = "<<r1<< ", R2 = i("<<r2<<")"<<endl;
    }
}
int main()
{
    root(1, -5, 6);
    root(1.5, 3.6, 5.0);
    return 0;
}