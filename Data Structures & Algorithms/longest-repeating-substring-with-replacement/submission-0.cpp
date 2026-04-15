class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map <char,int> frequencies;
        int l = 0;
        int r = 0;
        int maxFre = 0;
        int maxLen = 0;
        
        for(int r = 0; r < s.size(); r++){
            frequencies[s[r]]++;
            
            if(frequencies[s[r]] > maxFre){
                maxFre = frequencies[s[r]];
            }
            while ((r - l + 1) - maxFre > k) {
                frequencies[s[l]]--;
                l++;
            }
            
            maxLen = max(maxLen, r - l + 1); 
        }
        return maxLen;
        
    }
};
