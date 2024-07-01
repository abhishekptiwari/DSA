#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
       vector<int> ans;
       for(int i = 0; i < n ; ++i){
          ans.push_back(nums[i]);
          ans.push_back(nums[i + n]);
       }
       return ans;
    }
};

int main() {
    //* Example input
    vector<int> nums = {2, 5, 1, 3, 4, 7};
    int n = 3;
    //* Create an instance of Solution
    Solution sol;
    //* Call the shuffle function
    vector<int> result = sol.shuffle(nums, n);
    //* Print the result
    for(int i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
