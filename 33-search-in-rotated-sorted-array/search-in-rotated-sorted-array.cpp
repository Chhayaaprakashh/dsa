class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0;
        int high= nums.size()-1;
        int mid=0;
       
       
            
        while(low<high){
        mid= low+ (high-low)/2;
        
        if(nums[low]<=nums[mid]){
            if(target<=nums[mid]&& target>= nums[low]){
                high=mid;
            }
            else{
                low=mid+1;
            }

        }
        else{
            if(target>nums[mid]&& target<=nums[high]){
               low=mid+1;
            }
            else{
                high=mid;
            }
        }
    }
     if(nums[low]==target){
            return low;
        }
    return -1;
        
    }
};