#include<bits/stdc++.h>
using namespace std;

int main(){
    bool set;
    int n, position;
    cout << "Enter a number:";
    cin >> n;

    cout << "Check Set Bit at:";
    cin >> position;

    set = n & (1 << position);
    if(set)
        cout << "Set";
    else
        cout << "Not Set";
    return 0;
}