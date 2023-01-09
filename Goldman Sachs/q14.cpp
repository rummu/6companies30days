class Solution {
public:
    int reverse(int n){
        int r=0,rev=0;
        for(int i=n;i>0;i=i/10){
            r=i%10;
            rev = rev*10+r;
        }
        return rev;
    }
    int countNicePairs(vector<int>& nums) {
    unordered_map<int,long long int> m;

    for(int i=0;i<nums.size();i++){
        int sub = nums[i] - reverse(nums[i]);
        m[sub]++;
    }
    long long int res=0;
    for(auto x:m){
        if(x.second>1){
            res = res+(x.second*(x.second-1))/2;
        }
    }
    return res%1000000007;
    }
};
