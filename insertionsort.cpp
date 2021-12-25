#include<iostream>
using namespace std;
void printArray(int arr[] , int n){                                                       
    for(int i=0; i<n; i++){
        cout << arr[i] <<" ";
    }
    cout << endl;
}
void instSort(int arr[] ,int n){
    for(int i=1; i<n; i++){
        int temp = arr[i];
        int j=i-1;
        for(; j>=0;j--){
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
}
int main(){
    int arr[6] = {56,35,14,33,2,1};
    instSort(arr , 6);
    printArray(arr, 6);
}
