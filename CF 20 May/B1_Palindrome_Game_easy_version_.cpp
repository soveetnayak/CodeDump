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
        string s;
        cin >> s;
        int c;
        int count_0 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '0')
                count_0++;
        }
        int alice = 0;
        int bob = 0;
        bool flag = 0;
        c = count_0;
        if (count_0 % 2 == 1)
        {
            count_0--;
            flag = 1;
        }

        while (count_0 != 0)
        {
            if (flag == 0)
            {
                alice += 2;
                count_0 -= 2;
                flag = 1;
            }
            else
            {
                bob += 2;
                count_0 -= 2;
                flag = 0;
            }
        }
        if (c % 2 == 0)
        {
            if (alice > bob)
                cout << "BOB" << endl;
            else if (bob > alice)
                cout << "ALICE" << endl;
            else if (bob == alice)
                cout << "BOB" << endl;
        }
        else if (c == 1)
        {
            cout<<"BOB"<<endl;
        }
        else
        {
            if (alice > bob)
                cout << "BOB" << endl;
            else if (bob > alice)
                cout << "ALICE" << endl;
            else if (bob == alice)
                cout << "ALICE" << endl;
        }
    }
}