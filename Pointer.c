#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void)
{
	int arr1[3] = { 0,1,2 };
	printf("�迭�� �̸�: %p\n", arr1); //0000001EF4DDFAC8
	printf("ù ��° ���: %p\n", &arr1[0]); //0000001EF4DDFAC8
	printf("�� ��° ���: %p\n", &arr1[1]); //0000001EF4DDFACC
	printf("�� ��° ���: %p\n", &arr1[2]); //0000001EF4DDFAD0

	//arr1=&arr1[i]; //�迭�� �̸��� ���� �Ұ����� ��� ����.

	//�迭�� �̸� = �迭�� ���� �ּ� ��.
	//int�� �迭��Ұ� �ּ� ���� ���� 4����Ʈ.
	return 0;
}
