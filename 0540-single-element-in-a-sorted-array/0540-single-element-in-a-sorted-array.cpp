class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        int n = nums.size();
        int left = 0;
        int right = n - 1;

        if (n == 1) {
            return nums[0];
        }

        while (left <= right) {

            int mid = left + (right - left) / 2;

            // Check if the single element is at the first index
            if (mid == 0 && nums[1] != nums[0]) {
                return nums[0];
            }

            // Check if the single element is at the last index
            if (mid == n - 1 && nums[n - 1] != nums[n - 2]) {
                return nums[n - 1];
            }

            // Check if the middle element is unique
            if (nums[mid - 1] != nums[mid] &&
                nums[mid] != nums[mid + 1]) {
                return nums[mid];
            }

            // If mid is even
            else if (mid % 2 == 0) {

                if (nums[mid - 1] == nums[mid]) {
                    right = mid - 1;
                }
                else {
                    left = mid + 1;
                }
            }

            // If mid is odd
            else {

                if (nums[mid - 1] == nums[mid]) {
                    left = mid + 1;
                }
                else {
                    right = mid - 1;
                }
            }
        }

        return -1;
    }
};