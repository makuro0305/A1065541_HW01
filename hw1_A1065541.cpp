#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int a=3;
	float b=5.5;

	printf("a+b=%d\n",a+b);//��Ȭ�8.5�A�L�k�H�Q�i���Ƥ覡��X
	printf("a-b=%d\n",a-b);//��Ȭ�-2.5�A�L�k�H�Q�i���Ƥ覡��X
	printf("a*b=%d\n",a*b);//��Ȭ�16.5�A�L�k�H�Q�i���Ƥ覡��X
	printf("a/b=%d\n\n",a/b);/*��ƫ��A�x�s�Ŷ������A�o�ͷ���C
							 %d�J��p�ƧΦ��ɡA�|�N�Ʀr���Hdouble�覡�ǳ�A��double�Φ��� ��T�x�s�q�j��flaot��int�A
							 �G�L�k���`�s���Ʀr�A�o�ͷ���C
                             ����W�������Ghttps://baike.baidu.com/item/%E6%BA%A2%E4%BD%8D
							 ����o�ͭ�]�Ghttps://read01.com/zh-tw/nx8y4o.html#.Wc-RJ1uCztQ
							*/
	printf("a+b=%f\n",a+b);//�B��᪺�ȲŦX�B�I�ƫ����A�G���`��X�ܤp���I�᤻��
	printf("a-b=%f\n",a-b);//�B��᪺�ȲŦX�B�I�ƫ����A�G���`��X�ܤp���I�᤻��
	printf("a*b=%f\n",a*b);//�B��᪺�ȲŦX�B�I�ƫ����A�G���`��X�ܤp���I�᤻��
	printf("a/b=%f\n\n",a/b);//�B��᪺�ȲŦX�B�I�ƫ����A�G���`��X�ܤp���I�᤻��

	system("PAUSE");
	return 0;
}
