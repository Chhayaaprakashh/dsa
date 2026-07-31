class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
     int i;
     vector<int> subset;
     vector<vector<int>> ans;
     allsub(0,nums,subset,ans);
     return ans;
    }
    void allsub(int i, vector<int>nums,vector<int>& subset,vector<vector<int>>& ans){
        if(i==nums.size()){
            ans.push_back(subset);
            return;
        }
        subset.push_back(nums[i]);
        allsub(i+1,nums,subset,ans);
        subset.pop_back();
        allsub(i+1,nums,subset,ans);
    }
};