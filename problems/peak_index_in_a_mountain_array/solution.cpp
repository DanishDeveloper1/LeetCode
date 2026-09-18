class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int st = 0, end = arr.size() - 1;
        int peak = 0;
        while (st <= end) {
            int mid = st + (end - st) / 2;
            if (arr[mid] > arr[mid + 1]) {
                end = mid - 1;
                peak = mid;
            } else {
                st = mid + 1;
                peak = mid + 1;
            }
        }
        return peak;
    }
};