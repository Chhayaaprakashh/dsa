class Solution {
public:
    int findMin(vector<int>& nums) {
        int high= nums.size();
        int low= 0;
        int mid=0;
        int min_val= INT_MAX;
        while(low<high){
            mid= low+(high-low)/2;
            if(nums[low]<= nums[mid]){
                min_val= min(nums[low],min_val);
                low= mid+1;
            }
            else{
                min_val= min(nums[mid],min_val);
                high=mid;
            }
        }
        return min_val;
    }
};