#include <float.h>
#include <limits.h>
#include <stdio.h>

int main(void)
{
    printf("double型の最大値:%lf\n", DBL_MAX);
    printf("double型の最小値:%lf\n",DBL_MIN);
    printf("double型の精度:%lf\n",DBL_DIG);
    printf("float型の最大値:%f\n",FLT_MAX);
    printf("float型の最小値:%f\n",FLT_MIN);
    printf("float型の精度:%f\n",FLT_DIG);
    printf("long long int型の最大値:%llf\n",LLONG_MAX);
    printf("long lomg int型の最小値:%llf\n",LLONG_MIN);

    return 0;
}