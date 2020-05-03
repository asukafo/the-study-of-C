#include <stdio.h>
#define N 10
//插入法排序 升序 

int main()
{
    int a[N], i, j, temp, min;
    //输入
    for(i=0; i<N; i++)
    {
        scanf("%d",&a[i]);
    }
    //插入法排序 升序
    for(i=1;i<N;i++)   //控制轮数N-1 注意i从1开始，假设第0个已经排好了
    { 
        temp=a[i];     //暂存
        for(j=i-1;j>=0 && temp<a[j];j--)  //比较查找
        {
            a[j+1]=a[j];
        }
        a[j+1]=temp;
    }
    //输出 
    for(i=0;i<N;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}
