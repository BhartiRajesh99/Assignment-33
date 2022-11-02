#include<iostream>
using namespace std;
class Volume
{
    protected:
        double a,b;
        void get_data(double x,double y=0)
        {
            a=x;
            b=y;
        }
        virtual void display_volume()=0;
};
class Cube:public Volume
{
    private:
        double volume,side;
    public:
        void input_cube()
        {
            cout<<"Enter the side of cube:";
            cin>>side;
            get_data(side);
        }
        void display_volume()
        {
            volume=side*side*side;
            cout<<"Volume is "<<volume<<endl;
        }
};
class Sphere:public Volume
{
    private:
        double volume,radius;
    public:
        void input_sphere()
        {
            cout<<"Enter the radius of sphere:";
            cin>>radius;
            get_data(radius);
        }
        void display_volume()
        {
            volume=1.33*3.13*radius*radius*radius;
            cout<<"Volume is "<<volume<<endl;
        }
};
int main()
{
    Cube c1;
    Sphere s1;
    c1.input_cube();
    c1.display_volume();
    s1.input_sphere();
    s1.display_volume();
    return 0;
}