#include<iostream>
using namespace std;
class Shape
{
    protected:
        double s1,s2;
        void get_data(double x,double y=0)
        {
            s1=x;
            s2=y;
        }
        virtual void display_area()=0;
};
class Circle:public Shape
{
    private:
        double area,radius;
    public:
        void input_radius()
        {
            cout<<"Enter the Radius:";
            cin>>radius;
            get_data(radius);
        }
        void display_area()
        {
            area=3.14*radius*radius;
            cout<<"Area is "<<area;
        }
};
int main()
{
    Circle C;
    C.input_radius();
    C.display_area();
    return 0;
}