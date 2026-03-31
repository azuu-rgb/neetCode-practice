class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> answer;
        if(numbers.empty()){
            return vector<int>();
        }
        int i = 0;
        int j = numbers.size() - 1;

        int n1 = numbers[i]; 
        int n2 = numbers[j];  
        
        for(; i < j; ) {
            if (n1 + n2 > target) {
                j--;
            }
            if (n1 + n2 < target) {
                i++;
            }
            if (n1 + n2 == target && i != j) {
                answer.push_back(i + 1);  
                answer.push_back(j + 1);
                return answer;
            }
            n1 = numbers[i];
            n2 = numbers[j];
        }
        return vector<int>();
    }
};