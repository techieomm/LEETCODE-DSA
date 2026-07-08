class Solution {
public:
    bool canShip(int m,vector<int>& weights, int days){
        int c=m,d=1;
        for(int wt : weights){
            if(c-wt<0){
                d++;
                c=m;
            
            }
            c-=wt;
        }
        return (d<=days);
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int mx=weights[0],sum=0;
        for(int a:weights){
           mx= max(mx,a);
           sum+=a;
        }
        int low=mx,high=sum,ans=sum;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(canShip(mid,weights,days)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};