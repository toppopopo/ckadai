/*----------------------------------------------*/
/*�t�@�C�����F��kadai14.c			*/
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
	int x, y;

	printf("x=");
	scanf("%d", &x);

	printf("y=");
	scanf("%d", &y);

	if(x==y)
		printf("x��y�͓������ł�\n");
	else if(x>y)
		printf("x�̕����傫���ł�\n");
	else if(x<y)
		printf("y�̕����傫���ł�\n");
	return 0;
}