#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void)
{
	int arr1[3] = { 0,1,2 };
	printf("배열의 이름: %p\n", arr1); //0000001EF4DDFAC8
	printf("첫 번째 요소: %p\n", &arr1[0]); //0000001EF4DDFAC8
	printf("두 번째 요소: %p\n", &arr1[1]); //0000001EF4DDFACC
	printf("세 번째 요소: %p\n", &arr1[2]); //0000001EF4DDFAD0

	//arr1=&arr1[i]; //배열의 이름은 값이 불가능한 상수 형태.

	//배열의 이름 = 배열이 시작 주소 값.
	//int형 배열요소간 주소 값의 차는 4바이트.
	return 0;
}
