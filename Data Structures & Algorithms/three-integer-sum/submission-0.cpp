class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> answer;
        set<vector<int>>verify;
        if(nums.empty()){
            return answer;
        }
        int i = 0;
        int j;
        int k;
        
        int num1;
        int num2;
        int num3;
        int suma;
        
        for(; i < nums.size() ; i++) {
            num1 = nums[i];
            j = i + 1;        
            k = nums.size() - 1;  
            
            while( j < k ) {
                num2 = nums[j];
                num3 = nums[k];
                suma = num1 + num2 + num3;  
                
                if(suma > 0) {
                    k--;
                }
                else if(suma < 0) {
                    j++;
                }
                else {  
                    vector<int> x ={num1, num2, num3};
                    if(!verify.count(x)){
                         answer.push_back(x); 
                         verify.insert(x);
                    }
                    j++;
                    k--;
                }
            }
        }                                  
        return answer;
    }
};
