#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Please input a number ";
    cin >> n;
    if(n && (!(n&(n-1)))){
        cout << "yes";
    }else{
        cout << "no";
    }
    
    return 0;
}
