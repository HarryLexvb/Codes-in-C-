/*
 * author: Harold ALejandro Villanueva Borda
 * Computer Science  2021
 * @harrylexvb
 * */
 
#include <iostream>
using namespace std;

/*this program consists of generating an array, printing and repeating the element as many times as the user wants*/

void generate_array(int *arr, int Size){
  for(int i = 0; i < Size; ++i){ //llenamos el array
    cout << "\nenter element: "; cin >> arr[i];
    cout << endl;
  }
}

void print(int *arr, int Size){
    cout << "[";
  for(int i = 0; i < Size; ++i)
    cout << arr[i] << " | ";
  cout << "]";
  //delete arr;
}

 void repeated(const int *arr, int *arr2, int rep){
    cout << "\n\narray with repeats \n\n";
    //repetitions must be greater than or equal to the one entered
    for(int i = 0; i < rep; ++i){
      /*arr2[i+0] = arr[0];
      arr2[i+3] = arr[1];
      arr2[i+6] = arr[2]; // */
      for(int j = 0; j < rep; ++j){
          arr2[j+(rep * i)] = arr[i];
      }
    }
 }

int main()
{
  int *arr, Size, *arr2, mult = 0;

  cout << "Enter Size: "; cin >> Size;

  //reservamos memoria
  arr = new int[Size];  //original array
  arr2 = new int[Size*mult]; //new array

    generate_array(arr, Size); //we add elements to the array
  print(arr, Size); //print array

  cout << "\n\nenter the number of times to repeat an element of the array: "; cin >> mult;
  repeated(arr, arr2, mult); //generate repeats
  print(arr2, Size*mult); //print the new array

  delete arr;
  delete arr2;
}