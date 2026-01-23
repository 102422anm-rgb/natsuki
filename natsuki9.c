#include <stdio.h>
//#include"suugaku.h"
void solveQuadratic(int a,int b,int c)
{
    double d=(double)b*b-4.0*a*c;
    int D
    D=b*b-4.0*a*c;
    printf("判別式D=%.2f\n",d);
    if(d>0)
    {
        int quadratic x1=(-b+sqrt(d))/(2.0*a);
        int quadratic x2=(-b-sqrt(d))2.0*a);
        printf("２つの実数解があります:x1=%.2f,x2=%.2f\n"x1,x2);
    }
    else if(d==0)
    {
         int quadratic x=-b/(2.0*a);
         printf("重解があります:x=%.2f\n",x);
    }
    else
    {
        printf("実数解がありません。\n");
    }
}
int main()
{
    int a,b,c;
    printf("整数a,b,cを入力してください(aは0以外）:");
    scanf("%d %d %d,&a,&b,&c);
    if(a==0)
    {
        printf("エラー:aが0だと二次方程式になりません。再入力してください。\n");
    }
    while(a==0);
    {
        olveQuadrantic(a,b,c);
    }
    
}

    return 0;
}