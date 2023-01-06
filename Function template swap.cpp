#include<iostream>
using namespace std;
template<class T>
void swapNum(T &a,T &b)
{
    
    T temp = a;
    a=b;
    b=temp;
}

int main()
{
    int a,b;
    cout<<"CASE 1"<<endl;
    cin>>a>>b;
    cout<<"Before swap"<<endl<<"x="<<a<<" "<<"y="<<b<<endl;
    swapNum(a,b);
    cout<<"After swap"<<endl<<"x="<<a<<" "<<"y="<<b<<endl;
    
    cout<<"CASE 2"<<endl;
    float x,y;
    cin>>x>>y;
    cout<<"Before swap"<<endl<<"x= "<<x<<" "<<"y= "<<y<<endl;
    swapNum(x,y);
    cout<<"After swap"<<endl<<"x= "<<x<<" "<<"y= "<<y<<endl;
    return 0;;
}

