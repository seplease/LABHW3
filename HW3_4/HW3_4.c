#include <stdio.h>
int main(void)
{
	int base, height1, area, width, height2, circumference;

	printf("�غ��� ���̸� �Է��ϼ���: ");
	scanf_s("%d %d", &base, &height1);

	area = base * height1 / 2;

	printf("�غ��� ���̰� ���� %d�� %d�� �ﰢ���� ���̴� %d�̴�\n", base, height1, area);

	printf("���簢���� ���ο� ���̸� �Է��ϼ���: ");
	scanf_s("%d %d", &width, &height2);

	circumference = width * 2 + height2 * 2;

	printf("���ο� ���̰� ���� %d�� %d�� ���簢���� �ѷ��� ���̴� %d�� %d�̴�", width, height2, circumference, area);
}