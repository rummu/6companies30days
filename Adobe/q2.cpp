long long next=INT_MAX,prev=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>prev){
               return  true;
            }
            if(nums[i]>next){
                long long c=nums[i];
                 prev = min(c ,prev);
            }
            long long c=nums[i];
            next = min(c,next);
        }
        return false;
