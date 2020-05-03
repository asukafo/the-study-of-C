#include <stdio.h>
#define N 10
//选择法排序 升序

int main()
{
    int a[N], i, j, temp, min;
    //输入
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    //选择排序 
    for(i=0;i<N-1;i++)    //控制比较轮数N-1
    {
        min = i;             //每轮i循环查找最值 把最值放在前面
        for(j=i+1;j<N;j++)
        {
            if(a[j]<a[min])     //如果想要降序的只需将 < 改成 >  
            {
                min = j;
            }
        }    
        if(min!=i)
        {
            temp = a[min];
            a[min]=a[i];
            a[i]=temp;
        }
    }
    //输出
    for(i=0;i<N;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    return 0;
}