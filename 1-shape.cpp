#include<iostream>
using namespace std;
class Shape
{
    protected:
        double s1,s2;
        void get_data(double x,double y)
        {
            s1=x;
            s2=y;
        }
        virtual void display_area()=0;
};
class Triangle:public Shape
{
    public:
        void input_tri()
        {
            cout<<"Enter the base and height of triangle:";
            cin>>s1>>s2;
            get_data(s1,s2);
            
        }
        void display_area()
        {
            cout<<"Area of triangle is "<<0.5*s1*s2<<endl;
        }
};
class Rectangle:public Shape
{
    public:
        void input_rect()
        {
            cout<<"Enter the length and breadth of rectangle:";
            cin>>s1>>s2;
            get_data(s1,s2);
            
        }
        void display_area()
        {
            cout<<"Area of rectangle is "<<s1*s2<<endl;
        }
};
int main()
{
    Triangle t1;
    Rectangle r1;
    t1.input_tri();
    r1.input_rect();
    t1.display_area();
    r1.display_area();
    return 0;
}