class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int st = 0, end = arr.size() - 1, value = INT_MAX, idx = -1;
        while (st <= end) {
            int mid = (st + end) / 2;
            if (arr[st] <= arr[end]) {  // if st < end, then the whole array is sorted
                if (arr[st] < value) {
                    idx = st;
                    value = arr[st];
                }
                break; // we break because the whole array is sorted
            }
            if (arr[mid] <= arr[end]) { // right half is sorted
                if (arr[mid] < value) {
                    idx = mid;
                    value = arr[mid];
                }
                end = mid - 1; // we modify end to search in left half now
            }
            else {
                if (arr[st] < value) { // this means left half is sorted
                    idx = mid; 
                    value = arr[st];
                }
                st = mid + 1; // we modify st to search in right half now
            }
        }
        return idx;
    }
};
