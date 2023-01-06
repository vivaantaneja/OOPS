#include<iostream>
using namespace std;
template<class T>
class matrix
  {
    T m[10][10];
    int row,col;
     public:
    matrix(int a ,int b)
    {
        row=a;
        col=b;
    }
    void accept();
    void display();
    matrix sub(matrix);

};

template<class T>
void matrix<T>::accept()
{
    for(int i=0;i<row;i++)
    {
       for(int j=0;j<col;j++)
       {
        cin>>m[i][j];
       }
    }
}
template<class T>
void matrix<T>::display()
{
    for(int i=0;i<row;i++)
       {    cout<<"\n";
        for(int j=0;j<col;j++)
           cout<<"\t"<<m[i][j];
       }
}

template<class T>
matrix<T> matrix<T>::sub(matrix<T> B)
{
    matrix<T> C(row,col);
    for(int i=0;i<row;i++)
       for(int j=0;j<col;j++)
        C.m[i][j]=m[i][j]-B.m[i][j];
    return C;
}

int main()
   {
    int r,c;
    cout<<"\nEnter matrix Size(row&col): ";
        cin>>r>>c;
    cout<<"\nInteger Matrix";
    matrix<int> A(r,c),B(r,c),C(r,c);
          cout<<"\nEnter matrix1 Elements";
    A.accept();
    cout<<"\nEnter matrix2 Elements";
    B.accept();
    cout<<"\nMatrix1 is: \n";
        A.display();
    cout<<"\nMatrix2 is: \n";
        B.display();

C.display();
        C=A.sub(B);
    cout<<"\nMatrix subtraction is: \n";
    C.display();
}
