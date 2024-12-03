# include <iostream>
# include <climits>
using namespace std;

int main(){
    int arr[] = {5,15,22,1,-15,24};
    int small = INT_MAX;
    int large = INT_MIN;
    int smallIndex,largeIndex = 0;
    int sz = sizeof(arr)/sizeof(int);

    for(int i=0; i<sz; i++){
        if(arr[i]<small){
            small = arr[i];
            smallIndex=i;
        }
        if(arr[i]>large){
            large=arr[i];
            largeIndex=i;
        }
    }

    cout << smallIndex << endl;
    cout << largeIndex << endl;
}


