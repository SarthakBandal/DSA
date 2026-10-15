
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        // Optimisation: The first and last elements cannot be the peak
        // if peak is second elemnt so in that case mid-1 is 1 element so it is available for checking 
        // if peak index is at second last so check mid condition the mid+1 is available line no 9

        int left = 1;
        int right = arr.size() - 2;

        while (left <= right)
        {
            // Find the middle index
            int mid = left + (right - left) / 2;

            // Check if mid is the peak
            // Peak element must be greater than both neighbours
            if (arr[mid - 1] < arr[mid] &&
                arr[mid] > arr[mid + 1])
            {
                return mid;  // Return the peak index
            }

            // If the current element is greater than the previous element,
            // we are on the ascending side, so search the right side
            else if (arr[mid] > arr[mid - 1])
            {
                left = mid + 1;
            }

            // Otherwise, we are on the descending side,
            // so search the left side
            else
            {
                right = mid - 1;
            }
        }

        // Return -1 if the peak is not found
        return -1;
    }
};
