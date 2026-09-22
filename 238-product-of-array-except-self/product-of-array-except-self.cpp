class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> answer(nums.size(),1);
        int left= 1;
        int right=1;
        for (int i=0;i<nums.size();i++){
           answer[i]= left;
           left= left*nums[i];
        }
        for(int j=nums.size()-1;j>=0;j--){
            
            answer[j]= answer[j] * right;
            right= right* nums[j];
        }
        return answer;

    }
};