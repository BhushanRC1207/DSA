# include <iostream>
using namespace std;

void changeArr(int arr[], int size){
    cout << "In Function : \n";
    for(int i=0; i<size; i++){
        arr[i] = 2 * arr[i];
    }
}

int main(){
    int arr[] = {1,2,3};
    int size = sizeof(arr)/sizeof(int);

    changeArr(arr,size);

    cout << "In main function : \n";
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}