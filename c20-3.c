/*----------------------------------------------*/
/*�t�@�C�����F��20-3.c				*/
/*��@���@���F2014/09/17			*/
/*��@���@�ҁF0�f03004�@��� �x			*/
/*----------------------------------------------*/
/*�w�b�_�t�@�C��--------------------------------*/
#include<stdio.h>

/*�L���萔�i�}�N���j-----------------------------*/
#define S1 3
#define S2 10

/*�v���g�^�C�v�錾-------------------------------*/
int Get_Sumarray(int *data, int size);

/*�G���g���|�C���gGet_Sumarray�֐��̓���`�F�b�N-*/
int main(void)
{

	int test1[S1] = {13, 10, 15};
	int test2[S2] = {5, 7, 2, 4, 1, 3, 10, 9, 6, 8 };
	int sum1, sum2;


	sum1 = Get_Sumarray(test1, S1);
	sum2 = Get_Sumarray(test2, S2);

	printf("test1���v�F%d\n", sum1);
	printf("test2���v�F%d\n", sum2);

	return 0;
}


/*------------------------------------------------------*/
/*�֐����FGet_Sumarray					*/
/*�@�@�\�F�����Ŏw�肳�ꂽint�^�z��̍��v�l�����Ƃ߂�	*/
/*�߂�l�F�z��̍��v�l(int�^)				*/
/*���@���F�Eint *data :�z��̐擪�A�h���X		*/
/*	  �Eint size  :�z��̗v�f��			*/
/*------------------------------------------------------*/
int Get_Sumarray(int *data, int size)
{
	int sum, i;
	for (i = 0, sum = 0; i < size ; i++, data++ ) {
		sum += *data;
	}


	return sum;
}