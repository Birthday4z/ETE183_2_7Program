#include<stdio.h>

howtochange(float money){
	int cstang25 = 0,cstang50 = 0,cbaht1 = 0,cbaht2 = 0,cbaht5 = 0,cbaht10 = 0,cbaht20 = 0,cbaht50 = 0,cbaht100 = 0,cbaht500 = 0,cbaht1000 = 0;//count
	printf("--------------------------------");
	do{
		if(money >=1000){
			money = money - 1000;
			cbaht1000+=1;
		}
		else if(money >=500){
			money = money - 500;
			cbaht500+=1;
		}
		else if(money >=100){
			money = money - 100;
			cbaht100+=1;
		}
		else if(money >=50){
			money = money - 50;
			cbaht50+=1;
		}
		else if(money >=20){
			money = money - 20;
			cbaht20+=1;
		}
		else if(money >=10){
			money = money - 10;
			cbaht10+=1;
		}
		else if(money >=5){
			money = money - 5;
			cbaht5+=1;
		}
		else if(money >=2){
			money = money - 2;
			cbaht2+=1;
		}
		else if(money >=1){
			money = money - 1;
			cbaht1+=1;
		}
		else if(money >=0.5){
			money = money - 0.5;
			cstang50+=1;
		}
		else if(money >=0.25){
			money = money - 0.25;
			cstang25+=1;
		}
	}
	while(money !=0);
	printf("\n1000Baht:%dea\n500Baht:%dea\n100Baht:%dea\n50Baht:%dea\n20Baht:%dea\n10Baht:%dea\n5Baht:%dea\n2Baht:%dea\n1Baht:%dea\n50Stang:%dea\n25Stang:%dea",cbaht1000,cbaht500,cbaht100,cbaht50,cbaht20,cbaht10,cbaht5,cbaht2,cbaht1,cstang50,cstang25);	
}

main(){
	float price = 0,sumprice = 0,money = 0,change = 0;
	printf("-----------------Cashier--------------\nProgram will calculate summary when enter[0]");
	do{
		printf("\nEnter price product(Baht):");
		scanf("%f",&price);
		sumprice = sumprice + price;
	}
	while (price != 0);
	printf("Total Price(Baht) = %.2fBaht",sumprice);
	printf("\nEnter Money(Baht):");
	scanf("%f",&money);
	change = money - sumprice;
	if(change > 0){
		printf("Change: %.2fBaht\n",change);
		howtochange(change);
	}
	else if(change < 0){
		printf("Money not enough");
	}
	else if(change == 0){
		printf("Thank you for using our service, please come back again.");
	}
}
