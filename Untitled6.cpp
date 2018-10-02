#include<stdio.h>

int expo(int a,int b){
	int ans,i;
	ans = a;
	for(i=1;i<b;i++){
		ans = ans * a;
	}
	return ans;
}
main(){
	int x = 0,y = 0,ans;
	printf("----------------------------\nExponential \nForm:x^y Ex:2^3 = 8\n----------------------------");
	printf("\nEnter x:");
	scanf("%d",&x);
	printf("Enter y:");
	scanf("%d",&y);
	printf("x=%d y=%d",x,y);
	printf("\nAnswer=%d",expo(x,y));
}
