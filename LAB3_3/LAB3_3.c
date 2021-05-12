#include <stdio.h>
int main(void)
{
	int hour, minute;

	printf("Enter hour: ");
	scanf_s("%d", &hour);
	printf("Enter minute: ");
	scanf_s("%d", &minute);

	printf("Total %d minute", hour * 60 + minute);
}