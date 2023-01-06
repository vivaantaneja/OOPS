#include<iostream>
using namespace std;

class complex
{
public:
    static int counter;
    int real, img;
    void getcomplex();
    void displaycomplex();
    void sum(complex,complex);
};

int complex :: counter;

void complex :: getcomplex()
{
    cout<<"Enter the value of real part"<<endl;
    cin>>real;
    cout<<"Enter the value of imaginary part"<<endl;
    cin>>img;
}

void complex :: displaycomplex()
{
    cout<<"The complex number "<<counter +1<<" is"<<endl;
    cout<<real<<" + i"<<img<<endl;
    counter ++;
}

void complex :: sum(complex c1, complex c2)
{
    complex c3;
    c3.real = c1.real + c2.real;
    c3.img = c1.img + c2.img;
    
    cout<<"The sum of the two complex numbers is : "<<c3.real<<" + i"<<c3.img<<endl;
}

int main()
{
    complex c1,c2,c3;
    c1.getcomplex();
    c2.getcomplex();
    c1.displaycomplex();
    c2.displaycomplex();
    c3.sum(c1, c2);
    
    return 0;
}

