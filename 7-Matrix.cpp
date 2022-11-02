#include<iostream>
using namespace std;
class Matrix
{
    protected:
        int matrix[2][2];
};
class Determinant:public Matrix
{
    private:
        int determinent;
    public:
        void input()
        {
            cout<<"Enter the elements of Matrix:";
            for(int i=0;i<2;i++)
                for(int j=0;j<2;j++)
                    cin>>matrix[i][j];
        }
        void calculate_determinant()
        {
            determinent=matrix[0][0]*matrix[1][1]-matrix[0][1]*matrix[1][0];
        }
        void display()
        {
            cout<<"Determinent="<<determinent;
        }
};
int main()
{
    Determinant D;
    D.input();
    D.calculate_determinant();
    D.display();
    return 0;
}