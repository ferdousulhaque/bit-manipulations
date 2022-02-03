#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, position, maskBit, afterSetBit;
    cout << "Enter number:";
    cin >> n;

    cout << "Set bit on:";
    cin >> position;

    maskBit = 1 << position;

    afterSetBit = maskBit | n;

    cout << "After Set Bit New n:" << afterSetBit;
    return 0;
}