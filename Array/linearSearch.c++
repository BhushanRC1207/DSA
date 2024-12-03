# include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target){
    for(int i=0; i<size; i++){ // found
        if(arr[i] == target){
            return i;
        }
    }
    return -1;  // not found
}

int main(){
    int arr[] = {4,2,7,8,1,2,5};
    int target = 5;
    int size = sizeof(arr)/sizeof(int);

    cout << linearSearch(arr,size,target) << endl;
    return 0;
}



// Time complexity : o(n)