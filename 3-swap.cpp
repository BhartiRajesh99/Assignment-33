#include<iostream>
using namespace std;
class Demo1
{
    private:
        int x;
    public:
        Demo1(int r)
        {
            x=r;
        }
        void swap(Demo1 *p)
        {
            int temp;
            temp=x;
            x=p->x;
            p->x=temp;
        }
        void display()
        {
            cout<<x<<endl;
        }
};
int main()
{
    Demo1 a1(2),a2(4);
    a1.display();
    a2.display();
    a1.swap(&a2);
    a1.display();
    a2.display();
    return 0;
}
