#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int contMayor = 0;
        int contAux = 1;  

        if(nums.empty())
        return 0;

        for (int i = 0; i < nums.size(); i++) {
            int j = i + 1;
            if(nums[j] - nums[i] == 0) continue;
            if (nums[j] - nums[i] == 1) {
                contAux++;  
            } else {
                if (contAux > contMayor) {
                    contMayor = contAux;
                }
                contAux = 1;  
            }
        }
        
        if (contAux > contMayor) {
            contMayor = contAux;
        }
        
        return contMayor;
    }
};
