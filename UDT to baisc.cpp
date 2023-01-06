#include<iostream>
using namespace std;

class Cel
{
    float temp;
public:
    Cel(){temp=0;};
    Cel(float t)
    {
        temp=t;
    }
    operator float()
    {
        float f=9/5*temp +32;
        return f;
    }
};

int main()
{
    Cel c(9);
    float f=c;
    cout<<f;
    return 0;
}

