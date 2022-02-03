#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, count;
    count = 0;
    cout << "Enter a number:";
    cin >> n;
    
    while(n >>= 1){
        count++;
    }
    cout << "log2 of number: " << count;

    return 0;
}