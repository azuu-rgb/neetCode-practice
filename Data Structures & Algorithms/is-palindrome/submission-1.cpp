class Solution {
public:
    bool isPalindrome(string s) {
    
        string snew = "";
        for(char c : s){
            if(c>=1 && c<=47) continue;
            if(c>=58 && c<=64) continue;
            if(c>=91 && c<=96) continue;
             if(c>=123 && c<=159) continue;
            if(c != ' '){
                snew+=std::tolower(c);
            }
        }
        int j = snew.size()-1;
        for(int i = 0; i <snew.size(); i++){
            if(snew[i] != snew[j]){
                return false;
            }
            j--;
        }
        return true;
    }
};
