/*----------------------------------------------*/
/*ファイル名：ｃ20-1.c				*/
/*作　成　日：2014/09/17			*/
/*作　成　者：0Ｇ03004　井上 駿			*/
/*----------------------------------------------*/
/*ヘッダファイル--------------------------------*/
#include<stdio.h>

/*プロトタイプ宣言------------------------------*/
int test(int x);

/*エントリポイント------------------------------*/
int main(void)
{

	int a, b;

	printf("10進数入力：");
	scanf("%d", &a);
	b = test(a);
	printf("a=%d b=%d\n" , a, b);
	return 0;
}

/*値渡し----------------------------------------*/
int test(int x)
{
	printf("入力値は「%d」\n",x);
	x *= 2;
	printf("計算後は「%d」\n",x);
	return x;
}