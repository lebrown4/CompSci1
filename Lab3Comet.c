//Lauren Brown
#include <stdio.h>
int main()
{
	FILE *data = fopen("CometPeriods.dat", "r");
	if(data == NULL)
	{
		printf("Can't open.\n");
		return 1;
	}
	
	double input = 0;//input from the file
	double zero = 0;//this counts the number of zeros in the file
	double sum = 0;//the sum of all periods
	double divisor = 0;//what you divide the sum by
	double avg = 0;//the average period
	double small = 0;//number of periods less than 200 years 
	double large = 0;//number of periods greater than 200 years
	double mega_annum = 0;//number of periods greater than 1 million years
	
	for(int i = 1; i < 1461; i++)
	{
		fscanf(data,"%lf", &input);
		sum = sum + input;
		if(input == 0)
		{
			zero = zero + 1;
		}
		else if(input < 200)
		{
			small = small + 1;
		}
		else if(input > 200)
		{
			large = large + 1;
		}
		if(input > 1000000)
		{
			mega_annum = mega_annum + 1;
		}
	}
	
	divisor = small + large;
	avg = sum / divisor;
	
	printf("Comet Period Calculator\n\n");
	printf("The average period is: %lf\n", avg);
	printf("The number of comets with period zero is: %lf\n", zero);
	printf("The number of comets with short periods is: %lf\n", small);
	printf("The number of comets with long periods is: %lf\n", large);
	printf("The number of comets with mega-annum periods is: %lf\n", mega_annum);
	return 0;
}
