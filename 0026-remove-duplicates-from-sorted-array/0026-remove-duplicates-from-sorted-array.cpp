class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> temp;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (temp.empty() || nums[i] != temp.back()) {
                temp.push_back(nums[i]);
            }
        }

        for (int i = 0; i < temp.size(); i++) {
            nums[i] = temp[i];
        }

        return temp.size();
    }
};