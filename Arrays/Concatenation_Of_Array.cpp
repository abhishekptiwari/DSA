#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        for (int i = 0, n = nums.size(); i < n; ++i) {
            nums.push_back(nums[i]);
        }
        return nums;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3, 4};
    vector<int> result = solution.getConcatenation(nums);

    cout << "Concatenated Array: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
