#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n<0){
        printf("Invalid input\n");
        return 1;
    }
    if(n==0){
        printf("The square root of n is %d\n",n);
        return 0;
    }
    if(n==1){
        printf("The square root of n is %d\n",n);
        return 0;
    }

    int lo=0;
    int hi=n;
    
    while(lo<=hi){
        int mid=(lo+hi)/2;
        if((mid*mid)>n){
            hi=mid-1;
        }else if((mid*mid)<n){
            lo=mid+1;
        }else{
            
            printf("The square root of n is %d\n",mid);
            return 0;
        
        }
    }




        printf("The square root of n is %d\n", hi);

    return 0;
}