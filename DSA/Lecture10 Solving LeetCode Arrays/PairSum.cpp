#include<vector>
using namespace std;
vector<vector<int> > pairSum(vector<int> &arr, int s){
   vector< vector<int> > ans;
   
   for(int i=0;i<arr.size(); i++ )
   {
   		for(int j = i+1; j<arr.size(); j++) {
        	if(arr[i] +arr[j] == s)
            {
            	vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
				ans.push_back(temp);
            }
        }
   }
   sort(ans.begin(), ans.end());
   return ans;
}


vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.
	/*vector< vector<int> > ans;
	for (int i=0; i<arr.size(); i++){
		for(int j=0; j<arr.size(); j++){
			for(int v=0; v<arr.size(); v++) {
				if(arr[i]+arr[j]+arr[v]==k){
					vector<int> temp;
					temp.push_back(min(arr[i], arr[j], arr[v]));
					temp.push_back(max(arr[i], arr[j], arr[v]));
				}
			}
		}
		
	}
	sort(ans.begin(), ans.end());
   return ans;

   vector<vector<int>> findTriplets(vector<int> arr, int n, int K) {
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());

    for (int i = 0; i < n - 2; i++) {
        if (i > 0 && arr[i] == arr[i - 1]) // Skip duplicates
            continue;
        
        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            int sum = arr[i] + arr[left] + arr[right];
            if (sum == K) {
                ans.push_back({arr[i], arr[left], arr[right]});
                left++;
                right--;

                // Skip duplicates
                while (left < right && arr[left] == arr[left - 1])
                    left++;
                while (left < right && arr[right] == arr[right + 1])
                    right--;
            } else if (sum < K) {
                left++;
            } else {
                right--;
            }
        }
    }

    return ans;
   }

   vector<vector<int>> findTriplets(vector<int> arr, int n, int K) {
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());

    for (int i = 0; i < n - 2; i++) {
        if (i > 0 && arr[i] == arr[i - 1]) // Skip duplicates
            continue;
        
        unordered_map<int, int> seen;

        for (int j = i + 1; j < n; j++) {
            int target = K - arr[i] - arr[j];
            if (seen.find(target) != seen.end()) {
                ans.push_back({arr[i], arr[j], target});
                
                // Skip duplicates
                while (j + 1 < n && arr[j] == arr[j + 1])
                    j++;
            }
            seen[arr[j]] = j;
        }
    }

    return ans;
}

#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<vector<int>> findTriplets(vector<int> arr, int n, int K) {
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());

    for (int i = 0; i < n - 2; i++) {
        if (i > 0 && arr[i] == arr[i - 1]) // Skip duplicates
            continue;
        
        unordered_map<int, int> seen;

        for (int j = i + 1; j < n; j++) {
            int target = K - arr[i] - arr[j];
            if (seen.find(target) != seen.end()) {
                ans.push_back({arr[i], arr[j], target});
                
                // Skip duplicates
                while (j + 1 < n && arr[j] == arr[j + 1])
                    j++;
            }
            seen[arr[j]] = j;
        }
    }

    return ans;
}


#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
  sort(arr.begin(),arr.end());
   set<vector<int>> st;


   for(int i=0;i<n-2;i++){
      int right=n-1;
      int left=i+1;

      while(left<right){
         int currsum=arr[i]+arr[right]+arr[left];
         if(currsum==K){
            vector<int> ans;
            ans.push_back(arr[i]);
            ans.push_back(arr[left]);
            ans.push_back(arr[right]);
            st.insert(ans);
            left++;
            right--;
         }
         else if(currsum>K){
            right--;
         }else{
            left++;
         }
      }
   }

   
   vector<vector<int>> finalans(st.begin(),st.end());

  return finalans;
}


}*/