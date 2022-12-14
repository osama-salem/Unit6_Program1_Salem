#include <iostream>
#include "accounts.h"
#include <iomanip>
using namespace std;
/*Osama Salem 

COSC-1436-57001 */

void showValues(int [], int);
void swap(int&, int&);
void bubbleSort(int [], int);

int main() {

  cout << "Start: " << cpuTime() << endl;

  bubbleSort(accountBalances, maxAccounts);

  cout << "End: " << cpuTime();

  return 0;
}

void showValues(int array[], int SIZE){
  for(int count = 0; count < SIZE; count++)
    cout << array[count] << " ";
  cout << "\n\n";
}

void swap(int &a, int &b){

  int temp = a;
  a = b;
  b = temp;
}

void bubbleSort(int array[], int size){

  int maxElement;
  int index;

  for(maxElement = size - 1; maxElement > 0; maxElement--){
    for(index = 0; index < maxElement; index++){
      if(array[index] > array[index + 1]){
        swap(array[index], array[index + 1]);
      }
    }
  }
  showValues(array, size); //Display sorted array
}