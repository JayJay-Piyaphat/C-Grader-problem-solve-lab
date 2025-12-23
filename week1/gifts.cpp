#include <iostream>
using namespace std;

int main() {
    int item,sumvalue = 0;
    cin >> item;
    for (int i=0;i<item;i++){int value;cin >> value; if (value>0){sumvalue+= value;}}
    cout << sumvalue;
  return 0;
}
