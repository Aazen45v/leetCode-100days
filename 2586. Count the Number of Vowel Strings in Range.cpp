class Solution {
public:
    int vowelStrings(vector<string>& w, int left, int right) {
        int count=0;
        
        for(int i=left;i<=right;i++){
            // cout<<words[i]<<endl; giving words
        
                
            if((w[i].front() =='a' || w[i].front() == 'e' || w[i].front() == 'i' || w[i].front() == 'o' || w[i].front() == 'u') && (w[i].back() == 'a' || w[i].back() == 'e' || w[i].back() == 'i' || w[i].back() == 'o' || w[i].back() == 'u') ){
                    count++;
            } 
                
            
        }
        return count;
    }
};
