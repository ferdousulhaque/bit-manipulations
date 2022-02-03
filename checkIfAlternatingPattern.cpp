#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, num;
    cout << "Enter n:";
    cin >> n;
    num = n ^ (n >> 1);

    if ((num & (num+1)) == 0)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
    return 0;
}