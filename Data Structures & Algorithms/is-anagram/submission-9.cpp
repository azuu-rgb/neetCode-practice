#include <unordered_map>
#include <iostream>
#include <string>
class Solution {
public:
    bool isAnagram(string s, string t) {
        
        std::unordered_map<char,int> mapA;
        std::unordered_map<char,int > mapB;
        
        if(s.size() != t.size())
            return false;

        for(int i = 0; i < s.length(); i++){
            mapA[s[i]]++;
            mapB[t[i]]++;
        }
        for(char c : t){
            if(mapA[c] != mapB[c]){
                return false;
            }
        }
        return true;
       
        
    }
};
