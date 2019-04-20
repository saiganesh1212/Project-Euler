#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
int prime(int p){int c1=0;
    if(p==1){return 0;}
    for(int i=2;i<=sqrt(p);i++){
        if(p%i==0){c1=1;break;}
    }
    if(c1==1)return 0;
    return 1;
}
int main() {
    long n,c=0,p,digit=0,sum=0;
    scanf("%ld",&n);
    bool a[n+1];
    for(long i=0;i<=n;i++){
        a[i]=true;
    }
    for(long l=2;l<=sqrt(n);l++){
	if(a[l]==true){
        for(int k=l*l;k<=n;k+=l){
            a[k]=false;
        }
	}
    }
    int f=-1,rem;
    for(long j=2;j<=n;j++){
        if(a[j]){
		p=j;f=0;
            while(p!=0){
             p=p/10;digit++;
             if(!prime(p)){f=1;break;}
             }
		p=j;
            if(f!=1){
                while(p!=0){
                rem=(int)(p/(pow(10,digit-1)));
                p-=(pow(10,digit-1)*rem);
                if(!prime(p)){f=1;break;}
                digit--;
                }
                if(f==0){
                    sum+=j;
                    }
            }
        }
        }
    printf("%ld",sum-17);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}


