#include<stdio.h>
#include <math.h>
#include<stdlib.h>
void fuli(){
    double F,P,I;
    int M,N;
    system("cls");
    printf("\t欢迎进入复利计算软件\n");
    printf("请输入存入本金:");
    scanf("%lf",&P);
    printf("请输入年利率:");
    scanf("%lf",&I);
    printf("请输入存入年限:");
    scanf("%d",&N);
    printf("请输入年复利次数:");
    scanf("%d",&M);
    printf("本金\t年利率\t存入年限\t年复利次数\n");
    printf("%.2lf\t%.2lf\t%d\t%d",P,I,N,M);
    I=pow((1+I/M),M)-1;
    F=P*pow((1+I),N);
    printf("\n输出复利终值结果：%.2lf\n",F);
}

void danli()
{
    
    double F,P,I;
    int N;
    system("cls");
    printf("\t欢迎进入单利计算软件\n");
    printf("请输入存入本金:");
    scanf("%lf",&P);
    printf("请输入年利率:");
    scanf("%lf",&I);
    printf("请输入存入年限:");
    scanf("%d",&N);
    printf("本金\t年利率\t存入年限 \n");
    printf("%.2lf\t%.2lf\t%d ",P,I,N);
    F=P+P*I*N;
    printf("\n输出复利终值结果：%.2lf\n",F);
}

void benjin()
{
    double F,P,I;
    int M,N;
    system("cls");
    printf("\t欢迎进入本金计算软件\n");
    printf("请输入终值:");
    scanf("%lf",&F);
    printf("请输入年利率:");
    scanf("%lf",&I);
    printf("请输入存入年限:");
    scanf("%d",&N);
    printf("请输入年复利次数:");
    scanf("%d",&M);
    printf("终值\t年利率\t存入年限\t年复利次数\n");
    printf("%.2lf\t%.2lf\t%d\t%d",F,I,N,M);
    I=pow((1+I/M),M)-1;
    P=F/pow((1+I),N);
    printf("\n输出本金结果：%.2lf\n",P);
}

void nianfen()
{
    double F,P,I,N;
    int M;
    system("cls");
    printf("\t欢迎进入投资年限计算软件\n");
    printf("请输入终值:");
    scanf("%lf",&F);
    printf("请输入年利率:");
    scanf("%lf",&I);
    printf("请输入本金:");
    scanf("%lf",&P);
    printf("请输入年复利次数:");
    scanf("%d",&M);
    printf("终值\t年利率\t本金\t年复利次数\n");
    printf("%.2lf\t%.2lf\t%.2lf\t%d",F,I,P,M);
    I=pow((1+I/M),M)-1;
    N=log(F/P)/log(1+I);
    printf("\n输出投资年限估计：%lf\n",N);
}


void lilv()
{
    double F,P,I;
    int M,N;
    system("cls");
    printf("\t欢迎进入投资项目利率计算软件\n");
    printf("请输入终值:");
    scanf("%lf",&F);
    printf("请输入本金:");
    scanf("%lf",&P);
    printf("请输入存入年限:");
    scanf("%d",&N);
    printf("请输入年复利次数:");
    scanf("%d",&M);
    printf("终值\t本金\t存入年限\t年复利次数\n");
    printf("%.2lf\t%.2lf\t%d\t%d",F,P,N,M);
    I=pow(pow(F/P,1.0/N),1.0/M)*M-M;
    printf("\n输出投资项目利率：%lf\n",I);
}
void dingqi(){
    double F,P,I;
    int N;
    system("cls");
    printf("\t欢迎进入定期投资软件\n");
    printf("请输入年投入:");
    scanf("%lf",&P);
    printf("请输入年复合增长率:");
    scanf("%lf",&I);
    printf("请输入持续投入年数:");
    scanf("%d",&N);
    printf("年投入\t年复合增长率\t持续投入年数\t\n");
    printf("%.2lf\t%.2lf\t%d\t",P,I,N);
    F=P*(1+I)*pow((1+I),N-1)/I;
    printf("\n输出结果：%.2lf\n",F);
}
main()
{
    int i;
    printf("\t欢迎进入单复利计算软件3.0\n");
    printf("\n1.单利计算");
    printf("\n2.复利计算");
    printf("\n3.求本金");
    printf("\n4.求投资年限");
    printf("\n5.求投资项目利率估计");
	printf("\n6.定期投资");
    printf("\n请输出选择项:");
    scanf("%d",&i);
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
    default:
        return 0;
    }
}