/*----------------------------------------------*/
/*ファイル名：ｃkadai24.c			*/
/*作　成　日：2014/06/24			*/
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

	long d[7];
	int a, b, c, d, e, f, g;
	


	a = sizeof (char) ;
	("char型は「%dバイト」です\n", a);

	b = sizeof (short) ;
	("shhort型は「%dバイト」です\n", b);

	c = sizeof (int) ;
	("int型は「%dバイト」です\n", c);

	d = sizeof (long) ;
	("long型は「%dバイト」です\n", d);

	e = sizeof (float) ;
	("float型は「%dバイト」です\n", e);

	f = sizeof (double) ;
	("double型は「%dバイト」です\n", f);

	g = sizeof (long double) ;
	("long double型は「%dバイト」です\n", g);


	return 0;
}