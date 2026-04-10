#include <unordered_set>  
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size() == 0) {
            return 0;
        }
        if(s.size() == 1) {
            return 1;
        }

        unordered_set<char> substrings; 
        int length = 0;
        int l = 0;
        int r = l;
        
        substrings.insert(s[l]);
        
        while(r < s.size()) {
            r++;
            if(substrings.count(s[r])) {
                l++;
                r = l ;
                if(substrings.size() > length) {
                    length = substrings.size();
                }
                substrings.clear();
                substrings.insert(s[l]);
            }
           
            substrings.insert(s[r]);
            

           if(r == s.size()-1){
                if(substrings.count(s[r]) != 0){

                    if(substrings.size() > length) {
                        length = substrings.size();
                    }    
                }
                substrings.insert(s[r]);

                if(substrings.size() > length) {
                    length = substrings.size();
                }  
            }
            
        }
        return length;
    }
};