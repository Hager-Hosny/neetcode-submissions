class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> anagrams;
    for(int i=0;i<strs.size();i++){
        string curr= strs[i];// cat   tac hat
        string sorted = strs[i]; 
        sort(sorted.begin(),sorted.end()); // act   act   aht
        anagrams[sorted].push_back(curr);  // act -> cur   act -> tac     aht-> hat

    }
    vector<vector<string>> result;
    for(auto& i:anagrams){
        // i.first -> key
        // i.second -> vals -> vector
        vector<string>V;
        for(int j=0;j<i.second.size();j++){
            V.push_back(i.second[j]);
        }
        result.push_back(V);
    }
    return result;
    }
};
