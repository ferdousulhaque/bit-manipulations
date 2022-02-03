#include<bits/stdc++.h>
using namespace std;

int binary(int num){
    if(num == 0){
        return 0;
    }
    return (num % 2)+10*(binary(num / 2));
}


int main(){
    int n, k;
    cout << "Enter number: ";
    cin >> n;
    k = log2(n);
    cout << (1 << k);
    return 0;
}