class Solution {
public:
    int N = 1e7+9;
    
    int countPrimes(int n) {
        int cunt=0;
        // if(n==0) return 0;
        vector<bool>isPrime(n,true);
        for(int i=2;i<n;i++){
            if(isPrime[i]){
                cunt++;
                for(int j=2*i;j<n;j+=i){
                    isPrime[j]=false;
                }
            }
        }
        return cunt;
    }
};