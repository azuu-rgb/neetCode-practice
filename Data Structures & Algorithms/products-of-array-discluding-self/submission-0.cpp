class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> answer;
        vector<int> zeros;

        int r = 1;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                r *= nums[i];
            } else {
                zeros.push_back(i);
            }
        }

        if (zeros.size() > 1) {
            for (int i = 0; i < nums.size(); i++) {
                answer.push_back(0);           
            }
            return answer;
        }

        if (zeros.size() == 1) {
            int pos = zeros[0];
            for (int i = 0; i < nums.size(); i++) {
                if (i == pos) {
                    answer.push_back(r);      
                } else {
                    answer.push_back(0);       
                }
            }
            return answer;                     
        }

        for(int i = 0; i< nums.size();i++){
            int div = nums [i];
            int x = r/div;
            answer.push_back(x);
        }

        
        return answer;  
    }
};
