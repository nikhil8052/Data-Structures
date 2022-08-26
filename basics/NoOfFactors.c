#include<stdio.h>
#include<stdlib.h>
#include<math.h>


void printFactors(int n ){
    
    int tem=n ;
    while(tem){
        if(n%tem==0) printf("%d ",tem);
        tem--;
    }
}

int main(){

    int n ; 
    printf("Enter the number : ");
    scanf("%d",&n);
    printFactors(n);
    printf("\nStatus: Done.");
    
}