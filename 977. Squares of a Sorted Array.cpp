class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
     int i;
     vector<int>squares;
     for(i=0;i<nums.size();i++)
     {
         squares.push_back(nums[i]*nums[i]);
     }  
     sort(squares.begin(),squares.end());
     return squares; 
    }
};
