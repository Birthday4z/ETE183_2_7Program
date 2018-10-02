#include<stdio.h>

main(){
	int pass = 1234,i = 0;
	do{
		printf("Enter Password:");
		scanf("%d",&pass);
		i++;
		if(pass != 1234){
			printf("Error#%d\n",i);
		}
		else if(pass == 1234){
			printf("\nWelcome");
		}
	}
	while(pass != 1234 && i != 10);
	if(i == 10){
		printf("Sorry");
	}
}
