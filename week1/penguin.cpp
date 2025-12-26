#include <iostream>
using namespace std;

int main(){
    int N,count=0;
    cin >> N;
    int inversion[N];
    for (int i=0;i<N;i++){
        int num;
        cin >> num;
        inversion[i] = num;
    }
    for (int i=0;i<N;i++){
        for (int j=i+1;j<N;j++){
            if (inversion[i]<inversion[j]){count++;}
        }
    }
    cout << count;
    return 0;
}