class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) {
        // code here
        int st = 0, end = arr.size() - 1;
        while (st <= end) {
            int mid = (st + end) / 2;
            if (arr[mid] < target) {
                st = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }
        return st;
    }
};
