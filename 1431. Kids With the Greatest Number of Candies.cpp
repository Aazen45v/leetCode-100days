class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>ans;
        int maxCandies=-1;
        int i;
        for(i=0;i<candies.size();i++)
        {
            if(maxCandies<candies[i])
            maxCandies=candies[i];
        }
        for(i=0;i<candies.size();i++)
        {
            if(extraCandies+candies[i]>=maxCandies)
            {
                ans.push_back(true);
            }
            else
            {
                ans.push_back(false);
            }
        }
        return ans;
    }
};
