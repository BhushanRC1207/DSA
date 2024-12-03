// majority element
// time complexity : o(n^2)

# include <iostream>
# include <vector>
using namespace std;

int majorityElement(vector<int> nums){
    for(int i: nums){
        int freq = 0;
        for(int j: nums){
            if(i==j){
                freq++;
            }
        }
        if(freq > nums.size()/2){
            return i;
        }    
    }
}

int main(){
    vector<int> nums={2,2,1,1,1};
    
    int ans= majorityElement(nums);
    cout << ans;
    return 0;
}