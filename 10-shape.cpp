#include<iostream>
using namespace std;
class Shape
{
    private:
        double s1,s2;
    protected:
        void get_data(double x,double y=0)
        {
            s1=x;
            s2=y;
        }
        double get_s1()
        {
            return s1;
        }
        virtual void display_area()=0;
};
class Square:public Shape
{
    private:
        double area,side;
    public:
        void input_square()
        {
            cout<<"Enter the side of square:";
            cin>>side;
            get_data(side);
        }
        void display_area()
        {
            area=get_s1()*get_s1();
            cout<<"Area is "<<area<<endl;
        }
};
class Parallelogram:public Shape
{
    private:
        double area,base,height;
    public:
        void input_parallelogram()
        {
            cout<<"Enter base and height of parallelogram:";
            cin>>base>>height;
            get_data(base,height);
        }
        void display_area()
        {
            area=base*height;
            cout<<"Area is "<<area<<endl;
        }
};
int main()
{
    Square s1;
    Parallelogram p1;
    s1.input_square();
    s1.display_area();
    p1.input_parallelogram();
    p1.display_area();
    return 0;
}