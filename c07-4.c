/*----------------------------------------------*/
/*ファイル名：ｃ07-4.c				*/
/*作　成　日：2014/05/30			*/
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
	int y, m, d;


	//フィールド幅を指定して入力
	printf("日付け入力YYYYMMDD：");
	scanf("%4d%2d%2d", &y, &m, &d);

	//フィールド幅を指定して出力
	printf("日付けは「%04d/%02d/%02d」です。\n", y, m, d);


	return 0;
}