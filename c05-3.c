/*----------------------------------------------*/
/*�t�@�C�����F��05-3.c				*/
/*��@���@���F2014/05/15			*/
/*��@���@�ҁF0�f03004�@��� �x			*/
/*----------------------------------------------*/
/*�w�b�_�t�@�C��--------------------------------*/
#include<stdio.h>

/*----------------------------------------------*/
/*�֐���:main					*/
/*�߂�l:����I���F�O				*/
/*���@��:�Ȃ�					*/
/*----------------------------------------------*/
int main(void)
{
	int a, b;


	printf("a����� : ");
	scanf("%d", &a);

	printf("b����� : ");
	scanf("%d", &b);

	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b);

	return 0;
}