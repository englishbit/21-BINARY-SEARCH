#include<stdio.h>
int main(){

int n;
scanf("%d",&n);
//logic for special case
if(n<2){
    printf("Invalid input\n");
    return -1;
}


int arr[n];
printf("give value in ascending order\n");


//logic for taking input
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    if(i>0 && arr[i-1]>arr[i]){
        printf("Invalid input\n");
        return -1;
    }

}

printf("give the target value\n");
int target;
scanf("%d",&target);


//logic for finding the target
int low=0;
int hi=n-1;
int index=-1;
while(low<=hi){
    int mid=(low+hi)/2;
    if(arr[mid]==target){
        index=mid;
        hi=mid-1;
    }else if(target<arr[mid]){
        hi=mid-1;
    }else{
        low=mid+1;
    }

}


if(index!=-1){
    printf("the first occurrences is found at index:%d\n",index);

}else{
    printf("the first occurrences is not found\n");
}










    return 0;
}
