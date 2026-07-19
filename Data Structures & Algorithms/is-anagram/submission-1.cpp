class Solution {
public:
    bool isAnagram(string s, string t) {
        bool anagram = 0;

        if(s.size()!=t.size()){
            return anagram;
        }

        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        if(s==t){
            return 1;
        }
        else return anagram;
        
    }
};
