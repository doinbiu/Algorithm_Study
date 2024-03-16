#include <iostream>
#include <algorithm>


using namespace std;

struct line{
    int t;//时间
    int p;//序号
};

bool cmp(line a,line b){
    return a.t < b.t;
};


int main() {

    int n ;//输入排队的人数
    double sum = 0;//时间总和

    cin >> n;
    line l[n];
    for(int i = 0;i < n;i++)//输入并保留队列信息
    {
        cin >> l[i].t;
        l[i].p  = i + 1;
    }

   sort(l,l+n,cmp);//排序


    for(int i = 0;i <n;i++)
    {
        cout << l[i].p<<" ";

    }
    cout << endl;

    for(int i = 0;i < n;i++)
    {
        sum += l[i].t*((n-1)-i);
    }

    printf("%.2f ",sum/n);

    return 0;
}
