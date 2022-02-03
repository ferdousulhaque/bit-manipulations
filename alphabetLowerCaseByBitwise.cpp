#include<bits/stdc++.h>
using namespace std;

int main(){
    char alpha, mask;
    cout << "Enter Upper Case:";
    cin >> alpha;

    mask = (1 << 5); // Equivalent ""
    alpha = alpha | mask;

    cout << "Lower Case:" << alpha;
    return 0;    
}