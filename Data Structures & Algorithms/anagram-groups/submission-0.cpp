class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {\

    // map store the sorted version of str as key 
    unordered_map<string,vector<string>>hash;

    for(string s:strs){
        string key=s;

        sort(key.begin(),key.end());
    // now each anangram stored in list of same key
        hash[key].push_back(s);
    }


    vector<vector<string>>arr;

    for(auto& element:hash){
        arr.push_back(element.second);
    }

    return arr;




    }
};
