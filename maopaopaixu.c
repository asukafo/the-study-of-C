#include <stdio.h>
#define N 10
//冒泡排序 升序

int main()
{
    int a[N], i, j, temp;
    //输入数据
    for(i=0;i<N;i++)           
    {
        scanf("%d",&a[i]);     // a+i
    }
    //排序
    for(i=0;i<N-1;i++)   //控制轮数N-1
    {
        for(j=0;j<N-1-i;j++) //控制比较次数 从数组第一个开始到N-1-i个
        {
            if(a[j]>a[j+1])  //（逆序交换）大的放后面    （如果想要降序的话 那么把>改成<）
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
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