#include <bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define input(i) \
    int i;       \
    cin >> i;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        string s = "1";
        stack<string> stk;
        stk.push(s);
        cout << s << endl;
        for (int i = 1; i < n; i++)
        {
            if (a[i] == 1)
            {
                string &temp = stk.top();
                string temp2=temp;
                temp2 = temp2 + ".1";
                cout << temp2 << endl;
                stk.push(temp2);
            }
            else
            {
                string &temp = stk.top();
                while ((temp[temp.size() - 1]-'0') != a[i] - 1)
                {
                    stk.pop();
                    temp = stk.top();
                }
                string &temp2 = stk.top();
                string temp3=temp2;
                stk.pop();
                temp3[temp3.size()-1]=a[i]+'0';
                stk.push(temp3);
                cout<<temp3<<endl;
            }
        }
    }
}