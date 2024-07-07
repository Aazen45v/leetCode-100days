class Solution {
public:


    int expand(string s,int i,int j){
        int count=0;
        int n=s.size();
        while(i>=0&&j<n&&s[i]==s[j]){
            count++;
            i--;
            j++;
        }
        return count;
    }

    int countSubstrings(string s) {
        int count=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            int oddPlace=expand(s,i,i);
            count=count+oddPlace;
            int evenPlace=expand(s,i,i+1);
            count=count+evenPlace;
        }
        return count;
    }
};
