class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start=0;
        int end=nums.size()-1;
        vector<int>v(2,-1);
        int ans1=-1;
        int ans2=-1;

        //first occurance
        while(start<=end){
            int mid=(start+end)/2;
            if(target>nums[mid]){
                start=mid+1;
            }
            else if(target<nums[mid]){
                end=mid-1;
            }
            else{
                ans1=mid;
                end=mid-1;
            }
        }
        start=0;
        end=nums.size()-1;
        //last occuranve
        while(start<=end){
            int mid=(start+end)/2;
            if(target>nums[mid]){
                start=mid+1;
            }
            else if(target<nums[mid]){
                end=mid-1;
            }
            else{
                ans2=mid;
                start=mid+1;
            }
        }
        v[0]=ans1;
        v[1]=ans2;
        return v;
    }
};