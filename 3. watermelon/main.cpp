#include <iostream>
#include <bitset>

using namespace std;

int main() {

    int w;
    cout << "enter a number: "; cin >> w;
    bitset<1> numero(w);
    if(numero == 0) cout << "Yes" << endl;
    else cout << "No" << endl;

}