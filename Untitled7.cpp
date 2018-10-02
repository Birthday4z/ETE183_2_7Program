#include<stdio.h>

line(){
	printf("\n-------------------------------------");
}
main(){
	float wdW = 0, wdH = 0, pmW = 0, pmH = 0, lpmL = 0, pmA = 0, pricepm = 0, pricelpm = 0, Pricepm = 0, Pricelpm = 0;//cm
	float pricesewpm = 0, priceinstall = 0, Total = 0;
	
	printf("\n-----------------Nokchon Curtain Shop--------------------\n");
	printf("Enter width of window(cm):");
	scanf("%f",&wdW);
	printf("Enter hight of window(cm):");
	scanf("%f",&wdH);
	
	pmW = wdW + 100;
	pmH = wdH + 70;
	lpmL = wdW + 120;
	pmA = pmW * pmH;
	
	printf("\nCurtain width: %.2f sq.cm.\nCurtain hight: %.2f sq.cm.\nArea of curtain: %.2f sq.cm\nCurtain rod length: %.2f cm", pmW, pmH, pmA, lpmL);
	line();
	printf("\nPrice of curtain/sq.cm.(Baht):");
	scanf("%f",&pricepm);
	printf("Price of curtain rod/cm.(Baht):");
	scanf("%f",&pricelpm);
	
	Pricepm = pricepm * pmA;
	Pricelpm = pricelpm * pmW;
	
	printf("\nPrice of curtain: %.2fBaht\nPrice of curtain rod: %.2fBaht", Pricepm, Pricelpm);

// sew	
	if(pmA < 200){
		pricesewpm = pmA * 1;
	}
	else if(pmA >=200 && pmA <= 1000){
		pricesewpm = pmA * 2;
	}
	else if(pmA > 1000){
		pricesewpm = pmA * 3;
	}
	
	printf("\nCost for sewing curtain: %.2fBaht", pricesewpm);

// install
	if(wdW < 100 && wdW > 0){
		priceinstall = 100;
	}
	else if(wdW >= 100 && wdW < 200){
		priceinstall = 200;
	}
	else if(wdW >=200 && wdW < 400){
		priceinstall = 300;
	}
	else if(wdW >= 400){
		printf("\nPlease install by yourself");
	}
	if(wdW < 400) printf("\nCost for install curtain: %.2fBaht", priceinstall);
	line();
	Total = Pricepm + Pricelpm + pricesewpm + priceinstall;
	printf("\nTotal price: %.2fBaht",Total);

}
