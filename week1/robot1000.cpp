#include <iostream>
using namespace std;

int main() {
    char in;
    int x=0,y=0;
    while(cin >> in){
        if (in == 'N'){x++;}
        else if (in == 'S'){x--;}
        else if (in == 'E'){y++;}
        else if (in == 'W'){y--;}
        else if (in == 'Z'){x=0;y=0;}
    }
    cout << y << " " << x; 
    return 0;
}