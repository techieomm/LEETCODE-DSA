class Solution {
    public boolean isPalindrome(int x) {
    int reverse =0;
    int n = x;
    while(n>0){
        int digit = n%10;
        reverse = reverse * 10 + digit;
        n/=10;
    }
    if(x==reverse){
        return true;
    }
    else{
        return false;
    }
    }
}