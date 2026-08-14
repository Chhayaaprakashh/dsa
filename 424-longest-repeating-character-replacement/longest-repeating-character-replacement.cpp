class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> mp;

        int l = 0;
        int ans = 0;
        int maxFreq = 0;

        for (int h = 0; h < s.length(); h++) {

            mp[s[h]]++;

            maxFreq = max(maxFreq, mp[s[h]]);

            int changes = (h - l + 1) - maxFreq;

            while (changes > k) {
                mp[s[l]]--;

                l++;

                maxFreq = 0;
                for (auto x : mp) {
                    maxFreq = max(maxFreq, x.second);
                }

                changes = (h - l + 1) - maxFreq;
            }

            ans = max(ans, h - l + 1);
        }

        return ans;
    }
};