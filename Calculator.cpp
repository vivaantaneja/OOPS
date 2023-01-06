#include<iostream>
#include<math.h>
using namespace std;

class regular_calc
{
protected:
    int num1,num2;
public:
    static int count;
    void getdata();
    void displaydata();
    int addition(int,int);
    int subtraction(int,int);
    int multiplication(int,int);
    int division(int,int);
};

class scientific_calc : public regular_calc
{
protected:
    int num3;
public:
    void sc_displaydata();
    int square(int);
    int root(int);
    int factorial(int);
    int cube(int);
};

void regular_calc :: getdata()
{
    cout<<"Enter the first number"<<endl;
    cin>>num1;
    cout<<"Enter the second number"<<endl;
    cin>>num2;

}

void regular_calc :: displaydata()
{
    cout<<"Number "<<count+1<<" : "<<endl;
    count++;
}

int regular_calc :: addition(int num1, int num2)
{
    int ans;
    ans=num1 +num2;
    return ans;
}

int regular_calc :: subtraction(int num1, int num2)
{
    int ans;
    ans=num1 -num2;
    return ans;
}

int regular_calc :: multiplication(int num1, int num2)
{
    int ans;
    ans=num1*num2;
    return ans;
}

int regular_calc :: division(int num1, int num2)
{
    int ans;
    ans=num1/num2;
    return ans;
}

void scientific_calc :: sc_displaydata()
{
    cout<<"Enter the number"<<endl;
    cin>>num3;
}

int scientific_calc :: square(int num3)
{
    int ans;
    ans=num3*num3;
    return ans;
}

int scientific_calc :: cube(int num3)
{
    int ans;
    ans=num3*num3*num3;
    return ans;
}

int scientific_calc :: root(int num3)
{
    int ans;
    ans=sqrt(num3);
    return ans;
}

int scientific_calc :: factorial(int num3)
{
    int i,ans=1;
    for(i=1;i<=num3;i++)
    {
        ans=ans*i;
    }
    return ans;
    
}

int main()
{
    regular_calc c1;
    scientific_calc c2;
    int i;
    
    cout<<"REGULAR CALCULATOR"<<endl;
    cout<<endl;
    cout<<"1-ADDITION"<<endl;
    cout<<"2-SUBTRACTION"<<endl;
    cout<<"3-MULTIPLICATION"<<endl;
    cout<<"4-DIVISION"<<endl;
    cout<<"SCIENTIFIC CALCULATOR"<<endl;
    cout<<endl;
    cout<<"5-SQUARE"<<endl;
    cout<<"6-CUBE"<<endl;
    cout<<"7-ROOT"<<endl;
    cout<<"8-FACTORIAL"<<endl;
    
    cout<<"Enter the mathematical operation you want to do"<<endl;
    cin>>i;
    
    switch(i)
    {
        case 1:
            c2.getdata();
            cout<<"ANSWER : "<<c2.addition(num1,num2);
            
            
    }
    
    return 0;
}
