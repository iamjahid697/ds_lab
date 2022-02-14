#include <iostream>
using namespace std;

class Complex
{
private:
    double real,imag;
public:
    Complex()
    {
        real=imag=0;
    }
    Complex(double r)
    {
        real=r;
        imag=0;
    }
    Complex(double r, double i)
    {
        real=r;
        imag=i;
    }
    Complex(Complex &obj)
    {
        real=obj.real;
        imag=obj.imag;
    }
    Complex add(Complex c)
    {
        Complex Add;
        Add.real = real + c.real;
        Add.imag = imag + c.imag;
        return Add;
    }
    Complex operator+(Complex c2){
        Complex ret;
        ret.real = real + c2.real;
        ret.imag = imag + c2.imag;
        return ret;
    }
    void print()
    {
        cout<<real<<"+"<<imag<<"i"<<endl<<endl;
    }

};
int main()
{
    double real1,imag1,real2,imag2;
    cout<<"Enter the Real part of First Number: ";
    cin>>real1;
    cout<<"Enter the imaginary part of First Number: ";
    cin>>imag1;
    Complex obj1(real1,imag1);
    obj1.print();
    cout<<"Enter the Real part of Second Number: ";
    cin>>real2;
    cout<<"Enter the Imaginary part of second number: ";
    cin>>imag2;
    Complex obj2(real2,imag2);
    obj2.print();
    Complex c;
    c = obj1 + obj2;
    c.print();
    return 0;
}
