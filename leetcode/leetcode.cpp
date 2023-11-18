//
// Created by Darwish on 11/19/23.
//

#include "leetcode.h"
#include "string"
#include "vector"
#include "unordered_map"

using namespace std;

string longestCommonPrefix(vector<string> &strs) {
    string ans = "";

    for (int i = 0; i < strs[0].size(); i++) {
        char tempChar = ' ';
        for (auto str: strs) {
            if (i > str.length()) {
                goto end_of_loops;
            }

            if (tempChar == ' ') {
                tempChar = str[i];
            } else if (tempChar != str[i]) {
                goto end_of_loops;
            }
        }
        ans += tempChar;
    }

    end_of_loops:
    return ans;
}

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> hashMap;

    for (int i = 0; i < nums.size(); i++) {
        int other = target - nums[i];
        if (hashMap.find(other) != hashMap.end()) {
            return vector<int>{hashMap[other], i};
        } else {
            hashMap[nums[i]] = i;
        }
    }
    return vector<int>{};
}
