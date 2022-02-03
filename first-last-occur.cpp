#include <iostream>
using namespace std;
int firstOcc(int arr[], int n, int key){
    int start =0 , end = n-1;
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start<=end){
        if(arr[mid] == key){
            ans = mid;
            end = mid -1;                                        //to search first occurence go back from mid
        }
        else if(key > arr[mid]){
            start = mid +1;
        }
        else if(key < arr[mid]){
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int key){
    int start =0 , end = n-1;
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start<=end){
        if(arr[mid] == key){
            ans = mid;
            start = mid+1;                                //to search last occurence go next from mid
        }
        else if(key > arr[mid]){
            start = mid +1;
        }
        else if(key < arr[mid]){
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;                                           // this will return -1 if key is not present in the array
}
int main() {
	int arr[5] = {1,2,3,3,5};
	int key;
	cin >> key;
	cout << firstOcc(arr, 5, key) << " ";
	cout << lastOcc(arr, 5, key);
	
	return 0;
}
