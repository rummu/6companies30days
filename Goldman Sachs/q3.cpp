class Solution {
public:
    
    int trailingZeroes(int n) {
       
       int res = n/5;
        int c=0;
        for (int i = res; i >=5; i=i/5)
        {
            c = c+(i/5);
        }

        return res+c;
    }
};
