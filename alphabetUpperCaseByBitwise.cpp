#include<bits/stdc++.h>
using namespace std;

int main(){
    char alpha, mask;
    cout << "Enter Lower Case:";
    cin >> alpha;

    mask = ~(1 << 5);
    alpha = alpha & mask;

    cout << "Upper Case:" << alpha;
    return 0;    
}