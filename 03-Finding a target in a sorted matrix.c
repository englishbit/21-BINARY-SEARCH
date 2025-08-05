#include<stdio.h>
#define MAX 100000
int matrix[MAX][MAX];

int binarysearch_in_row(int array[],int n,int target){
    int lo=0,hi=n-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(array[mid]==target){
            return array[mid];
        }else if(target>array[mid]){
            lo=mid+1;
        }else{
            hi=mid-1;
        }
    }

    return -1;
}
int main(){

    //logic for input
    int n;
    scanf("%d",&n);

    //logic for special case
    if(n<2){
        printf("Invalid input\n");
        return -1;
    }


    //logic for taking the input matrix
    printf("Give the elements of matrix in row and column wise sorted\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);
        }
    }

    //input the target
    int target;
    scanf("%d",&target);


    //logic for binary search
    int lo=0;
    int hi=n-1;
    int targetrow=-1;

    while(lo<=hi){

        int mid=lo+(hi-lo)/2;

        if(matrix[mid][n-1]>=target && matrix[mid][0]<=target){
            targetrow=mid;
            break;
        }else if(matrix[mid][n-1]>target){
            hi=mid-1;
        }else{
            lo=mid+1;
        }
    }


    if(targetrow!=-1){
        int result=binarysearch_in_row(matrix[targetrow],n,target);

        if(result!=-1){printf("Target is found\n");}
        else{printf("Target is not found\n");}

    }else{
        printf("Target row is not found\n");
    }
   














    return 0;
}