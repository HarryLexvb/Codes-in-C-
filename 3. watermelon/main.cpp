#include <iostream>
#include <bitset>

using namespace std;

int main() {

    int w;
    cin >> w;
    
    bitset<1> numero(w);
    
    if(w != 2){
        if(numero == 0 ) cout << "Yes" << endl;
        else  cout << "No" << endl;
    }
    if(w == 2) cout << "No" << endl;

}