#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, count;
    count = 0;
    cout << "Enter a number:";
    cin >> n;

    while(n){
        n &= (n-1);
        count++;
    }
    
    cout << "Set bits: " << count;
    return 0;
}