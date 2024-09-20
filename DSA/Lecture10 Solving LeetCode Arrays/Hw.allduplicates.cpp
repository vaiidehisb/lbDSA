#include <bits/stdc++.h>
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        // made array and sorted
        vector<int> ans;
        sort(nums.begin(),nums.end());
        
        for(int i=0; i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                ans.push_back(nums[i]);
                // to skip the duplicates
                while (i+1<nums.size() && nums[i]== nums[i+1]) {
                    i++;
                }
            } 
            } 
        return ans;
        }
};
