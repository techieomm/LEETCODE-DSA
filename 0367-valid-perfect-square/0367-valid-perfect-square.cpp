class Solution {
public:
    bool isPerfectSquare(int num) {
        long long i=0;
        long long j=num;
        long long n=(long)num;
        while(i<=j){
            long long mid=(i+(j-i)/2);
            if((mid*mid)>n){
                j=mid-1;
            }
            else if((mid*mid)==n){
                return true;
            }
            else{
                i=mid+1;
            }
        }
        return false;

    }
};