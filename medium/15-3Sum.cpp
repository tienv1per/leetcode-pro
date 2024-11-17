#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Time Complexity: O(nlogn) for sorting array + O(n^2) for loop the sorted array
// => O(n^2)
// Memory: O(1) or O(n)

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> results;
        int length = nums.size();
        sort(nums.begin(), nums.end());
        for(int i = 0; i < length; i++){
            // continue if repeat the value
            if(i > 0 && nums[i] == nums[i-1]) continue;
            int left = i + 1;
            int right = length - 1;
            while(left < right){
                int threesome = nums[i] + nums[left] + nums[right];
                if (threesome < 0){
                    left++;
                } else if (threesome > 0){
                    right--;
                } else {
                    vector<int> res;
                    res.push_back(nums[i]);
                    res.push_back(nums[left]);
                    res.push_back(nums[right]);
                    results.push_back(res);

                    // [-2, -2, -2, 0, 0, 2, , 2, 2]
                    // move pointer left to the next number
                    left++;
                    while(left < right && nums[left] == nums[left-1]){
                        left++;
                    }
                }
            }
        }

        return results;
    }
};