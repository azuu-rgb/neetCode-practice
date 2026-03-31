//std::unordered_map
#include <iostream>
#include <unordered_map>

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map <int,int> map;
        int c = -1;
        for(int n : nums){
            if(map.count(n)){
                return true;
            }
            c++;
            map.insert({n,c});
        }
        return false;
    }
};