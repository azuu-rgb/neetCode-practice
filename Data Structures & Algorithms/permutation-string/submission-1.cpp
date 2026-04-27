class Solution {
public:
    bool checkInclusion(string s1, string s2) {

         if(s1.size() > s2.size()){
            return false;
        }
        //VARIABLES
        unordered_map <char,int> frecuency;
        unordered_map <char,int> frecuencySW;
        
        int l = 0;
        //LOGICA
        for(char c : s1){
            frecuency[c]++;
        }


        for(int r = 0; r < s2.size();r++){

            frecuencySW[s2[r]]++;

            while(( r - l + 1) > s1.size()){
                frecuencySW[s2[l]]--;

                if(frecuencySW[s2[l]] == 0){
                   frecuencySW.erase(s2[l]);
                }

                l++;
            }

             if(frecuency == frecuencySW){
                    return true;
            }
        }
        return false;               
    }
};