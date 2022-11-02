#include<iostream>
using namespace std;
class Photon
{
    protected:
        double wavelength;

};
class PhotonEnergy:public Photon
{
    private:
        double energy;
    public:
        void set_wavelength()
        {
            cout<<"Enter wavelength:";
            cin>>wavelength;
        }
        void calculate()
        {
            energy=6.63*wavelength;
        }
        void display()
        {
            cout<<"Photon Energy="<<energy;
        }
};
int main()
{
    PhotonEnergy P1;
    P1.set_wavelength();
    P1.calculate();
    P1.display();
    return 0;
}