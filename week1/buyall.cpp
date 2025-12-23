#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a,b,c,round,type;
    int total1 = 0,total2 = 0,total3 = 0;
    cin >> a >> b >> c;
    cin >> round;
    for (int i=0;i<round;i++){
        cin >> type;
        if (type == 1){total1 += a;}
        if (type == 2){total2 += b;}
        if (type == 3){total3 += c;}
    }
    cout << min(total1,min(total2,total3));
return 0;
}