/*----------------------------------------------*/
/*�t�@�C�����F��12-1.c				*/
/*��@���@���F2014/06/16			*/
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

	signed short int ssi;
	unsigned short int usi;
	signed int si;
	unsigned int ui;
	signed long int sli;
	unsigned long int uli;
	long double ld;


	//����
	printf("��������short�^�֓��́F");
	scanf("%hd", &ssi);
	printf("�����Ȃ�short�^�֓��́F");
	scanf("%hu", &usi);
	printf("��������int�^�֓��́F");
	scanf("%d", &si);
	printf("�����Ȃ�int�^�֓��́F");
	scanf("%u", &ui);
	printf("��������long�^�֓��́F");
	scanf("%ld", &sli);
	printf("�����Ȃ�long�^�֓��́F");
	scanf("%lu", &uli);
	printf("long double�^�֓��́F");
	scanf("%Lf", &ld);

	//�o��
	printf("��������short�^�̏o�́F%hd\n", ssi);
	printf("�����Ȃ�short�^�̏o�́F%hd\n", usi);
	printf("��������int�^�̏o��  �F%d\n", si);
	printf("�����Ȃ�int�^�̏o��  �F%d\n", ui);
	printf("��������long�^�̏o�� �F%ld\n",sli);
	printf("�����Ȃ�long�^�̏o��  �F%lu\n", uli);
	printf("long double�^�̏o�́F%Lf\n", ld);

	return 0;
}
