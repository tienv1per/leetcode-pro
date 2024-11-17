#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;
        int m = s.size();
        int n = t.size();
        while (i < m && j < n){
            if(s[i] == t[j]) {
                i++;
            }
            j++;
        }

        if(i == m) return true;
        return false;
    }
};