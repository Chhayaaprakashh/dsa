class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i,j=0,k=1;
        for(i=1;i<nums.size();i++){
            
        
            if(nums[i-1]!=nums[i]){
                nums[j+1]=nums[i];
                j++;
              
              }
            
            

            }

return j+1;
        }
        
    };
