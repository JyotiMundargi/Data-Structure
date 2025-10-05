#include<iostream>
using namespace std;

void display(int *array, int size) {
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}

void insertionSort(int *array, int size) {
   int temp, j;
   for(int i = 1; i<size; i++) {
      temp = array[i]; 
      j = i;
      while(j > 0 && array[j-1] > temp) {
         array[j] = array[j-1];
         j--;
      }
      array[j] = temp; 
   }
}

int main() {
   int arr[] = {45, 9, 23, 71, 80, 55}; 
   int n = sizeof(arr) / sizeof(arr[0]); 
   
   cout << "Array before Sorting: ";
   display(arr, n);
   insertionSort(arr, n);
   cout << "Array after Sorting: ";
   display(arr, n);

   return 0;
}