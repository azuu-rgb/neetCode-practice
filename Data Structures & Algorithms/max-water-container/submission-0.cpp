class Solution {
public:
    int maxArea(vector<int>& heights) {  
        int i = 0;
        int j = heights.size() - 1;  
        int alturaMin = 0;            
        int area = 0;

        int num1;
        int num2;

        while (j > i) {
            num1 = heights[i];
            num2 = heights[j];
            
            alturaMin = min(num1, num2); 

            int x = (j - i) * alturaMin;
                if (x > area){
                    area = x;
                }

            if (num1 > num2) {        
                j--; 
            } else  {
                i++;   
            } 
        }
        return area;  
    }
};
 