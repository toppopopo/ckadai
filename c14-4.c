/*----------------------------------------------*/
/*�t�@�C�����F��14-4.c				*/
/*��@���@���F2014/06/24			*/
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

	char str[]="ABCDEFG";

	printf("|0123456789|\n");
	printf("|%s|\n", str);
	printf("|%10s|\n", str);
	printf("|%-10s|\n", str);
	printf("|%3s|\n", str);
	printf("|%3.3s|\n", str);
	printf("|%5.3s|\n", str);
	printf("|%-5.3s|\n", str);

	return 0;
}