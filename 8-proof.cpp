#include<iostream>
using namespace std;
class Proof
{
    protected:
        int a1,a2;
};
class Compute:public Proof
{
    private:
        int a,b,c;
    public:
        void input()
        {
            cout<<"Enter the sides of triangle:";
            cin>>a>>b>>c;
        }
        void calculate()
        {
            if(a*a==b*b+c*c)
                a1=1;
            else if(b*b==c*c+a*a)
                a1=1;
            else if(c*c==a*a+b*b)
                a1=1;
            else
                a1=0;
        }
        void display()
        {
            if(a1)
                cout<<"This is right angled triangle.\n";
            else 
                cout<<"This is not right angled triangle.\n";
        }
};
int main()
{
    Compute C1;
    C1.input();
    C1.calculate();
    C1.display();
    return 0;
}