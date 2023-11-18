#include <iostream>
#include <vector>
#include <string>
#include "leetcode/leetcode.h"

using namespace std;

int main() {
   vector<string> strs = { "flower", "flow", "flight"};
   cout << longestCommonPrefix(strs) << endl;
}
