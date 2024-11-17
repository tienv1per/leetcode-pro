#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>

using namespace std;

// 1st solution: 2 pointers, complexity: O(n^2), memory: O(1)
// 2nd solution: hash map, complexity: O(n), memory: O(n)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // vector<int> res;
        // int n = nums.size();
        // for(int i = 0; i < n; i++){
        //     for(int j = n - 1; j > i; j--){
        //         if(nums[i] + nums[j] == target){
        //             res.push_back(i);
        //             res.push_back(j);
        //         }
        //     }
        // }

        // return res;

        std::unordered_map<int, int> mapper;
        vector<int> res;
        int length = nums.size();
        for(int i = 0; i < length; i++){
            int diff = target - nums[i];
            if(mapper.count(diff)){
                res.push_back(mapper[diff]);
                res.push_back(i);
            }
            mapper[nums[i]] = i;
        }

        return res;
    }
};