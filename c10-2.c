/*----------------------------------------------*/
/*�t�@�C�����F��10-2.c				*/
/*��@���@���F2014/06/13			*/
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
	int i, sum;


	/*�����̕��𐧌䂷��ꍇ�́o �� �p�ň͂�*/
	for (sum = 0, i = 1 ; i <= 5 ; i++ ) {
		sum = sum + i;
		printf("i=%d sum=%2d\n", i, sum);
	}

	return 0;
}