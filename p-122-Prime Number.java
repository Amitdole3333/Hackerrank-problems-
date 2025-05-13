class Solution {
  public:
    bool isPrime(int n) {
        // code here
        int flag=0;
        for(int i=2;i*i<=n;i++){
            flag=0;
            if(n%i==0){
            flag=1;
            break;
            }
        }
        if(flag==0)
        return true;
        else
        return false;
    }
};