/*------------------------------------------------------*/
/*�t�@�C�����F��06-3.c					*/
/*��@���@���F2014/05/23				*/
/*��@���@�ҁF0�f03004�@��� �x				*/
/*------------------------------------------------------*/
/*�w�b�_�t�@�C��----------------------------------------*/
#include<stdio.h>

/*�v���g�^�C�v�錾--------------------------------------*/
double Get_Sankaku(int teihen, int takasa);

/*�G���g���|�C���g Get_Sankaku�֐��̓���`�F�b�N--------*/

/*------------------------------------------------------*/
/*�֐���:main						*/
/*�߂�l:����I���F�O					*/
/*���@��:�Ȃ�						*/
/*------------------------------------------------------*/
int main(void)
{

	int teihen, takasa;
	double menseki;


	printf("�O�p�`�̖ʐς����߂܂��B\n");

	printf("��ӂ����:");
	scanf("%d", &teihen);
	printf("���������:");
	scanf("%d", &takasa);
	
	menseki = Get_Sankaku(teihen, takasa);
	printf("�O�p�`�̖ʐς́u%.2f�v�ł��A\n" , menseki);

	return 0;
}

/*------------------------------------------------------*/
/*�֐���:Get_Sankaku					*/
/*�@�\:  �O�p�`�̖ʐς����߂�				*/
/*�߂�l:�O�p�`�̖ʐ�(double�^�j			*/
/*���@��:�Eint teihen: ���				*/
/*       �Eint takasa: ����				*/
/*------------------------------------------------------*/
double Get_Sankaku(int teihen, int takasa)
{
	double menseki;

	menseki = (double)teihen * takasa / 2;

	return menseki;
}