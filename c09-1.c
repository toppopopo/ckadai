/*----------------------------------------------*/
/*ファイル名：ｃ09-1.c				*/
/*作　成　日：2014/06/12			*/
/*作　成　者：0Ｇ03004　井上 駿			*/
/*----------------------------------------------*/
/*ヘッダファイル--------------------------------*/
#include<stdio.h>

/*----------------------------------------------*/
/*関数名:main					*/
/*戻り値:正常終了：０				*/
/*引　数:なし					*/
/*----------------------------------------------*/
int main(void)
{

	int a = 100, b = 50, c;


	c = a == b;	//条件を満たさない
	printf("c=%d\n", c);

	c = a >= b;	//条件を満たす
	printf("c=%d\n", c);

	c = a > 50 && b != 50;	//条件を満たさない
	printf("c=%d\n" , c);

	c = a == b || a <= 100;	//条件を満たす
	printf("c=%d\n", c);

	return 0;
}