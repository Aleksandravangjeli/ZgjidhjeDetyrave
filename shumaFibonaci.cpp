#include<stdio.h>
int fibonaci(int n){
	if(n==0){
   return 0;}
   else if(n==1){
   return 1;}
   else{
   return fibonaci(n-1)+fibonaci(n-2);
}}
int shumafibonaci(int n){
	int shuma = 0;
	for (int i=0;i<=n;i++){
		shuma+=fibonaci(i);
	}
	return shuma;
}
	int main(){
		int n;
		printf("Jepni vleren e n:");
		scanf("%d",& n);
		printf("Shuma e %dkufizave te vargut te Fibonacit eshte:%d\n",n,shumafibonaci(n));
		return 0;
	}

