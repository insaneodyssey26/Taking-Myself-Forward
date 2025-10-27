class Solution {
public:
    int search(vector<int>& arr, int k) {
        int st = 0, end = arr.size() - 1, ans = -1;
        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (arr[mid] == k) {
                ans = mid;
                end = mid - 1;
            }
            else if (arr[mid] > k) {
                end = mid - 1;
            } 
            else {
                st = mid + 1; 
            }
        }
        return ans; 
    }
}; 