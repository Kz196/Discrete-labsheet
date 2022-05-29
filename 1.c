//1. Programs to implement set operations union, intersection, difference, and Cartesian product. 
#include<stdio.h>
int m,n,i,j,k;
void uni(int a[], int b[]){
    printf("\nAuB:{");
    for(i=0;i<m;i++){
        printf("%d,",a[i]);
    }
    for(i=0;i<n;i++){
        k=0;
        for(j=0;j<m;j++){
            if(b[i]==a[j])
            break;
            k++;
        }
        if(k==m)
        printf("%d,",b[i]);
    }
    printf("\b}");
}

void inter(int a[],int b[]){
    printf("\nAnB:{");
    for(i=0;i<m;i++){
        k=0;
        for(j=0;j<n;j++){
           if(a[i]==b[j]){
               printf("%d,",a[i]);
               k++;
           }
        }
    }
    if(k==0)
    printf(" ");
    printf("\b}");
}

void diff(int a[],int b[]){
    printf("\nA-B={");
    for(i=0;i<m;i++){
        k=0;
        for(j=0;j<n;j++){
            if(a[i]==b[j])
            k++;
        }
        if(k==0)
        printf("%d,",a[i]);
    }
    printf("\b}");
    
    printf("\nB-A={");
    for(i=0;i<n;i++){
        k=0;
        for(j=0;j<m;j++){
            if(b[i]==a[j])
            k++;
        }
        if(k==0)
        printf("%d,",b[i]);
    }
    printf("\b}");
}

void cart(int a[],int b[]){
    printf("\nThe cartesian product is:{");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("(%d,%d),",a[i],b[j]);
        }
    }
    printf("\b}");
}

void main(){
    printf("Enter cardinal number of set A: ");
    scanf("%d",&m);
    printf("Enter cardinal number of set B: ");
    scanf("%d",&n);
    int a[m],b[n];
    printf("Enter elements of set A: ");
    for(i=0;i<m;i++)
    scanf("%d",&a[i]);
    printf("Enter elements of set B: ");  
    for(i=0;i<n;i++)
    scanf("%d",&b[i]);
    uni(a,b);
    inter(a,b);
    diff(a,b);
    cart(a,b);
    printf("\n");
}