class Solution {
public:

    bool isValid(vector<int>& nums, int k, int mid) {
        int students = 1;
        int pages = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (pages + nums[i] <= mid) {
                pages = pages + nums[i];
            }
            else {
                students++;
                pages = nums[i];
            }
        }

        return students <= k;
    }

    int splitArray(vector<int>& nums, int k) {
        int st = *max_element(nums.begin(), nums.end());
        int end = 0;

        for (int i = 0; i < nums.size(); i++) {
            end = end + nums[i];
        }

        int ans = -1;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (isValid(nums, k, mid)) {
                ans = mid;
                end = mid - 1;
            }
            else {
                st = mid + 1;
            }
        }

        return ans;
    }
};