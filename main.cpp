//Maxwell Koegler | COMSC 210 | 9/1/26 | Lab 4
#include <iostream>
#include <vector>

using namespace std;

struct Color {
    int red;
    int blue;
    int green;
};

int main() {
    Color test;
    test.red = 1;
    test.blue = 2;
    test.green = 3;

    vector<Color> myVec;

    myVec.push_back(test);    

    cout << myVec[0].red << endl;
    cout << myVec[0].blue << endl;
    cout << myVec[0].green << endl;
}