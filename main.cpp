//Maxwell Koegler | COMSC 210 | 9/1/26 | Lab 4
#include <iostream>
#include <random>
#include <iomanip>

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
    //initializing all colors for all vecs
    for(int i = 0; i < n; i++) {
        Color temp;
        temp.blue = rand()%101;
        temp.red = rand()%101;
        temp.green = rand()%101;
        myVec.push_back(temp);
    }
    //table header
    cout << setw(10) << "Color#" << setw(10) << "R value" << setw(10) << "G value" << "B value" << endl;
    cout << setw(10) << "______" << setw(10) << "_______" << setw(10) << "_______" << "_______" << endl;
    //table contents
    for(int i = 0; i < n; i++) {
        cout << left;
        cout << setw(10) << i+1 << setw(10) << myVec[i].red << setw(10) << myVec[i].green << setw(10) << myVec[i].blue << endl;
    }

}