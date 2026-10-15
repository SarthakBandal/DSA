class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int left=1;     // for optimisation of code as we know the boundary values are not peak as it is a mountain array
        int right=arr.size()-2; // same here if peak index is at second last so check mid condition the mid+1 is available

        while(left<=right)
        {
            int mid=left + (right-left)/2;

            if(arr[mid-1] <arr[mid] && arr[mid] > arr[mid+1])
            {
                return mid;
            }
            else if(arr[mid]>arr[mid-1])   //search in right side  ascendng side
            {
               left=mid+1;
            }
            else                    // (arr[mid]<arr[mid-1]) search in left side  decendng side
            
            {
               right=mid-1;
            }
        }
        return -1;
    }
};