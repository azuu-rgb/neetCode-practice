class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector <int> ans;
        priority_queue<pair<int,int>> pq;
        int l = 0;
            
        for (int r = 0; r < nums.size();r++){
            int n = nums[r];
            int len = r- l+1;

            pq.push({n, r});

            if(len == k){
                while(pq.top().second < l){
                    pq.pop();
                }
                ans.push_back(pq.top().first);
                l++;
        }  
     }
     return ans;
    }
};
