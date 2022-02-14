#include <iostream>
​
using namespace std;
​
class Square {
    int n;
public:
    Square(int number) {
        n = number * number;
    }
​
    int get_square() {
        return n;
    }
};
​
class Cube : public Square {
    int n;
public:
    Cube(int number) : Square(number) {
        n = number * get_square();
    }
​
    int get_cube() {
        return n;
    }
};
​
int main() {
    Square square(5);
    Cube cube(6);
​
    cout << "Square: " << square.get_square() << endl;
    cout << "Cube: " << cube.get_cube() << endl;
​
    return 0;
}
