class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int size = nums.size() - 1; // size of the array - 1
        if (size == 0) return nums[0]; // when array has only one element, that is the answer
        if (nums[0] != nums[1]) return nums[0]; // checking first element
        if (nums[size] != nums[size - 1]) return nums[size]; // checking last element

        int st = 0, end = size;
        while (st <= end) {
            int mid = (st + end) / 2;
            if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1]) return nums[mid]; // checking mid element
            if (mid % 2 == 0 && nums[mid] == nums[mid + 1] || 
                mid % 2 == 1 && nums[mid] == nums[mid - 1]
                ) {
                    st = mid + 1;
                }
                else {
                    end = mid - 1;
                }
        }
        return -1;
    }
};

// actually this is the theory: the pairs will always start at even index and end at odd index
// when we find a mid which is even and its next element is same as mid, it means the single element is on the right side
// when we find a mid which is odd and its previous element is same as mid, it means the single element is on the right side
// otherwise the single element is on the left side
// the two if conditions tell us which side to search next