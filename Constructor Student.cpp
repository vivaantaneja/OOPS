#include<iostream>
using namespace std;
class student
{
public:

    float marks;
    student()
    {
        marks=0;
    }
    student(float m)
    {
        marks=m;
    }
    void calculateAverage(student s1, student s2);
};

void student :: calculateAverage(student s1, student s2)
{
    float avg;
    avg=(s1.marks + s2.marks)/2;
    cout<<"Average marks: "<<avg<<endl;
}

int main()
{
    student s1(88),s2(56),s3;
    s3.calculateAverage(s1,s2);
    return 0;
    
}

