1.// Problem name: Q. Coordinates of a Point 
2.//Course title: Competitive Programming Sessional 
3.//Course code: 2310
4.// Course teacher name: Mirza Raquib
5.//Date: 23/4/25
#include<bits/stdc++.h>
using namespace std;

int main() {
    float X, Y;
    cin >> X >> Y;

    if (X == 0 && Y == 0) {
        cout << "Origem" << endl;
    } else if (X == 0) {
        cout << "Eixo Y" << endl;
    } else if (Y == 0) {
        cout << "Eixo X" << endl;
    } else if (X > 0 && Y > 0) {
        cout << "Q1" << endl;
    } else if (X < 0 && Y > 0) {
        cout << "Q2" << endl;
    } else if (X < 0 && Y < 0) {
        cout << "Q3" << endl;
    } else if (X > 0 && Y < 0) {
        cout << "Q4" << endl;
    }
}
