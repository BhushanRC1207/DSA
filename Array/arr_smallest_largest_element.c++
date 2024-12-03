# include <iostream>
# include <climits>
using namespace std;

int main(){
    
    int arr[] = {5,15,22,1,-15,24};
    int small = INT_MAX;
    int large = INT_MIN;
    int sz = sizeof(arr)/sizeof(int);

    for(int i=0; i<sz; i++){

        if(arr[i] < small){
            small = arr[i];
        }
        //small = min(arr[i],small);

        if(arr[i] > large){
            large = arr[i];
        }
        // large = max(arr[i],large);
    }

    cout << "Smallest Number : "<< small << endl;
    cout << "Largest Number : "<< large << endl;



    return 0;
}