#include <unordered_map>
#include <unordered_set>
#include <vector>  
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> nums_map;
        unordered_set<int> seen_nums;    
        vector<int> answer;
        
        for(int n : nums){
            nums_map[n]++;
        }

        int cont = 0;
       
        while (cont < k){
            int value = -1;
            int key = 0;

            for(auto m : nums_map){
                if(value < m.second){
                    if(!seen_nums.count(m.first)){  
                        value = m.second;
                        key = m.first;
                    }
                }
            }

            answer.push_back(key);
            seen_nums.insert(key);
            cont++;
        }

        return answer;  
    }
};