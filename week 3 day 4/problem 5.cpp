class Solution {
  public:
    vector<int> FirstNegativeInteger(vector<int>& a, int k) {
        vector<int>v;
        int n=a.size();
        queue<int>q;
        int l=0, r=0;
        while(r<n){
            if(a[r]<0){
                q.push(a[r]);
            }
            if(r-l+1==k){
                if(!q.empty()){
                    v.push_back(q.front());
                    if(a[l]==q.front()){
                        q.pop();
                    }
                }
                else{
                    v.push_back(0);
                }
                l++, r++;
            }
            else{
                r++;
            }
        }
        return v;
    }
};
