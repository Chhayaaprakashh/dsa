class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0;
        int high = nums.size();
        int mid=0;
        while (low< high){
            mid= low+ (high-low)/2;
            if (nums[mid]==target){
                return mid;
            }
            else if(target<=nums[mid]){
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        return -1;
    }
};