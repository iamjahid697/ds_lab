#include <iostream>
#include<math.h>
using namespace std;


class AREA{

public:
    float area(float r){
        return (3.1459) * (r * r);
    }
    float area(float h, float w){
        return h * w;
    }

    float area(float a, float b, float c){
        float s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }
};
int main()
{
    float r, h, w, a, b, c;

    AREA obj1;
    cout << "Enter the radius of circle: ";
    cin >> r;
    cout << "The area of circle = " << obj1.area(r) << endl;


    cout << "Enter the hight and width of rectangle: ";
    cin >> h >> w;
    cout << "The area of rectangle = " << obj1.area(h, w) << endl;

    cout << "Enter three sides of triangle: ";
    cin >> a >> b >> c;
    cout << "The area of triangle = " << obj1.area(a, b, c) << endl;

    return 0;
}
