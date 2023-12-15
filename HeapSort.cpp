#include<iostream>
#include<stack>
using namespace std;

void heapify(int arr[],int n, int i){
    int left=2*i+1;
    int right= 2*i+2;
    int temp=i;

    if(right<n && arr[right]>arr[i]){
        temp=right;

    }
    if(left<n && arr[left]>arr[i]){
        temp=left;
    }

    if (temp != i) 
    { 

        swap(arr[i], arr[temp]);   
         
        heapify(arr, n, temp); 
    }

}
void heap_sort(int arr[], int n){
    for(int i=n; i>=0; i--){
        heapify(arr, n, i);
    }
    for(int i=n-1; i>=0; i--){
        swap(arr[0],arr[i]);
        heapify(arr, i, 0);
    }

}

int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    heap_sort(arr, n);
    for(int i=0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}