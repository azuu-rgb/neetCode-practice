class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size()<3){
            return 0;
        }
        int may = 0;
        int left; 
        int right;
        int water = 0;
        vector<int> prefix;
        vector<int> suffix;
       
        prefix.push_back(height[0]);
        for(int i = 1; i < height.size(); i++) {
            left = i - 1;
             if( height[left] > may ) { 
                may = height[left];   
            }
            prefix.push_back(may);
        }
        
        may = 0;
        suffix.push_back(height[height.size() - 1]);  
        for(int i = height.size() - 2; i > -1; i--) { 
            right = i + 1;
             if(height[right] > may ) { 
                may = height[right];  
            }
             suffix.push_back(may);
        }
        left = 0;
        right = height.size()-1;

        for(int h : height){

            int w = min(prefix[left],suffix[right]) - h;

            if(w > 0){
                water += w;
            }
            left++;
            right--;
        }
        return water;  
    }
};