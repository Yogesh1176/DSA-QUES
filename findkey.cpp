#include<iostream>
using namespace std;
int binarySearch(int arr[], int n, int key){
    int start =0;
    int end = n-1;
    int mid = start + (end - start)/2;       // used to get rid of TLE
    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }
        else if(key > arr[mid]){
            start = mid+1;                      // SEARCHING IN NEXT PART          // taking mid + 1 for going to next part
        }
        else if(key < arr[mid]){
            end = mid- 1;
        }
        mid  = start + (end - start)/2;
    }
    return -1;                              // RETURN -1 IF KEY IS NOT PRESENT IN THE ARRAY
}

int main(){
    int arr[7] = {34,56,67,78,89,90,100};
    int key;
    cin >> key ;
    int index = binarySearch(arr, 7, key);
    cout << " key is present at " << index << " ";
    
}
