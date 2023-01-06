#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string,int> marksMap;
    marksMap["Vivaan"]=100;
    marksMap["Vaishali"]=87;
    marksMap["Vikas"]=78;
    
    marksMap.insert({{"Mohak",21},{"Aryan",93}}); //To insert elements
    map<string,int> :: iterator it;
    for(it=marksMap.begin();it!=marksMap.end();it++)
    {
        cout<<(*it).first<<(*it).second<<endl; //first prints the key(name) and second prints the value(marks)
    }
    cout<<"The size of the map is : "<<marksMap.size()<<endl; //Size of map
    cout<<"The max-size of the map is : "<<marksMap.max_size()<<endl; //Max size of the map
    cout<<"The empty return value : "<<marksMap.empty()<<endl; //How many are empty
    return 0;
}
