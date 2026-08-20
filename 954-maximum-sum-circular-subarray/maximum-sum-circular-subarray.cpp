class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int sum = nums[0];
        int max_sum = nums[0];

        int min_sum = nums[0];
        int worst = nums[0];

        int total = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            int a = nums[i];
            int b = nums[i] + sum;
            int c = nums[i] + worst;

            total += nums[i];

            // Maximum subarray
            sum = max(a, b);
            max_sum = max(max_sum, sum);

            // Minimum subarray
            worst = min(a, c);
            min_sum = min(min_sum, worst);
        }

        // All elements are negative
        if (max_sum < 0) {
            return max_sum;
        }

        return max(max_sum, total - min_sum);
    }
};