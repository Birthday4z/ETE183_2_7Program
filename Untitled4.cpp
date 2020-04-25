#include<stdio.h>

int main(){
	/*
	CID means result each digit
	sum means summary of CID
	x means result_of_mod11
	*/
	int ID[13], CID[13], i;
	int sum = 0,x = 0,C13 = 0;
	printf("Enter Digit One by One\n-----Digit Only--------\n");
	
	for(i=1;i<=13;i++){
		printf("Enter Digit%d:",i);
		scanf("%d",&ID[i]);
		//---- 1. Find
		CID[i] = ID[i] * (14-i);
	}
	
	printf("--------------------------------\n");
	//-------Show Input
	for(i=1;i<=13;i++){
		printf("%d",ID[i]);
	}
	//-------1. Find Sum
	for(i=1;i<=12;i++){
		sum = sum + CID[i];
	}
	//-------2. Find MOD 11
	x = sum % 11;
	//-------3. Find CheckDigit
	C13 = 11 - x;
	
	//-----Cut FirstDigit if it has two digits
	if(C13 >= 10){
		C13 = C13 - 10;
	}
	/* //---------Debug
	printf("\n sum = %d", sum);
	printf("\n x = %d", x);
	printf("\n C13 = %d", C13);
	printf("\n CID[13] = %d", CID[13]);
	*/
	if(C13 == CID[13]){
		printf("\nTrue It's ID Number");
	}
	else if(C13 != CID[13]){
		printf("\nFalse It isn't ID Number");
	}
	
}
