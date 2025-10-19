class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int largest = -1, second_largest = -1;
        
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] > largest) largest = arr[i];
        }
        
        for (int j = 0; j < arr.size(); j++) {
            if (arr[j] > second_largest && arr[j] < largest) second_largest = arr[j];
        }
        return second_largest;
    }
};