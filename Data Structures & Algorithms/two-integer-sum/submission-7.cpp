#include <unordered_map>
#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std:unordered_map <int,std::vector<int>> map;

        for(int i = 0; i < nums.size(); i++){
            map[nums[i]].push_back(i);
        }

        for(int n1 : nums){
            int n2 = target - n1;
             auto it = map.find(n2);

             if(it != map.end()){
                if(map[n1][0] != map[n2][0])
                        return std::vector<int>{ map[n1][0], map[n2][0] };
                
                if(n1 == n2 && map[n1].size()>=2){
                        return std::vector<int>{ map[n1][0], map[n1][1] }; 
                }
             } 
        }
        return std::vector<int>{-1,-1};        
    }
         
};
