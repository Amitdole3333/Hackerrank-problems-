

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
        vector<int> V;
        long max=INT_MIN;
        for(int i=arr.size()-1;i>=0;i--){
            if(arr[i]>=max){
                V.push_back(arr[i]);
                max=arr[i];
            }
        }
        int n=V.size();
        for(int i=0;i<n/2;i++){
            int temp=V[i];
            V[i]=V[n-i-1];
            V[n-i-1]=temp;
        }
        return V;
    }
};