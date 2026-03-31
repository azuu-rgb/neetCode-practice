
#include <unordered_set>
#include <vector>
#include <string>
using namespace std;
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

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_set <string> strs_seen;
        vector<vector<string>>groups_an;
        int i = -1;
        int j = 0;
        for(string s : strs){
            i++;
            j = i+1;
            if(!strs_seen.count(s)){
                strs_seen.insert(s);
                groups_an.push_back(vector<string>());
                groups_an.back().push_back(s);
                for(;j< strs.size(); j++){
                    string w2 = strs[j];
                    if(isAnagram(s,w2)){
                        strs_seen.insert(w2);
                        groups_an.back().push_back(w2);
                    }
                }
            } //final cout
        }//final foreach
        return groups_an;
    }
};
