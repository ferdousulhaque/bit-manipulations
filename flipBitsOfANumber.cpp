#include<bits/stdc++.h>
using namespace std;

int binary(int num)
{
    if (num == 0)
    {
        return 0;
    }

    return ((num % 2)+10*(binary(num / 2)));
}

int main(){
    int n, x, allOne, flipBits, firstOne;
    cout << "Enter a number:";
    cin >> n;
    // cout << binary(n) << "\n";

    // find bits in a number
    x = log2(n);

    // first bit set
    firstOne = 1 << x;
    
    // set only specific bits
    allOne = firstOne | firstOne - 1;

    // xor of the number and specific bits
    flipBits = n ^ allOne;

    // cout << binary(flipBits) << "\n";
    cout << "\n" << flipBits;
    return 0;
}