#include<iostream>
using namespace std;
class Cel
{
    float c;
public:
    Cel(){c=0;};
    Cel(float f)
    {
        c=f*9/5+32;
    }
    void show()
    {
        cout<<"Celcius : "<<c<<endl;
    }

};

int main()
{
    Cel cvalue;
    float f;
    cout<<"Fahrenheit :";
    cin>>f;
    cvalue=f;
    cvalue.show();
    return 0;
}
