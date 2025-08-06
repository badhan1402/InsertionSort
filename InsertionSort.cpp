// Insertion sort 
#include<iostream>
using namespace std;

int main(){
    int arr[] = {5,2,3,1,4};//1 2 3 5 4
    int n = 5;
    for(int i = 1; i<n; i++){
        int current = arr[i];
        int index = i;
        while(index>0 && arr[index-1]>current){
            arr[index] = arr[index-1];
            index--;
        }

        arr[index] = current;
    }

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}