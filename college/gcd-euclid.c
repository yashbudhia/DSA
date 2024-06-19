#include<stdio.h>

int gcdRecursive(int a,int b){
    if(b == 0){
    return a;
    }
    return gcdRecursive(b, a%b);
};

int gcdIterative(int a, int b){
    while(b != 0){
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;
};

int gcdContinuosIntegerChecking(int a, int b){
    int gcd =1;
    for(int i = 1; i <= a && i <= b; i++){
        if(a%i == 0 && b%i == 0){
            gcd = i;
        };
    };
    return gcd;
}

int main(){

    int a= 56;
    int b = 98;

    printf("\n GCD using recursion is %d \n",gcdRecursive(a,b));
    printf("\n GCD using Iterative is %d \n",gcdIterative(a,b));
    printf("\n GCD using Continuos Integer Checking is %d \n",gcdContinuosIntegerChecking(a,b));
    return 0;
}