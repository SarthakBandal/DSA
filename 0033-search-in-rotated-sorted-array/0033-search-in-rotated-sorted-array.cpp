class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left=0;
        int Right=nums.size()-1;

        while(left<=Right)
        {
            int mid=left + (Right-left)/2;

            if(nums[mid]==target)
            {
                return mid;
            }
            if(nums[mid]>=nums[left])
            {
                if(nums[left]<=target && target <=nums[mid])
                {
                    Right=mid-1;
                }
                else
                {
                    left=mid+1;
                }
            }
            if(nums[mid]<=nums[Right])
            {
                if(nums[mid]<=target && target <=nums[Right])
                {
                    left=mid+1;
                }
                else
                {
                    Right=mid-1;  
                }
            }
        }
        return -1;
    }
};