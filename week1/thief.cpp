#include <iostream>
using namespace std;

int main(){
    int N,K,T,position = 1, count = 1;
    cin >> N >> K >> T;
    while (position != T){
        position += K;
        position = position%N;
        count++;
        if (position == 1){count--;break;}
    }
    cout<<count;
    return 0;
}