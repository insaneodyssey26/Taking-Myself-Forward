class Solution {
  public:
    int upperBound(vector<int>& arr, int target) {
        // code here
        int st = 0, end = arr.size() - 1;
        while (st <= end) {
            int mid = (st + end) / 2;
            if (arr[mid] > target) {
                end = mid - 1;
            }
            else {
                st = mid + 1;
            }
        }
        return end + 1;
    }
};
