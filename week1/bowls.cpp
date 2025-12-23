#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int bowl,beforesame=-99,group=0,maxgroup=0;
    cin >> bowl;
    int totalbowl[bowl];
    for (int i=0;i<bowl;i++){
        cin >> totalbowl[i];
    }
    sort(totalbowl, totalbowl + bowl);
    int same=0;
    for (int i=0;i<bowl;i++){
        if (bowl!=0){
        if (i==0){group++;maxgroup++;}
        if(totalbowl[i]==same){group++;beforesame = totalbowl[i];}
        same = totalbowl[i];
        if (totalbowl[i]!=beforesame){if(group>maxgroup){maxgroup=group;}group=1;}
        }}
    cout << maxgroup;

  return 0;
}