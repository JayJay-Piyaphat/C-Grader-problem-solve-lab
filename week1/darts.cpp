#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N,x,y,sumscore=0;
    cin >> N;
    for (int i=0;i<N;i++){
        cin >> x >> y;
        float vector = sqrt((x*x)+(y*y));
        if (vector<=2){sumscore+=5;}
        else if (vector<=4){sumscore+=4;}
        else if (vector<=6){sumscore+=3;}
        else if (vector<=8){sumscore+=2;}
        else if (vector<=10){sumscore+=1;}
    }
    cout<< sumscore;
  return 0;
}
