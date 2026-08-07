class Solution {
public:

    string encode(vector<string>& strs) {

        string en;
        for(const string&s:strs){
            en+=to_string(s.size())+'#'+s;
        }

        return en;

    }

    vector<string> decode(string s) {

        vector<string>d;

        int itr=0;

        while(itr<s.size()){
            int j=itr;
            while(s[j]!='#'){
                j++;
            }

            // got the index of #

            // now find the length int

            int length=stoi(s.substr(itr,j-itr)); 
            // from i to just before # to get number string then convert to int

            string str = s.substr(j + 1, length);
            // now get the string
            d.push_back(str);

            itr=j+length+1;




        }

        return d;

        

    }
};
