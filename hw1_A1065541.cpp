#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int a=3;
	float b=5.5;

	printf("a+b=%d\n",a+b);//其值為8.5，無法以十進位整數方式輸出
	printf("a-b=%d\n",a-b);//其值為-2.5，無法以十進位整數方式輸出
	printf("a*b=%d\n",a*b);//其值為16.5，無法以十進位整數方式輸出
	printf("a/b=%d\n\n",a/b);/*資料型態儲存空間不足，發生溢位。
							 %d遇到小數形式時，會將數字先以double方式傳喚，但double形式的 資訊儲存量大於flaot跟int，
							 故無法正常存取數字，發生溢位。
                             溢位名詞解釋：https://baike.baidu.com/item/%E6%BA%A2%E4%BD%8D
							 溢位發生原因：https://read01.com/zh-tw/nx8y4o.html#.Wc-RJ1uCztQ
							*/
	printf("a+b=%f\n",a+b);//運算後的值符合浮點數型式，故正常輸出至小數點後六位
	printf("a-b=%f\n",a-b);//運算後的值符合浮點數型式，故正常輸出至小數點後六位
	printf("a*b=%f\n",a*b);//運算後的值符合浮點數型式，故正常輸出至小數點後六位
	printf("a/b=%f\n\n",a/b);//運算後的值符合浮點數型式，故正常輸出至小數點後六位

	system("PAUSE");
	return 0;
}
