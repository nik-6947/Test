#include<stdio.h>
void sumup(int*);
int main(){
 	printf("vjknknf");
	int *xp;
	int y=2;
	xp=&y;
	sumup(xp);
}
void sumup(int* a){
	int temp;
	temp=a[0]+a[1]+a[2];
	a[3]=temp;
}
