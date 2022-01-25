#include <iostream>

void print(int** matrix, int rows, int columns) {

    for(int i = 0; i < rows; i++) { // print matrix
        for(int j = 0; j < columns; j++) {
            std::cout << *(*(matrix + i) + j ) << "\t";
        }
        std::cout<<std::endl;
    }

    // free memory
    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i];
    }
    delete matrix;
}

int** create_matrix(int rows, int columns) {
    int** matrix = new int*[rows];

    for(int i = 0; i < rows; i++) {
        *(matrix + i) = new int[columns];

        for(int j = 0; j < columns; j++) {
            *(*(matrix + i) + j ) = 0;
        }
    }

    return matrix;
}

void fill_matrix(int** matrix, int rows, int columns) {

    for(int i = 0, k = 0; i < rows; i++) {
        if(i % 2 == 0) // if i is even
            for(int j = 0; j < columns; j++)
                *(*(matrix + i) + j ) = ++k;

        else // otherwise
            for (int j = columns - 1; j >= 0; --j)
                *(*(matrix + i) + j ) = ++k;
    }
}

int main(){

    int **A, rows ,columns;
    std::cin >> rows; //enter rows
    std::cin >> columns;  // enter columns

    // create matrix A
    A = create_matrix(rows, columns);

    // fill matrix A
    fill_matrix(A, rows, columns);

    // print matrix A
    print(A, rows, columns);
}