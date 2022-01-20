#include <iostream>
using namespace std;

void print(int *arr, int size){
    for(int i = 0; i < size; ++i)
        cout << arr[i] << " ";
}

void fill_array(int *arrA, int *arrB, int *arrR, int size){
    for(int i = 0; i < size; ++i){
        arrR[i*2] = arrA[i];
    }
    for(int i = 0; i < size; ++i){
        arrR[2*(i+1)-1] = arrB[i];
    }
}

void reverse(int *arr, int size){
    int temp;
    for(int i = 0; i < size/2; ++i){
        temp = arr[i];
        arr[i] = arr[size-1-i];
        arr[size-1-i] = temp;
    }
}

int main() {
    int n, temp, *A, *B, *C, *D;

    cin >> n;  //enter size
    int new_n = 2*n;

    A = new int[n];
    B = new int[n];
    C = new int[new_n];
    D = new int[new_n];

    for(int i = 0; i < n; ++i)
        cin >> A[i];  //enter elements for A

    for(int i = 0; i < n; ++i)
        cin >> B[i]; //enter elements for B

    fill_array(A, B, C, n); //fill array C
    print(C, new_n); // print array C

    reverse(A, n);
    reverse(B, n);

    cout << endl;

    fill_array(A, B, D, n); //fill array D
    print(D, new_n); // print array D

    delete A;
    delete B;
    delete C;
    delete D;
}

/*
//////////////////////////////////////SECOND FORM///////////////////////////////////////
#include <iostream>
using namespace std;

int main() {
    int n, temp;

    cin >> n;  //enter size

    int A[n], B[n], C[8]={0}, D[8]={0};

    for(int i = 0; i < n; ++i)
        cin >> A[i];

    for(int i = 0; i < n; ++i)
        cin >> B[i];

    //fill C
    for(int i = 0; i < n; ++i){
        C[i*2] = A[i];
    }
    for(int i = 0; i < n; ++i){
        C[2*(i+1)-1] = B[i];
    }
    //print C
    for(int i = 0; i < 2*n; ++i){
        cout << C[i] << " ";
    }
    cout << "\n\n";
    //reverse A
    for(int i = 0; i < n/2; ++i){
        temp = A[i];
        A[i] = A[n-1-i];
        A[n-1-i] = temp;
    }

    //reverse B
    for(int i = 0; i < n/2; ++i){
        temp = B[i];
        B[i] = B[n-1-i];
        B[n-1-i] = temp;
    }
    //fill D
    for(int i = 0; i < n; ++i){
        D[i*2] = A[i];
    }
    for(int i = 0; i < n; ++i){
        D[2*(i+1)-1] = B[i];
    }

    cout << "\n\n";  //print D
    for(int i = 0; i < 2*n; ++i){
        cout << D[i] << " ";
    }

}
/////////////////////////////////////////////////////////////////////////////////////
 */

/////////////////////////////////THIRD FORM/////////////////////////////////////////
/*
#include <iostream>

int main() {
    int n;

    std::cin >> n;  //enter size

    int A[n], B[n];

    for(int i = 0; i < n; ++i)
        std::cin >> A[i];

    for(int i = 0; i < n; ++i)
        std::cin >> B[i];

    for(int i = 0; i < n; ++i){
        std::cout << A[i] << " ";
        std::cout << B[i] << " ";
    }
    std::cout << std::endl;
    for(int i = n - 1; i >= 0; --i){
        std::cout << A[i] << " ";
        std::cout << B[i] << " ";
    }

}*/
/////////////////////////////////////////////////////////////////////////////////////