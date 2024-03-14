#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

        struct stu
        {
        string name;
        int age;
            };

bool cmp(stu a,stu b)
{
    if(a.age != b.age)
        return a.age < b.age;
    else
        return a.name < b.name;
}//根据年龄排序

int main()
{
    stu s[3];
    for(int i=0;i<3;i++)
    {
        cin >> s[i].name >>s[i].age;
    }

    sort(s,s+3,cmp);

    for(int i=0;i<3;i++)
    {
        cout << s[i].name << " " <<s[i].age<<endl;
    }

    return 0;
}
