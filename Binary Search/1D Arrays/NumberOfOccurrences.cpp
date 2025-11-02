class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
        int st = 0, end = arr.size() - 1, first = -1, last = -1;
        while (st <= end) {
            int mid = (st + end) / 2;
            if (arr[mid] == target) {
                last = mid;
                st = mid + 1;
            }
            else if (arr[mid] > target) {
                end = mid - 1;
            }
            else {
                st = mid + 1;
            }
        }
        st = 0, end = arr.size() - 1;
        while (st <= end) {
            int mid = (st + end) / 2;
            if (arr[mid] == target) {
                first = mid;
                end = mid - 1;
            }
            else if (arr[mid] > target) {
                end = mid - 1;
            }
            else {
                st = mid + 1;
            }
        }
        if (first == -1 || last == -1) return 0;
            else return last - first + 1;
    }
};
