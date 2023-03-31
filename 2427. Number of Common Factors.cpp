class Solution {
public:
    int commonFactors(int a, int b) {
        int i;
        int ans=0;
        for(i=1; i<1001; i++){
            if(a%i==0 && b%i==0){
                ans++;
            }
        }
        return ans;
    }
};
