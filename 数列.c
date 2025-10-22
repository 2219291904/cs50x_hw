#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

double suanfa(int n);
int main(void) {
	int n;
	scanf("%d", &n); 
	double answer =  suanfa( n);
	printf("%.3f\n", answer);

}
double suanfa(int n) {
	int sign = 1;
	double sum = 0.0;
	for (int i = 1; i <=n; i++) {
		double result = sign * i / (2.0 * i - 1.0);
		sum += result;
		sign = -sign;
	}
	return sum;
}