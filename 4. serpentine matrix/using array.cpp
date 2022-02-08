/*
 * author: Harold ALejandro Villanueva Borda
 * Computer Science  2021
 * @harrylexvb
 * */

#include <iostream>

int main(){

    int rows, columns;

    std::cin >> rows; // enter rows
    std::cin >> columns; // enter columns

    int arr[rows][columns];

    for (int i = 0, k = 0; i < rows; ++i)
    {
        if(i % 2 == 0) // if i is even
            for (int j = 0; j < columns; ++j) // print from smallest to largest
                arr[i][j] = ++k;

        else //otherwise
            for (int j = columns - 1; j >= 0; --j) // print from largest to smallest
                arr[i][j] = ++k;
    }


    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < columns; ++j)
            std::cout << arr[i][j] << "\t"; // print matrix 
        std::cout << std::endl;
}