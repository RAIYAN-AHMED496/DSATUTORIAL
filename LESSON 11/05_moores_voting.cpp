#include <iostream>
#include <vector>
using namespace std;


int Majority_Element(vector<int>&nums){
    int freq = 0, ans = 0;
    for(int i =0; i<nums.size(); i++){
        if(freq == 0){
            ans = nums[i];
        }
        if(ans == nums[i]){
            freq++;
        }else{
            freq--;
        }
    }


    int count = 0;
    for(int val : nums){
        if(val == ans){
            count++;
        }
    }
    if(count > (nums.size()/2)){
        return ans;
    }else{
        return -1;
    }
}

int main() {
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    int majorityElement = Majority_Element(nums);
    
    cout << "The majority element is: " << majorityElement << endl;

    return 0;
}
// nothing