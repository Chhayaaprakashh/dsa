class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> freq;
        int h=0;
        int l=0;
        int ans=0;
        for(h=0;h<fruits.size();h++){
            freq[fruits[h]]++;
            while(freq.size()>2){
                freq[fruits[l]]--;
                if (freq[fruits[l]]==0){
                    freq.erase(fruits[l]);
                }
                l++;
            }
            ans = max(ans, h-l + 1);

        }
        return ans;
    }
};