#include<stdio.h>
int factorial(int n){
	if(n==0){
		return 1;
	}
		return n*factorial(n-1);
	}
	int shumaNrFaktorial(int n){
	if(n==0){
        return 1;
        }
        return faktorial(n)+shumaNrFaktorial(n-1);
	}
     int main(){
	int n;
	printf("Jepni numrin n:");
	scanf("%d",& n);
	if(n<0){
		printf("Nuk mund te gjejme shumen e faktorialeve per numrat negative.:");
		}
		else{
			printf("Shuma e numrave faktoriale %d is %11u\n", n,shumaNrFaktorial(n));
		}
		return 0;
	}
