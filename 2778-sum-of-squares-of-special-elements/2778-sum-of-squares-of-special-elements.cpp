class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
         

         int mul=1;
        int sum=0;
        int n=nums.size();
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                mul=nums[i-1]*nums[i-1];
                sum+=mul;

               // One Step Process sum += nums[i - 1] * nums[i - 1];

            }
        
        }
          return sum;
    }
};