#include <iostream>
using namespace std;

int binarySearch(int num, int arr[], int size){
    int start =0 ,end = size -1;
    int mid = start + (end -start)/2;
    while(start<=end){
        if(arr[mid] == num){
            return mid;
        }else if(arr[mid]<num){
            start = mid+1;
        }else{
            end=mid-1;
        }
        mid = start + (end -start)/2;

    }
    return -1;

}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m;
    cin>>m;
    int loc=binarySearch(m,arr,n);
    cout<<loc;
    
    return 0;
}