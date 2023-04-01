class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        int smallest_num = INT_MAX;
        for (int i = 0; i < nums1.size(); i++) {
            for (int j = 0; j < nums2.size(); j++) {
                if (nums1[i] == nums2[j]) {
                    smallest_num = min(smallest_num, nums1[i]);
                }
            }
        }
        if (smallest_num != INT_MAX) {
            return smallest_num;
        }
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        if (nums1.size() == 0 || nums2.size() == 0) {
            return -1;
        }
        return (min(nums1[0], nums2[0]) * 10 + max(nums1[0], nums2[0]));
    }
};
