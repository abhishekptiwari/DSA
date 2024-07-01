#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int mx = *max_element(candies.begin(), candies.end());
        vector<bool> res;
        for (int candy : candies) {
            res.push_back(candy + extraCandies >= mx);
        }
        return res;
    }
};

int main() {
    //* Create an instance of Solution
    Solution solution;
    //* Example input
    vector<int> candies = {2, 3, 5, 1, 3};
    int extraCandies = 3;
    //* Get the result
    vector<bool> result = solution.kidsWithCandies(candies, extraCandies);
    //* Print the result
    cout << "Result: ";
    for (bool canHaveMaxCandies : result) {
        cout << (canHaveMaxCandies ? "true" : "false") << " ";
    }
    cout << endl;

    return 0;
}
