#include <stdio.h>
#define N 10
//二分法 查找

int main()
{
    int a[N], i, x, low=0, high=N-1, mid;
    //输入数组
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);  //如果输入的时候没有排好序，那么在要先排序
    }
    //输入要查找的数
    scanf("%d",&x);
    //二分法查找已经排好序的数组
    while(low<=high)
    {
        mid=(low+high)/2;
        if(x==a[mid])
        {
            break;
        }
        else if(x<a[mid])
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }   
    }
    //输出下标
    if(low<=high)
    {
        printf("%d is %d\n",x,mid);
    }
    else 
    {
        printf("Not Found\n");
    }

    return 0;
}