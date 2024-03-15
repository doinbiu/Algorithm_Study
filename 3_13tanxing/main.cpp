#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct jb{
    int m;//定义金币堆的重量
    int v;//定义金币堆的价值
    double va;//定义金币堆的价值
};

bool cmp(jb n,jb m)
{
    return n.va > m.va;//从大到小排序
}


int main() {

    int N,T;//N堆金币和背包的重量
    double result;
    cin >> N >>T;
    jb j[N];
    for(int i = 0;i<N;i++)//输入金币的信息，以及计算单枚金币的价值
    {
        cin >> j[i].m >>j[i].v;
        j[i].va = j[i].v / j[i].m;

    }

    sort(j,j+N,cmp);//根据大小从大到小排序

    for(int i = 0;i < N;i++)//遍历金币堆
    {
        if(j[i].m <= T)
        {
            T= T-j[i].m;
            result += j[i].v;
        }
        else {
            result += j[i].va * T;
            break;
        }
    }

    printf("%.2f\n",result);//输出结果

    return 0;
}
