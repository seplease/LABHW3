#include <stdio.h>
int main(void)
{
	int totalMinutes, hour, minute;

	printf("Enter the total minutes: ");
	scanf_s("%d", &totalMinutes);

	printf("%d minutes\n", totalMinutes);

	hour = totalMinutes / 60;
	minute = totalMinutes % 60;
	printf("%dh %dm", hour, minute);
}