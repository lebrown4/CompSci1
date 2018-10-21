//Lauren Brown
#include <stdio.h>
#include <math.h>

double f(double x)
{
	double ans = pow(x + 3,4);
	return ans;
}
double g(double x)
{
	double ans = (5 * x)/(x + 25);
	return ans;
}
double h(double x)
{
	double ans = (pow(2 * x,3))/(10 + x);
	return ans;
}
	
int main()
{
	printf("Lab 4: Composite Functions\n\n");
	printf("f(5) = %lf\n", f(5));
	printf("g(5) = %lf\n", g(5));
	printf("h(5) = %lf\n", h(5));
	printf("h(g(5)) = %lf\n", h(g(5)));
	printf("g(h(5)+f(5)) = %lf\n", g(h(5)+f(5)));
	printf("h(f(g(5)+f(5))) = %lf\n", h(f(g(5)+f(5))));
	printf("f(f(f(5))) = %lf\n", f(f(f(5))));
	return 0;
}

