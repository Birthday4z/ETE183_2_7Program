#include<stdio.h>

main(){
	int ID[13],i,CID[13],sum = 0,x = 0,C13 = 0;
	printf("Enter Digit One by One\n-----Digit Only--------\n");
	for(i=1;i<=13;i++){
		printf("Enter Digit%d:",i);
		scanf("%d",&ID[i]);
		CID[i] = ID[i] * (14-i);
	}
	printf("--------------------------------\n");
	for(i=1;i<=13;i++){
	printf("%d",ID[i]);
	}
	for(i=1;i<=12;i++){
		sum = sum + CID[i];
	}
	x = sum%11;
	if(x <= 1){
		C13 = 1 - x;
	}
	else if(x > 1){
		C13 = 11 - x;
	}
	if(C13 == CID[13]){
		printf("\nTrue It's ID Number");
	}
	else if(C13 != CID[13]){
		printf("\nFalse It isn't ID Number");
	}
}
