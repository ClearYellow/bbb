#include<stdio.h>
#include <math.h>
#include<stdlib.h>
void fuli(){
    double F,P,I;
    int M,N;
    system("cls");
    printf("\t��ӭ���븴���������\n");
    printf("��������뱾��:");
    scanf("%lf",&P);
    printf("������������:");
    scanf("%lf",&I);
    printf("�������������:");
    scanf("%d",&N);
    printf("�������긴������:");
    scanf("%d",&M);
    printf("����\t������\t��������\t�긴������\n");
    printf("%.2lf\t%.2lf\t%d\t%d",P,I,N,M);
    I=pow((1+I/M),M)-1;
    F=P*pow((1+I),N);
    printf("\n���������ֵ�����%.2lf\n",F);
}

void danli()
{
    
    double F,P,I;
    int N;
    system("cls");
    printf("\t��ӭ���뵥���������\n");
    printf("��������뱾��:");
    scanf("%lf",&P);
    printf("������������:");
    scanf("%lf",&I);
    printf("�������������:");
    scanf("%d",&N);
    printf("����\t������\t�������� \n");
    printf("%.2lf\t%.2lf\t%d ",P,I,N);
    F=P+P*I*N;
    printf("\n���������ֵ�����%.2lf\n",F);
}

void benjin()
{
    double F,P,I;
    int M,N;
    system("cls");
    printf("\t��ӭ���뱾��������\n");
    printf("��������ֵ:");
    scanf("%lf",&F);
    printf("������������:");
    scanf("%lf",&I);
    printf("�������������:");
    scanf("%d",&N);
    printf("�������긴������:");
    scanf("%d",&M);
    printf("��ֵ\t������\t��������\t�긴������\n");
    printf("%.2lf\t%.2lf\t%d\t%d",F,I,N,M);
    I=pow((1+I/M),M)-1;
    P=F/pow((1+I),N);
    printf("\n�����������%.2lf\n",P);
}

void nianfen()
{
    double F,P,I,N;
    int M;
    system("cls");
    printf("\t��ӭ����Ͷ�����޼������\n");
    printf("��������ֵ:");
    scanf("%lf",&F);
    printf("������������:");
    scanf("%lf",&I);
    printf("�����뱾��:");
    scanf("%lf",&P);
    printf("�������긴������:");
    scanf("%d",&M);
    printf("��ֵ\t������\t����\t�긴������\n");
    printf("%.2lf\t%.2lf\t%.2lf\t%d",F,I,P,M);
    I=pow((1+I/M),M)-1;
    N=log(F/P)/log(1+I);
    printf("\n���Ͷ�����޹��ƣ�%lf\n",N);
}


void lilv()
{
    double F,P,I;
    int M,N;
    system("cls");
    printf("\t��ӭ����Ͷ����Ŀ���ʼ������\n");
    printf("��������ֵ:");
    scanf("%lf",&F);
    printf("�����뱾��:");
    scanf("%lf",&P);
    printf("�������������:");
    scanf("%d",&N);
    printf("�������긴������:");
    scanf("%d",&M);
    printf("��ֵ\t����\t��������\t�긴������\n");
    printf("%.2lf\t%.2lf\t%d\t%d",F,P,N,M);
    I=pow(pow(F/P,1.0/N),1.0/M)*M-M;
    printf("\n���Ͷ����Ŀ���ʣ�%lf\n",I);
}
void dingqi(){
    double F,P,I;
    int N;
    system("cls");
    printf("\t��ӭ���붨��Ͷ�����\n");
    printf("������ÿ�ڶ�Ͷ��Ͷ��:");
    scanf("%lf",&P);
    printf("������������:");
    scanf("%lf",&I);
    printf("�����붨��Ͷ��:");
    scanf("%d",&N);
    printf("ÿ�ڶ�Ͷ��Ͷ��\t������\t����Ͷ��\t\n");
    printf("%.2lf\t\t%.2lf\t%d\t",P,I,N);
    F=P*(1+I)*(pow((1+I),N)-1)/I;
    printf("\n��������%.2lf\n",F);
}

void huankuan()
{
    double F,P,I;
    int N;
    system("cls");
    printf("\t��ӭ����ȶϢ�����\n");
    printf("�����뱾��:");
    scanf("%lf",&P);
    printf("�����뼾����:");
    scanf("%lf",&I);
    printf("����������:");
    scanf("%d",&N);
    printf("����\t������\t����\t\n");
    printf("%.2lf\t%.2lf\t%d\t",P,I,N);
    F=P*I*pow((1+I),N)/pow((1+I),N-1); 
    printf("\nÿ���Ļ���%.2lf\n",F);
}
main()
{
    int i;
AA:    printf("\t\n��ӭ���뵥�����������3.0\n");
    printf("\n1.��������");
    printf("\n2.��������");
    printf("\n3.�󱾽�");
    printf("\n4.��Ͷ������");
    printf("\n5.��Ͷ����Ŀ���ʹ���");
    printf("\n6.����Ͷ��");
	printf("\n7.�ȶ����");
    printf("\n�����ѡ����:");
    while(1){
        scanf("%d",&i);
        if(i>0&&i<8){           
        break;}
        system("cls");    
        printf("\t\t���������������\n");
    }
    switch(i)
    {
    case 1:
        danli();
        break;
    case 2:
        fuli();
        break;
    case 3:
        benjin();
        break;
    case 4:
        nianfen();
        break;
    case 5:
        lilv();
        break;
    case 6:
        dingqi();
        break;
    case 7:
        huankuan();
        break;
    default:
        goto AA;
    }
}