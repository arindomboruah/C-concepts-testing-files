// #include<stdio.h>
// int main()
// {
//     for(int i=1; i<=10; i++)
//     {
//         if(i==6)
//         {
//             continue;
//         }
//         printf("%d\n",i);
//     }
//     return 0;
// }
// 
// 
// 
#include<stdio.h>
int main()
{
    int sum=0;
    for(int i=5; i<=50; i++)
    {
        sum=sum+i;
    }
    printf("The sum is:%d",sum);
    return 0;
}