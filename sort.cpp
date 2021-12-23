#include <iostream>
using namespace std;

// function to swap the the position of two elements
void swap(int *a, int *b) {
 int temp = *a;
 *a = *b;
 *b = temp;
}

// function to print an array
void printArray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void selectionSort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
    int min_idx = i;
    for (int j = i + 1; j < n; j++) {

      // To sort in descending order, change > to < in this line.
      // Select the minimum element in each loop.
      if (arr[j] > arr[min_idx])
        min_idx = j;
    }

    // put min at the correct position
    swap(&arr[min_idx], &arr[i]);
  }
}

// driver code
int main() {
  int arr[5] = {20, 12, 10, 15, 2};
  selectionSort(arr, 5);
  cout << "Sorted array in Acsending Order:\n";
  printArray(arr, 5);
}
