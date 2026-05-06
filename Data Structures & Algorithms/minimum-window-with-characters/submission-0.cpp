class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>frecuenciesT;
        unordered_map <char,int>window;

        int cont = 0;
        int len = INT_MAX;
        int aux = 0;
        int l = 0;
        int start = 0;

        if(t.size()> s.size())
            return "";

        for(char c : t)
            frecuenciesT[c]++;

        for(int r = 0; r < s.size(); r++){
            char x = s[r];
            window[x]++;

            if(frecuenciesT.count(x) && window [x] == frecuenciesT[x]){
                cont ++;
            }
            while( cont == frecuenciesT.size()){
                char y = s[l];
                aux = r-l+1;

                if(aux < len){
                    len = aux;
                    start = l;
                }

                window[y]--;
                   
                if(frecuenciesT.count(y) && window[y] < frecuenciesT[y])
                    cont--;

                l++;    
            }
        } 
            
        if(len == INT_MAX){
            return "";
        }  
        return s.substr(start,len);   
    }
};
    

