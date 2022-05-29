//    11. Programs to generate permutations and combinations.
#include<stdio.h>
int fact (int p){
    if(p==0||p==1)
    return 1;
    else 
    return(p*fact(p-1));
}
int per(int n,int r){
    return (fact(n)/fact(n-r));
}
int combi(int n,int r){
    return (fact(n)/(fact(r)*fact(n-r)));
}
void main(){
    int n,r;
    printf("Enter n and r: ");
    scanf("%d%d",&n,&r);
    if(n<=r)
    printf("error\n.");
    else{
        printf("Permutation is %d.\n",per(n,r));
        printf("Combination is %d.\n",combi(n,r));
    }
}