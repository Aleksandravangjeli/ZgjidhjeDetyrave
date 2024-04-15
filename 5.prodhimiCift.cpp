#include<stdio.h>
int prodhimiCift(int n){
	if (n==0){
	return 1;
	} else if(n%2 != 0){
		return prodhimiCift(n-1);
	}else{
		return n*prodhimiCift(n-1);
	}
}
int main(){
	int n;
	printf("Jepni numrin e kufizave:");
	scanf("%d",&n);
	int prodhimi=prodhimiCift(n);
	printf("Prodhimi i numrave cift ne %d kufizat e para cift eshte:%d\n",n,prodhimi);
	return 0;
	}
