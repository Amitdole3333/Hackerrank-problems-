class Solution {
  public:
    vector<int> prefixAvg(vector<int> &arr) {
        // code here
        int x=arr.size();
        int avg[x];
        for(int i=0;i<x;i++){
            avg[i]=arr[i];
        }
        int sum=0;
        for (int i=0;i<x;i++){
           sum=sum+avg[i];
           arr[i]=sum/(i+1);
        }
        return arr;
    }
};