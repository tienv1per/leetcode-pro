#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        std::unordered_map<char, int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;

        int count = 0;
        for(int i = 0; i < s.size() - 1; i++) {
            if(mp[s[i]] < mp[s[i+1]]) {
                count -= mp[s[i]];
            } else {
                count += mp[s[i]];
            }
        }
        count += mp[s[s.size() - 1]];

        return count;
    }
};