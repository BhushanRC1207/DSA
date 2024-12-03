// Pair Sum : return pair in sorted array with target sum.
// if pairSum > target then end-- 
// if pairSum < target then st++
// if pairSum == target then return st,end
// time complexity : o(n)

# include <iostream>
# include <vector>
using namespace std;

vector<int> pairSum(vector<int> nums, int target){
    int size = nums.size();
    int p = 0;
    int q = size-1;
    vector<int> ans;

    while(p < q){
        if(nums[p]+nums[q] == target){
            ans.push_back(p);
            ans.push_back(q);
            return ans;
        }
        else if(nums[p]+nums[q] > target){
            q--;
        }
        else if(nums[p]+nums[q] < target){
            p++;
        }
    }
}

int main(){
    vector<int> nums = {2,7,11,13};
    int target = 9;

    vector<int> ans=pairSum(nums,target);
    cout << ans[0] << ", " << ans[1];
    return 0;
}