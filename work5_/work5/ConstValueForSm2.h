#ifndef CONSTVALUEFORSM2_H
#define CONSTVALUEFORSM2_H

#include"String.h"
#include"miracl.h"
#include"mirdef.h"
#include"Sm3.h"
#include"EpointOperation.h"

//�����ⲿ����
extern miracl *mip;
extern int Max;
extern big k;						//�����k
extern big PBx;						//��Կx
extern big PBy;						//��Կy
extern big DB;						//˽Կ
extern char* p;						//��������
extern char* a;						//��������
extern char* b;						//��������
extern char* n;						//��������
extern char* Gx;					//��������
extern char* Gy;					//��������
extern int lengthC1x;				//C1��x����
extern int lengthC1y;				//C1��y����
extern int v;					//hashֵ�õ���ʮ�����ƴ�����
extern String fileData;				//�����ļ�����
extern char* ccode;					//���ܵõ�������
extern char *inputFileName;			//�����ļ���

//���ܺ�������
big HexCharsToBig(char*);
big GetBigRandom(big , big);		// ��������� a<= result <=b
void InitRandomK();					//�����������K
void CalculateKeys();				//������Կ��˽Կ
int VerifyKeys();					//��֤��Կ��˽Կ
epoint *CalculateG();				//�Զ������G
epoint *CalculatePB();				//��ԿPB(PBx,PBy)
String* EpointToBytes(epoint *);	//δѹ����ʽ����ͷ��PC=04
void ReadInputFile();				//��ȡ�ļ�����
void Encryption();					//����
epoint *CalculatePoint1();			//����(x1,y1)
epoint *CalculatePoint2();			//����(x2,y2)
String *CalculateC1();				//����C1
String *CalculateC2();				//����C2
char* CalculateC3();				//����C3
big KDF(epoint*,int);				//����t

void Decryption();					//����
char* GetPartString(char*,int,int);	//��ȡ�ַ���
//epoint *CalculateS();

#endif