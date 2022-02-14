#include <iostream>
using namespace std;
class ABC;
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

    friend void swap(XYZ *,ABC*);
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
    friend void swap(XYZ *,ABC*);
};
void swap(XYZ *obj1, ABC *obj2){
    int temp;
    temp = obj1->x;
    obj1->x = obj2->a;
    obj2->a = temp;
}
int main()
{
    ABC abc;
    abc.setvalue(10);
    XYZ xyz;
    xyz.setvalue(20);

    xyz.getvalue();
    abc.getvalue();
    swap( &xyz, &abc);

    cout << "After Swap: " << endl;
    xyz.getvalue();
    abc.getvalue();


}
