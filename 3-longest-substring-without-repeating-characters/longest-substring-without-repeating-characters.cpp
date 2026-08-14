class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> freq;
        int n = s.length();
        int ans = 0;
        int l = 0;

        for (int h = 0; h < n; h++) {
            freq[s[h]]++;

            while (freq[s[h]] > 1) {
                freq[s[l]]--;
                l++;
            }

            ans = max(h - l + 1, ans);
        }

        return ans;
    }
};