class Solution {
public:

    string encode(vector<string>& strs) {
        string encode ="";
        for(string s: strs){
            s = to_string(s.size())+'A'+s;
            encode+=s;
        }
        return encode;
    }

    vector<string> decode(string s) {
        string p ="",contS = "";
        int cont = 0;
        vector <string> decode;
        for(char c : s){

           if(cont == 0){
                if(c != 'A'){
                contS+=c;
                }else{
                    cont = stoi(contS);
                    if(cont == 0){
                        decode.push_back("");
                    }
                    p = "";
                    contS = "";
                }
           }else{
            p+=c;
            cont--;
            if(cont == 0)
            decode.push_back(p);
           }
        }
        return decode;
    }
};
