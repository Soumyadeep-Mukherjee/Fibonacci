# include <stdio.h>
int fibo(int n){
    if(  n==1){
        return 1;
    }
    else if(n==0){
        return 0;
    }
    else{
        return fibo(n-1)+fibo(n-2);
    }
}
int main(){
    int n,k;
    scanf("%d",&n);
    k= fibo(n);
    printf("%d",k);
    return 0;
}