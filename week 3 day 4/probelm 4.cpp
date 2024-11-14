class Solution {
  public:
    long long maximumSumSubarray(vector<int>& a, int k) {
        int n=a.size();
        long long int sum=0, ans=0, l=0, r=0;
        while(r<n){
            sum+=a[r];
            if(r-l+1==k){
                ans=max(ans, sum);
                sum-=a[l];
                l++;
            }
            r++;
        }
        return ans;
    }
};
