#include <iostream>
using namespace std;
class Matrix {

public:
    int arr[100][100];
    void display();
    int N;
    void operator-(Matrix x);
    Matrix(){};
    Matrix(int a)
    {
        N=a;
        for (int i = 0; i <N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cin >> arr[i][j];
            }
        }
    }
};

void Matrix::display()
{

    for (int i = 0; i < N; i++) {

        for (int j = 0; j < N; j++) {

            cout << arr[i][j] << ' ';
        }
        cout << endl;
    }
}
void Matrix::operator-(Matrix x)
{
    int mat[N][N];
    
    for (int i = 0; i < N; i++) {

        for (int j = 0; j < N; j++) {

            
            mat[i][j] = arr[i][j]
                        - x.arr[i][j];
        }
    }


    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {

            
            cout << mat[i][j] << ' ';
        }
        cout << endl;
    }
}

int main()
{

    Matrix mat1(2), mat2(2);
    cout << "Subtraction of two given"
        << " Matrices is : \n";
    mat1 - mat2;

   
    return 0;
}

