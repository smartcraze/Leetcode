class Solution {
public:
    int fib(int n) {
        int arr[31];
        arr[0]=0;
        arr[1]=1;
        for(int i=0;i<n-1;i++){
            arr[i+2]=arr[i]+arr[i+1];
        }
        return arr[n];
    }
};