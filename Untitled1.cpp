#include<stdio.h>

main(){
	float MTH101Std[20], ETE183Std[20], MeanMTH101 = 0, sumMTH101 = 0, MeanETE183 = 0, sumETE183 = 0, MaxMTH101 = 0, MaxETE183 = 0;
	int i;
	
	for(i=0;i<=20;i++){//Set 0
		MTH101Std[i] = 0;
		ETE183Std[i] = 0;
	}
	
	printf("-------------MTH101------------");
	for(i=1;i<=20;i++){//Enter Score MTH101
		printf("\nEnter Score Student%d:",i);
		scanf("%f",&MTH101Std[i]);

	}
		printf("-------------ETE183------------");
	for(i=1;i<=20;i++){//Enter Score ETE183
		printf("--\nEnter Score Student%d:",i);
		scanf("%f",&ETE183Std[i]);
	}
	
	for(i=1;i<=20;i++){//Mean
		sumMTH101 = sumMTH101 + MTH101Std[i];
		sumETE183 = sumETE183 + ETE183Std[i];
	}
	MeanMTH101 = sumMTH101 / 20; //Mean MTH101
	MeanETE183 = sumETE183 / 20; //Mean ETE183
	
	MaxMTH101 = MTH101Std[1];
	MaxETE183 = ETE183Std[1];
	for(i=2;i<=20;i++){//Max
		if(MaxMTH101 < MTH101Std[i])
		{
			MaxMTH101 = MTH101Std[i];
		}
		if(MaxETE183 < ETE183Std[i])
		{
			MaxETE183 = ETE183Std[i];
		}
	}
	for(i=1;i<=20;i++){//Maximum Name
		if(MaxMTH101 == MTH101Std[i])
		{
			printf("\nMaximum Score of MTH101 is Student%d",i);
		}
		if(MaxETE183 == ETE183Std[i])
		{
			printf("\nMaximum Score of ETE183 is Student%d",i);
		}
	}
	
	for(i=1;i<=20;i++){//Compare
		if(MTH101Std[i] > ETE183Std[i])
		{
			printf("\nStudent%d Score MTH101 more than ETE183",i);
		}
		else if(MTH101Std[i] < ETE183Std[i])
		{
			printf("\nStudent%d Score ETE183 more than MTH101",i);
		}
		else if(MTH101Std[i] == ETE183Std[i])
		{
			printf("\nStudent%d Score MTH101 and ETE183 are equal",i);
		}
	}
	printf("\n-----------------MTH101-----------------\nMean = %f\n-----------------ETE183-----------------\nMean = %f",MeanMTH101,MeanETE183);
}
