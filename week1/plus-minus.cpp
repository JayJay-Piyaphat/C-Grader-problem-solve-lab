#include <iostream>
using namespace std;

int main(){
    int in,total=0;
    cin >> in;
    for (int i = 0;i<in;i++){
        int x;
        char op;
        if (i==0){cin >> total;continue;}
        cin >> op >> x;
        if (op == '+'){total += x;}
        else if (op == '-'){total -= x;}
    }
    cout << total;
    return 0;
}