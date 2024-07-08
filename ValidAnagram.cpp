class Solution {
public:
    bool isAnagram(string s, string t) {
        // sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        // if (s == t) {
        //     return true;
        // } else {
        //     return false;
        // }
        int freTable[256]={0};
        for(int i=0;i<s.size();i++){
            freTable[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            freTable[t[i]]--;
        }
        for(int i=0;i<256;i++){
        if(freTable[i]!=0){
            return false;
        }
        }
        return true;
    }
};
