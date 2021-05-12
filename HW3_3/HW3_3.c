#include <stdio.h>
int main(void)
{
	int hour, minute, second, totalSeconds;

	printf("Enter h m s: ");
	scanf_s("%d %d %d", &hour, &minute, &second);

	totalSeconds = hour * 3600 + minute * 60 + second;

	printf("---Calculation Result---\nTotal %d seconds", totalSeconds);
}