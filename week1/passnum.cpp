#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> pass;
    vector<int> ans;
    int N,T,num,n1,n2,temp;
    cin >> N >> T;
    for (int i = 0;i<N;i++){
        cin >> num;
        pass.push_back(num);
        }
    for (int test:pass){
        cout << test;
        }
}