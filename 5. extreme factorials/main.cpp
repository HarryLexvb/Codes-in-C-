#include <iostream>

using namespace std;

long long fact(long long x){ // factorial using recursion
        if(x == 0)
            return 1;
        else
            return x * fact(x - 1);
}

long long mod(long long a, long long b){ //get the remainder of the division between a and b
    long long q = a / b;
    if(q < 0) --q;
    return a - (b * q);
}

int main(){
    long long  N, M;
    cin >> N; // enter number N
    cin >> M; // enter number M
    if (M >= 23 and M <= 1007)
        cout << mod(fact(N), M);
}