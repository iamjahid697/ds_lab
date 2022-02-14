#include<iostream>

#include <fstream>

using namespace std;

int main(){

    ofstream fout;

    fout.open("output.txt");

    string line;
    while(1){
        cout << "Enter the line or to stop Enter -1: " << endl;
        getline(cin, line);
        if(line == "-1") break;
        fout << line << endl;
    }



    return 0;
}

