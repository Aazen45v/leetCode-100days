class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sumLeft=0,sumRight=0;
        for(int i=0;i<nums.size();i++)
            sumLeft+=nums[i];
        for(int i=0;i<nums.size();i++){
            if(sumLeft-nums[i]==2*sumRight)
            return i;
            sumRight+=nums[i];
        }
        return-1;
    }
};
