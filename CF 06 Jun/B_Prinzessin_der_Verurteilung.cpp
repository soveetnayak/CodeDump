#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define input(i) \
    int i;       \
    cin >> i;
int substring(string s1, string s2)
{
    int M = s1.size();
    int N = s2.size();

    for (int i = 0; i <= N - M; i++)
    {
        int j;

        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j])
                break;

        if (j == M)
            return 1;
    }

    return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        char c = 'a'-1;
        string test = "a";
        int flag = 0;
        int print=0;
        string ans;
        for (int i = 0; i < 26; i++)
        {
            c=++c;
            flag=0;
            for (int j = 0; j < s.size(); j++)
            {
                if(s[j]==c)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                cout<<c<<endl;
                print=1;
                break;
            }
        }
        if(print==1)
        continue;
        test="``";
        flag=0;
        print=0;
        for (int i = 0; i < 26; i++)
        {
            test[0]++;
            for (int j = 0; j < 26; j++)
            {
                test[1]++;
                if(substring(test,s)==0)
                {
                    cout<<test<<endl;
                    print=1;
                    break;
                }
            }
            if(print==1)
            {
                break;
            }
        }
        
    }
}