#include <string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int m = haystack.size();
        int n = needle.size();
        for(int i = 0; i < m + 1 - n; i++){
            for(int j = 0; j < n; j++){
                if(haystack[i+j] != needle[j]){
                    break;
                }
                if(j == n - 1) return i;
            }    
        }

        return -1;
    }
};