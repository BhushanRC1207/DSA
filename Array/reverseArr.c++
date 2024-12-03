# include <iostream>
using namespace std;

void reverseArr(int arr[], int size){
    int p=0, q=size-1, temp;

    while(p < q){
        temp = arr[p];
        arr[p] = arr[q];
        arr[q] = temp;
        p++;
        q--;
    }
}

int main(){
    int arr[] = {4,2,8,1,2,5};
    int size = sizeof(arr)/sizeof(int);
    
    reverseArr(arr,size);

    cout << "Reverse Array : ";
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}


// Time complexity o(n)