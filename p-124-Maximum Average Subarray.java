class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double avg=0,maxAvg=INT_MIN,sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        avg=sum/k;
        if(avg>maxAvg){
            maxAvg=avg;
        }

        int s=1,e=k;
        while(e<nums.size()){
            sum=sum-nums[s-1]+nums[e];
            avg=sum/k;
            if(avg>maxAvg){
                maxAvg=avg;
            }
            s++,e++;
        }
       return maxAvg;
    }
};