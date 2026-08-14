class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l;
        int zero=0;
        int ans=0;
        for(int h=0;h<nums.size();h++){
            if(nums[h]==0){
                zero++;
            }
            while(zero>k){
                if(nums[l]==0){
                    zero--;
                }
                l++;
            }
            ans=max(ans,h-l+1);
        }
        return ans;
    }
    
};