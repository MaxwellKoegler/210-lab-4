//Maxwell Koegler | COMSC 210 | 9/1/26 | Lab 4
#include <iostream>
#include <random>
#include <iomanip>
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
    
    //vector cout
    int n = (rand() % 26) + 25;

    for(int i = 0; i < n; i++) {
        Color temp;
        temp.blue = 1;
        temp.red = 1;
        temp.green = 1;
        myVec.push_back(temp);
    }

    for(int i = 0; i , n; i++) {
        cout << left;
        cout << setw(10) << myVec[i].red << setw(10) << myVec[i].green << setw(10) << myVec[i].blue << endl;
    }

}