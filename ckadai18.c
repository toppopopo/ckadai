/*----------------------------------------------*/
/*ファイル名：ｃkadai18.c			*/
/*作　成　日：2014/06/13			*/
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
	int i, sum = 0;

	for (i=1 ; i<=100 ; i++ )
		sum = sum+i;

	printf("1〜100までの合計は「%d」です\n", sum);

	return 0;
}