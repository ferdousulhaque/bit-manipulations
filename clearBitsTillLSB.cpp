#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, clearTill, mask;
    cout << "Enter a number:";
    cin >> n;

    cout << "Clear upto:";
    cin >> clearTill;

    mask = ~((1 << (clearTill + 1)) - 1);

    n = n & mask;
    cout << n;

    return 0;
}