class Solution {
  public:
    int findFloor(vector<int>& arr, int x) {
        // code here
        int st = 0, end = arr.size() - 1, ans = -1;
        while (st <= end) {
            int mid = (st + end) / 2;
            if (arr[mid] < x) {
                ans = mid;
                st = mid + 1;
            }
            else if (arr[mid] > x) {
                end = mid - 1;
            } 
            else {
                ans = mid;
                st = mid + 1;
            }
        }
        return ans;
    }
};
