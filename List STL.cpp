#include <iostream>
#include <list>
using namespace std;

void display(list<int> &lst)
{
    list<int> :: iterator it;
    for(it=lst.begin(); it!=lst.end();it++)
    {
        cout<<*it<<" ";
    }
}

int main()
{
    list<int> list1;
    list<int> list2;
    
    //Enter data
    list1.push_back(5);
    list1.push_back(6);
    list1.push_back(12);
    list1.push_back(25);
    list1.push_back(12);
    list1.push_back(10);
    display(list1);
    
    list2.push_back(21);
    list2.push_back(1);
    list2.push_back(17);
    list2.push_back(12);
    
    cout<<endl;
    
    //Remove elements
    list1.pop_front(); //removes element from front
    list1.pop_back();//removes element from front
    list1.remove(12);//removes all 5 in the list
    display(list1);
    
    cout<<endl;
    
    //Sorting the list
    list1.sort();
    display(list1);
    
    cout<<endl;
    
    //Reversing the list
    list1.reverse();
    display(list1);
    
    cout<<endl;
    
    //Merging 2 lists
    list1.merge(list2);
    display(list1);
    
    return 0;
}

