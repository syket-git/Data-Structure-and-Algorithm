class Solution{
    public:
    //You need to complete this fucntion
    
    int MOD = 1e9+7;
    
    long long power(int N,int R)
    {
       if(N == 0) return 0; 
       if(R == 0) return 1; 
       
       if(R % 2 == 0){
           
           long long ans = power(N, R/2);
           return (ans % MOD * ans %MOD) %MOD;
           
       }else{
           long long ans = power(N, (R-1)/2);
       return (ans%MOD * ans%MOD * N)%MOD;
       }
       
        
    }

};
