class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int writeIdx = 1;

        for(int i=1; i<nums.size(); i++){
            if(nums[i]!= nums[i-1]){
                nums[writeIdx] = nums[i];
                writeIdx++;
            }
        }
        return writeIdx;
    }
};