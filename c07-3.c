/*----------------------------------------------*/
/*ファイル名：ｃ07-3.c				*/
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

	int	id;	//整数型	int
	double	dd;	//倍精度実数型	double


	printf("整数と実数を空白で区切って入力：");
	scanf("%d %lf", &id, &dd);	//複数のデータを一度に入力


	//フィールド幅を指定して出力
	printf("５桁で出力：| %5d | %-5d | %05d |\n", id, id, id);
	printf("全体５桁,  小数点以下２桁で出力：%5.2f\n", dd);
	printf("小数点以下２桁で出力	:%.2f\n", dd);

	return 0;
}