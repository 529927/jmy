#include<stdio.h>
struct date {
    int year;
    int month;
    int day;
};
struct flypart {
    char partname[50];
    struct date chuchangdate;
    double price;
    char partno[20];
};
struct flypart shuru() {
    int i;
    struct flypart fpsr;
    printf("请输入该零部件的名称：");
    scanf("%s", &fpsr.partname);
    printf("请输入该零部件的出厂时间:");
    scanf("%d-%d-%d", &fpsr.chuchangdate.year,
        &fpsr.chuchangdate.month,
        &fpsr.chuchangdate.day);
    printf("请输入该零部件的价格:");
    scanf("%lf", &fpsr.price);
    printf("请输入该零部件的编号:");
    scanf("%s", &fpsr.partno);
    return fpsr;
}
void function1(struct flypart* fpd) {
    printf("编号：%s；出厂日期：%d年%d月%d日；价格：%.2lf；编号：%s\n",
        fpd->partname,
        fpd->chuchangdate.year,
        fpd->chuchangdate.month,
        fpd->chuchangdate.day,
        fpd->price,
        fpd->partno);
}
void function2(struct flypart* fporder) {
    int i, j
    double priceor = fporder->price;
    struct flypart fpdemo1=*fporder;
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4-i; j++) {
            if (fporder[j].price < fporder[j+1].price) {
                fpdemo1 = fporder[j];
                fporder[j] = fporder[j + 1];
                fporder[j + 1] = fpdemo1;
            }
        }
    }
    printf("\n价格最高的零部件信息：\n");
    function1(fporder);
    printf("\n价格从高到低排序的各零部件信息：\n");
    for (i = 0; i < 5; i++) {
        function1(fporder + i);
    }
}
void function3(struct flypart* fpprice) {
    int i;
    printf("\n出厂时间大于5年的零部件，该部分零部件信息为：\n");
    for (i = 0; i < 5; i++) {
        if ((2022 - (fpprice+i)->chuchangdate.year) > 5) {
            (fpprice+i)->price /= 2.0;
            function1(fpprice + i);
        }
    }
}
int main() {
    int i;
    struct flypart fp[5];
    for (i = 0; i < 5; i++) {
        printf("\n请输入第%d个部分的零部件信息:\n", i + 1);
        fp[i] = shuru();
    }
    printf("\n所有零部件信息为：\n");
    for (i = 0; i < 5; i++) {
        function1(fp + i);
    }
    function2(fp);
    function3（fp）;


#include<stdio.h>
struct dat
{
    int y;
    int m;
    int d;
};
struct planepart
{
    char pn[50];
    struct dat brodat;
    double price;
    char no[20];
};
struct planepart input() 
{
    int i;
    struct planepart fpsr;
    printf("请输入该零部件的名称：");
    scanf("%s", &fpsr.pn);
    printf("请输入该零部件的出厂时间:");
    scanf("%d-%d-%d", &fpsr.brodat.y,&fpsr.brodat.m,&fpsr.brodat.d);
    printf("请输入该零部件的价格:");
    scanf("%lf", &fpsr.price);
    printf("请输入该零部件的编号:");
    scanf("%s", &fpsr.no);
    return fpsr;
}
void fun1(struct planepart* fpd) 
{
    printf("编号：%s；出厂日期：%d年%d月%d日；价格：%.2lf；编号：%s\n",
        fpd->pn,
        fpd->brodat.y,
        fpd->brodat.m,
        fpd->brodat.d,
        fpd->price,
        fpd->no);
}
void fun2(struct planepart* fporder) 
{
    int i,j;
    double priceor=fporder->price;
    struct planepart fpdemo1=*fporder;
    for (i=0;i<4;i++)
        for (j=0;j<4-i;j++) 
		{
            if (fporder[j].price<fporder[j+1].price) 
			{
                fpdemo1=fporder[j];
                fporder[j]=fporder[j+1];
                fporder[j+1]=fpdemo1;
            }
}
    printf("\n价格最高的零部件信息：\n");
    fun1(fporder);
    printf("\n价格从高到低排序的各零部件信息：\n");
     for (i=0;i<5;i++) 
	{
        fun1(fporder+i);
    }
}
void fun3(struct planepart* pprice) 
{
    int i;
    printf("\大于五年的零件信息：\n");
    for (i=0;i<5;i++) 
	{
        if ((2022-(pprice+i)->brodat.y)>5) 
		{
            (pprice+i)->price/=2.0;
            fun1(pprice+i);
        }
    }
}
int main()
{
    int i;
    struct planepart fp[5];
    for (i=0;i<5;i++) 
	{
        printf("\n请输入第%d个部分的零部件信息:\n",i+1);
        fp[i]=input();
    }
    printf("\n所有零部件信息为：\n");
    for (i=0;i<5;i++) 
	{
    fun1(fp+i);
    }
    fun2(fp);
    fun3(fp);
return 0;
}

asdsa 2021-11-8 864532 4521

asdad 1947-5-8 5421 79865

ydhfc 2011-5-7 9865 523

jhuy 2015-8-6 8456 56231

oiuyt 2022-6-1 5632 453