#include<cstdio>
#define N 1000000

int dp[N+10];

int main(){
    int ans = 0, max = 0;
    for(long long i=2;i<=N; i++){
        if(i%2 == 0) dp[i] = dp[i/2] + 1;
        else{
            int tmp = 0;
            long long now = i;
            while(now>=i){
                if(now%2 == 1) now = 3*now+1;
                else now /= 2;
                tmp++;
            }
            dp[i] = dp[now] + tmp;
        }
        if(dp[i]>max){
            max = dp[i];
            ans = i;
        }
    }
    printf("%d\n", ans);
    return 0;
}
