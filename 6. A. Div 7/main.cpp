/*
 * author: Harold ALejandro Villanueva Borda
 * Computer Science  2021
 * @harrylexvb
 * */

#include <iostream>

using namespace std;

/*int main(){

    int n, a, b, op;

    cin >> n; // enter number

    if(n >= 10 and n <= 999){
        if(n % 7 == 0) cout << n << endl;
        else{
            a = n % 7;
            b = n % 10;
            op = b + (7 - a);
            if (op < 10) cout << n + (7 - a) << endl;
            else cout << n - a << endl;
        }
    }
}*/
int main(){
    int t, n;
    cin >> t;
    for(int i = 0;  i < t; ++i){
        cin >> n;
        if (n % 7 == 0)
            cout << n << endl;
        else{
            int ans = -1;
            for(int j = 0; j < 10; ++j)
                if ((n - n % 10 + j) % 7 == 0)
                    ans = n - n % 10 + j;
            cout << ans << endl;
        }
    }
}