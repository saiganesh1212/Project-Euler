#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main(){
    int t,n; 
    scanf("%d",&t);
    bool a[1000000+1];
    long long int ar[1000000+1];
    long long int k=0;
    for(int i=0;i<=1000000;i++){a[i]=true;}
    for(int j=2;j<=sqrt(1000000);j++)
    {
        for(int l=j*j;l<=1000000;l+=j){
            a[l]=false;
        }
    }
    for(int h=2;h<=1000000;h++){
        if(a[h]==true){
            k+=h;
        }
        ar[h]=k;
    }
    for(int a0 = 0; a0 < t; a0++){
        scanf("%d",&n);
        printf("%lld\n",ar[n]);
    }
    return 0;
}
