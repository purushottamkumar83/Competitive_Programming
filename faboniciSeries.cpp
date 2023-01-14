#include <iostream>
#include <math.h>
using namespace std;
class fabbo{
    private:
    float x,y;
    public:
    fabbo()
    {
        this->x=1.61803;
        this->y=-0.61803;
    }
    int fabb(int n)
    {
        if(n==0) return 0;
        //Formula: nearest value of f(i) => F(i)=(x^n+y^n)/sqrt(5) or F(i)=(x^n)/sqrt(5)
        // x and y are the root of the equation => (x^2=x+1) 
        float res = ((pow(x,n)+pow(y,n))/(sqrt(5)));
        if(res>=(int(res)+0.5))
            return ceil(res);
        else
            return floor(res);
    }
};
int main()
{
    fabbo x;
    int res=x.fabb(0);
    cout<<"Faboncii of 4 is: "<<res<<endl;
    return 0;
}