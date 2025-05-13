class Solution {
  public:
    int countFactors(int N) {
        // code here
        int c=0;
        for (int i=1;i*i<=N;i++){
            if(N%i==0){
                if(i==N/i){
                    c+=1;
                }
                else{
                    c+=2;
                }
            }
        }
        return c;
    }
};