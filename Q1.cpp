
#include<iostream>
using namespace std;
class FACT{

    int n, factval;
public:
    FACT(){}
    FACT(int fact){
        n = fact;
        factval = 1;
        for(int i = 1; i <= n; i++){
            factval *= i;
        }
    }

    void print_fact(){
        cout << "Fact = " << factval << endl;
    }

};
int main(){

    int n;

    cout << "Enter The Number You Want To find factorial: ";
    cin >> n;

    FACT obj(n);
    obj.print_fact();

    return 0;
}
