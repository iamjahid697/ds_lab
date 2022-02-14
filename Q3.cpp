
#include <iostream>
using namespace std;
class ABC;
class PQR;
class XYZ
{
    int x;
public:
    void setvalue(int i)
    {
        x=i;
    }

    void getvalue()
    {
        cout << "In XYZ data =  " << x << endl;
    }

    friend void find_greatest(XYZ, ABC, PQR);
};
class ABC
{
    int a;
public:
    void setvalue(int i)
    {
        a = i;
    }

     void getvalue()
    {
        cout << "In ABC data =  " << a << endl;
    }
    friend void find_greatest(XYZ, ABC, PQR);
};

class PQR
{
    int p;
public:
    void setvalue(int i)
    {
        p = i;
    }

     void getvalue()
    {
        cout << "In PQR data =  " << p << endl;
    }
    friend void find_greatest(XYZ, ABC, PQR);
};
void find_greatest(XYZ xyz, ABC abc, PQR pqr){
    if(xyz.x > abc.a && xyz.x > pqr.p)
        cout<<"Largest number is: "<< xyz.x << endl;
    else if ( abc.a > xyz.x &&  abc.a > pqr.p)
        cout<<"Largest number is:"<<abc.a << endl;
    else 
        cout<<"Largest number is:"<< pqr.p << endl;
}
int main()
{
    ABC abc;
    abc.setvalue(10);
    XYZ xyz;
    xyz.setvalue(20);

    PQR pqr;
    pqr.setvalue(30);

    xyz.getvalue();
    abc.getvalue();
    pqr.getvalue();

    find_greatest(xyz, abc, pqr);

}
