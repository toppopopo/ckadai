/*----------------------------------------------*/
/*�t�@�C�����F��07-4.c				*/
/*��@���@���F2014/05/30			*/
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
	int y, m, d;


	//�t�B�[���h�����w�肵�ē���
	printf("���t������YYYYMMDD�F");
	scanf("%4d%2d%2d", &y, &m, &d);

	//�t�B�[���h�����w�肵�ďo��
	printf("���t���́u%04d/%02d/%02d�v�ł��B\n", y, m, d);


	return 0;
}