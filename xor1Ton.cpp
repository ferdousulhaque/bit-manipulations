#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the value ";
    cin >> n;

    // Logic
    if(n % 4 == 0)
        cout << n;
    else if(n % 4 == 1)
        cout << 1;
    else if(n % 4 == 2)
        cout << n+1;
    else
        cout << 0;
    
    return 0; 
}