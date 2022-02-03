#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, position, maskBit, afterFlipBit;
    cout << "Enter number:";
    cin >> n;

    cout << "Flip bit on:";
    cin >> position;

    maskBit = 1 << position;
    afterFlipBit = (maskBit) ^ n;

    cout << "After Flip Bit New n:" << afterFlipBit;
    return 0;
}