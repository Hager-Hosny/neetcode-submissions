class Solution {
public:
    bool isAnagram(string s, string t) {
        bool anagram = 0;

        if(s.size()!=t.size()){
            return anagram;
        }

        for(int i = 0 ; i < s.size() ; i++){
            for (int j = 0; j < t.size() ; j++)

            if(s[i]==t[j]){
                s[i]='#';
                t[j]='#';
            }
        }

        if(s==t){
            return 1;
        }else return anagram;
        
    }
};
