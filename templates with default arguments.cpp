#include<iostream>
using namespace std;
template <class T1=int,class T2=float,class T3=char>
class myClass
{
public:
    T1 a;
    T2 b;
    T3 c;
    myClass(T1 x,T2 y,T3 z)
    {
        a=x;
        b=y;
        c=z;
    }
    void display();
};

template <class T1,class T2,class T3>
void myClass<T1,T2,T3> :: display()
{
    cout<<a<<","<<b<<","<<c<<endl;
}

int main()
{
    myClass<> obj1(5,8.9,'v');
    obj1.display();
    myClass<double,char,string> obj2(7.6,'a',"vivaan");
    obj2.display();
    myClass<double,int> obj3(9.7,4,'m');
    obj3.display();
    return 0;
    
}
