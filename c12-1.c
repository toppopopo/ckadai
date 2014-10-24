/*----------------------------------------------*/
/*ファイル名：ｃ12-1.c				*/
/*作　成　日：2014/06/16			*/
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

	signed short int ssi;
	unsigned short int usi;
	signed int si;
	unsigned int ui;
	signed long int sli;
	unsigned long int uli;
	long double ld;


	//入力
	printf("符号ありshort型へ入力：");
	scanf("%hd", &ssi);
	printf("符号なしshort型へ入力：");
	scanf("%hu", &usi);
	printf("符号ありint型へ入力：");
	scanf("%d", &si);
	printf("符号なしint型へ入力：");
	scanf("%u", &ui);
	printf("符号ありlong型へ入力：");
	scanf("%ld", &sli);
	printf("符号なしlong型へ入力：");
	scanf("%lu", &uli);
	printf("long double型へ入力：");
	scanf("%Lf", &ld);

	//出力
	printf("符号ありshort型の出力：%hd\n", ssi);
	printf("符号なしshort型の出力：%hd\n", usi);
	printf("符号ありint型の出力  ：%d\n", si);
	printf("符号なしint型の出力  ：%d\n", ui);
	printf("符号ありlong型の出力 ：%ld\n",sli);
	printf("符号なしlong型の出力  ：%lu\n", uli);
	printf("long double型の出力：%Lf\n", ld);

	return 0;
}
