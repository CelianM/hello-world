#include<stdio.h>

int fibo_dyn(int n){
	int a,b,c;
	a = 1;
	b = 0;
	c = 1;
	for (int i=2;i<=n;i++){
		a = b + c;
		b = c;
		c = a;
		}
	return a;
	}

int main(){
	int a = fibo_dyn(10);
	printf("%d\n",a);
}	
	
