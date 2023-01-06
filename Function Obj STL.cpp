#include<iostream>
#include <functional>
using namespace std;
void display(int arr[7])
{
    for(int i=0; i<7;i++)
    {
        cout<<arr[i]<<" ";
    }
}


int main()
{
    int arr[]={7,3,1,29,79,104,12};
    sort(arr,arr+3); //array is sorted only till 3rd element in ascending order
    display(arr);
    cout<<endl;
    sort(arr,arr+7); //All elements are sorted in ascending order
    display(arr);
    cout<<endl;
    sort(arr,arr+7,greater<int>());//Array is sorted in descending order using function object
    display(arr);
    cout<<endl;
    return 0;
    
}
