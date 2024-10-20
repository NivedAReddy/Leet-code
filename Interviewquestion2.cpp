class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ele {};
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[ele] = nums[i];
                ele++;
            }
        }
        return ele;
    }
};