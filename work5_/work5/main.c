#define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<Windows.h>
#include"miracl.h"
#include"mirdef.h"
#include"ConstValueForSm2.h"
#include"String.h"

int Max =1200;
miracl *mip;
big k;								//�����
big PBx;							//��Կx
big PBy;							//��Կy
big DB;								//˽Կ
String fileData;					//�����ļ�����
int lengthC1x;						//C1��x����
int lengthC1y;						//C1��y����
int v = 64;							//hashֵ�õ���ʮ�����ƴ�����
char* ccode;						//���ܵõ�������
char *inputFileName = "input.txt";	//�����ļ���

int main()
{
	mip= mirsys(500, Max);
	ecurve_init(HexCharsToBig(a), HexCharsToBig(b), HexCharsToBig(p), MR_PROJECTIVE);	//��ʼ����Բ�����ڲ�����
	Encryption();
	//Sleep(100);
	Decryption();
	//free(NULL);
	system("pause");
	return 0;
}