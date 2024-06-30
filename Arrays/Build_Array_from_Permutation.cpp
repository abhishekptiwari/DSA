#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans(nums.size());
        for (int num = 0; num < nums.size(); num++) {
            ans[num] = nums[nums[num]];
        }
        return ans;
    }
};

int main() {
    Solution solution;
    
    vector<int> nums = {0, 2, 1, 5, 3, 4};
    
    vector<int> result = solution.buildArray(nums);

    for (int num : result) {
        cout << num << " ";
    }
    
    return 0;
}
