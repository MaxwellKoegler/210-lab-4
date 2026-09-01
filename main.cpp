//Maxwell Koegler | COMSC 210 | 9/1/26 | Lab 4
#include <iostream>
#include <vector>
#include <random>

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
    
    //vector cout
    int n = (rand() % 26) + 25;
    
    for(int i = 0; i < n; i++) {
        Color temp;
        temp.blue = 1;
        temp.red = 1;
        temp.green = 1;
        myVec.push_back(temp);
    }

    cout << myVec[20].red << endl;
    cout << myVec[20].blue << endl;
    cout << myVec[20].green << endl;
}