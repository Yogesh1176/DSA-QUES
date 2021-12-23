#include <iostream>
using namespace std;
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] <<" ";
    }
    cout << endl;
    
}

void bubbleSort(int arr[], int n){
    for(int i=0 ; i < n; i++){                            
        
        for(int j = 0 ; j < n-1; j++){                       // for each round we get last value so no need to compare with that so (n-1)   is taken
            if(arr[j] < arr[j+1]) {                         // > for increasing / ascending   < descending / decreasing order
            swap(&arr[j],&arr[j+1]);                        // arr[j] is first value         arr[j+1] is next to it
        }
        
    }
    
}
}
int main() 
{
	int arr[9] = {45,67,2,10,3,78,77,65,45};
	bubbleSort(arr, 9);
	printArray(arr, 9);
	
}
