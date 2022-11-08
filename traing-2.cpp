#include<iostream>
#include<stdlib.h> 
#include<stdio.h>

using namespace std;

typedef struct
{
    double num1;
    double num2;
}Airth;

double Rand(int MaxNum)
{
    return  (double)(rand() % (MaxNum * 10)) / 10;
}

void AutoGenInFile(int MaxNum, char Symbol, int n, char panduan)
{
    FILE* fp;
    Airth a[1000];
    if ((fp = fopen("result.txt", "w")) == NULL)
    {
        cout << "打开文件失败";
        exit(0);
    }

    if (panduan == 'y')
    {
        for (int i = 0; i < n; i++)
        {
            a[i].num1 = Rand(MaxNum);
            a[i].num2 = Rand(MaxNum);
            printf("%-5.1f%c %-4.1f =\n", a[i].num1, Symbol, a[i].num2);
            fprintf(fp, "%-5.1f%c %-4.1f =\n", a[i].num1, Symbol, a[i].num2);
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            a[i].num1 = Rand(MaxNum);
            a[i].num2 = Rand(MaxNum);
            printf("%-5.1f%c %-4.1f =\n", a[i].num1, Symbol, a[i].num2);
            fprintf(fp, "%-5.f%c %-4.f =\n", a[i].num1, Symbol, a[i].num2);
        }
    }
    cout << "已将结果写入result.txt";
    fclose(fp);
}

int main()
{
    int MaxNum;
    char Symbol;
    int n;
    char panduan;
    cout << "请输入生成数量：";
    cin >> n;
    cout << endl;
    cout << "选择加减乘除：";
    cin >> Symbol;
    cout << endl;
    cout << "设置最大数：";
    cin >> MaxNum;
    cout << endl;
    cout << "是否有小数y/n?:";
    cin >> panduan;
    cout << endl;
    AutoGenInFile(MaxNum, Symbol, n, panduan);
    return 0;
}