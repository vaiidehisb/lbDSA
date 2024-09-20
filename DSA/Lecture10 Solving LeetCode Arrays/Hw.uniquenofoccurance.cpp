#include <bits/stdc++.h>
#include <vector>
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        // new vector & sort array
        vector<int> ans;
        sort(arr.begin(),arr.end());
        int i = 0;
        while(i <arr.size()) {
            int count =1;
            for(int j=i+1; j<arr.size(); j++) {
                if(arr[i]==arr[j]) {
                    count++;
                } 
                else {
                    break;
                }
            } 
            // ans ko dala array main 
            ans.push_back(count); 

            // repeated for index 
            i=i+count;
        } 
        sort(ans.begin(),ans.end());
        for(int i=0; i<ans.size()-1; i++) {
            if(ans[i]==ans[i+1]){
                return false;
            } 
            
        }
         return true;
    }
};

