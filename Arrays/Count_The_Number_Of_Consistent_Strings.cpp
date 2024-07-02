#include <iostream>
#include <vector>
#include <unordered_set>
#include <string>

using namespace std;

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char> s;
        for(auto x: allowed){
            s.insert(x);
        }
        int count = 0;
        for(auto word: words){
            bool status = true;
            for(int i = 0; i < word.size(); ++i){
                if(s.find(word[i]) == s.end()){
                    status = false;
                    break;
                }
            }
            if(status){
                count++;
            }
        }
        return count;
    }
};
int main() {
    Solution solution;

    string allowed = "ab";
    vector<string> words = {"ad", "bd", "aaab", "baa", "badab"};

    int result = solution.countConsistentStrings(allowed, words);
    cout << "Number of consistent strings: " << result << endl;

    return 0;
}
