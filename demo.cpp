#include<iostream>
#include <cmath>
#include <math.h>
#include <climits> 
using namespace std;

int findMax(int arr[], int n){
    int max= INT_MIN;
    for(int i=0; i<n; i++){
       if(arr[i]>max){
            max= arr[i];
        }
    }
    return max;

}

int findMin(int arr[], int n){
    int min= INT_MAX;
    for(int i=0; i<n; i++){
       if(arr[i]<min){
            min= arr[i];
        }
    }
    return min;

}

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
}

void input(int arr[], int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

int linearSearch(int arr[], int n, int key){
    int i;
    for(i=0; i<n; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int n, int key){
    int s = 0;
    int e = n-1;
    

    while(s<=e){
        int mid = (s+e)/2;
    
         if(arr[mid] > key){
         e=mid-1;
        // mid = s+(e-s)/2;
        }
    else if(arr[mid] < key){
        s = mid+1;
        // mid = s+(e-s)/2;
        }
        else{
            return mid;
        }

    }
     return -1;
}

void selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[i]){
                int temp= arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            } 
        }
    }
    print(arr,n);
}

void bubbleSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            int temp=arr[j];
            if(arr[j+1]<arr[j]){
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    print(arr,n);
}

void insertionSort(int arr[], int n){
        for(int i=1; i<n; i++){
            int temp = arr[i];
            int j=i-1;
            while(j>=0 && arr[j]>temp){
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=temp;

        }
        print(arr,n);
    
}

   
int main()
{
    int n;
    cout<<"enter size of array: ";
    cin>>n;

    int arr[n];

    cout<<"enter values in array : "<<endl;
    input(arr,n);

    insertionSort(arr,n);

    // bubbleSort(arr,n);



    // selectionSort(arr,n);



    // int key;
    // cout<<"enter the key: "<<endl;
    // cin>>key;


    //print(arr, n);
    
    // cout<< linearSearch(arr, n, key);

    // cout<< binarySearch(arr, n, key);

    
    // cout<<"max element is: "<<findMax(arr,n)<<endl;
    
    // cout<<"min value is: "<<findMin(arr,n); 
    
    return 0;
}