#include <stdio.h>
int main(void)
{
	int totalSeconds, hour, minute, second;

	printf("Enter the total seconds: ");
	scanf_s("%d", &totalSeconds);

	hour = totalSeconds / 3600;
	minute = totalSeconds % 3600 / 60;
	second = totalSeconds % 3600 % 60;

	printf("---Calculation Result---\n%d seconds\n%dh %dm %ds", totalSeconds, hour, minute, second);
}