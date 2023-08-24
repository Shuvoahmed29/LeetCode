class Solution {
public:
    int getMaximumGenerated(int n) {
        int arr[n+10];
        arr[0] = 0;
        arr[1] = 1;
        for(int i=2;i<=n;i++){
            if(i%2 == 0){
                arr[i] = arr[i/2];
            }
            else{
                arr[i] = arr[i/2] + arr[i/2 + 1];
            }
        }
        sort(arr,arr+n+1);
        return arr[n];
    }
};