class Solution {
public:
    int countOdds(int low, int high) {
        int N = (high - low) / 2;
        if (low % 2 != 0 || high % 2 != 0)
            N++;
        return N;
    }
};
