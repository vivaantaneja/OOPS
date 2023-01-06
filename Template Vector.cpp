#include<iostream>
using namespace std;
template <class T>
class Vectors
{
    int size;
    T *arr;
public:
    Vectors(int s)
    {
        size =s;
        arr= new T[size];
    }
    T dotProduct(Vectors v);
    void setData();
};
template<class T>
void Vectors<T>::setData()
{
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}
template<class T>
T Vectors<T>::dotProduct(Vectors v)
{
    T d=0;
    for(int i=0;i<size;i++)
    {
        d+=arr[i]*v.arr[i];
    }
    return d;
}

int main()
{
    Vectors<int> v1(3);
    v1.setData();
    Vectors<int> v2(3);
    v2.setData();
    cout<<v1.dotProduct(v2);
    return 0;
    
}
