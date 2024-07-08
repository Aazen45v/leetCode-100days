class Solution {
public:
    string reverseOnlyLetters(string s) {
        int i = 0;
        int j = s.size() - 1;
        while (i <= j) {
            int mid = i + (j - i) / 2;
            if (isalpha(s[j])&&isalpha(s[i])){
                swap(s[i], s[j]);
                i++;
                j--;
            } else if(!isalpha(s[i])){
                i++;
            } else {
                j--;
            }
        }
        return s;
    }
};
