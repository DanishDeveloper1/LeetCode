class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int writeIdx = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (val != nums[i]) {
                nums[writeIdx] = nums[i];
                writeIdx++;
            }
        }
        return writeIdx;
    }
};