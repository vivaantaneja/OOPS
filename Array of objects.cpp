#include<iostream>
using namespace std;
class purchase
{
    static int count;
    char username;
    int countOfItems;
    int amount;
    
public:
    void getdata();
    void printdata();
};

void purchase :: getdata()
{
    cin>>username;
    cin>>countOfItems;
    cin>>amount;
    count++;
}
 void purchase :: printdata()
{
     cout<<"Customer "<<count+1<<" : "
}
int main()
{
    purchase p[10];
    
}
