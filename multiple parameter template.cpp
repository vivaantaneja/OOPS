#include <iostream>
using namespace std;
template<class T1,class T2>
class myClass
{
public:
    T1 data1;
    T2 data2;
    myClass(T1 a,T2 b)
    {
        data1=a;
        data2=b;
    }
    void display();
};

template<class T1,class T2>
void myClass<T1, T2> :: display()
{
    cout<<data1<<","<<data2<<endl;
}

int main()
{
    myClass<int,float> obj1(3,7.2);
    myClass<char,double> obj2('v',3.14);
    myClass<string,int> obj3("vivaan",7);
    obj1.display();
    obj2.display();
    obj3.display();
    return 0;
}
