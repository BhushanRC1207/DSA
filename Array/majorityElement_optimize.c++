// majority element
// time complexity : o(n logn)

# include <iostream>
# include <vector>
# include <algorithm>
using namespace std;

int majorityElement(vector<int> nums, int n){

    int freq = 1, ans = nums[0];

    for(int i=1; i<n; i++){
        if(nums[i]==nums[i-1]){
            freq++;
        }
        else{
            ans = nums[i];
            freq = 1;
        }


        if(freq > n/2){
            return ans;
        }
    }
}



int main(){
    vector<int> nums={2,2,1,1,1,2,2};
    int n = nums.size();

    sort(nums.begin(),nums.end());

    cout << majorityElement(nums,n);
    return 0;
}