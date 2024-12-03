# include <iostream>
# include <climits>
using namespace std;

int main(){
    int size = 5;
    int arr[size] = {1,2,3,4,5};
    int maxSum = INT_MIN;

    for(int st=0; st<size; st++){
        int currSum = 0;
        for(int end=st; end<size; end++){
            currSum += arr[end];
            maxSum = max(currSum,maxSum);
        }
    }
    cout << "Max SubArray Sum : "<<maxSum;
    return 0;
}
