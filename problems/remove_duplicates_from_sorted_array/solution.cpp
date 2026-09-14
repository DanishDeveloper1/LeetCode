class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int writeIdx = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[writeIdx]) {
                writeIdx++;
                nums[writeIdx] = nums[i];
            }
        }
        return writeIdx + 1;
    }
};