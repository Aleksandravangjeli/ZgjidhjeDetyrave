#include <stdio.h>
int main(){
	int n,i,j,h;
	printf("Vendosni numrin e reshtave:");
	scanf("%d",& n );
	for(i=0;i<n;i++){
		for(h=0;h<n-1-i;h++){
			printf(" ");
	} 
    	for(j=0;j<i+1;j++){
			printf("*");
		}
		{printf("\n");}
		}
	return 0; }


