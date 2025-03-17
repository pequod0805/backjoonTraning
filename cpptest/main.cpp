// #include <bits/stdc++.h>
// using namespace std;

// const int MX = 1000005;
// char dat[MX];
// int pos = 0;

// char extop()
// {
//     if (pos != 0)
//     {
//         return dat[pos - 1];
//     }
//     else
//     {
//         return -1;
//     }
// }
// void expush(char x)
// {
//     dat[pos] = x;
//     pos++;
// }
// void expop()
// {
//     if (pos != 0)
//     {
//         pos--;
//     }
//     else
//     {
//         extop();
//     }
// }
// int exsize()
// {
//     return pos;
// }
// int exempty()
// {
//     if (extop() == -1)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }

// void result()
// {
//     for (int n = 0; n < exsize(); n++)
//     {
//         cout << dat[n] << "\n";
//     }
// }

// int main()
// {
//     ios::sync_with_stdio(0);
//     cin.tie(0);

//     int k;
//     cin >> k;

//     stack<int> S;

//     int a;
//     cin >> a;

//     // cout << "start\n";
//     // cout << "a : " << a << "\n";

//     for (int i = 1; i <= a; i++)
//     {
//         S.push(i);
//         expush('+');
//     }

//     int prevtop = S.top();

//     for (int i = 1; i < k; i++)
//     {
//         if (a < S.top())
//         {
//             cout << "NO\n";
//             break;
//         }
//         else if (a > S.top())
//         {
//             // cout << "was it available?\n";
//             for (int j = prevtop + 1; j <= a; j++)
//             {
//                 // cout << "(int j = prevtop + 1; j <= a; j++)\n";
//                 // cout << "(a > S.top()) \n";
//                 // cout << "a, S.top() = " << a << ", " << S.top() << '\n';
//                 S.push(j);
//                 expush('+');
//             }
//             prevtop = a;
//         }
//         else
//         {
//             S.pop();
//             expush('-');
//             // cout << "a, S.top() = " << a << ", " << S.top() << '\n';
//         }
//         cin >> a;
//     }
//     result();
// }

#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
char dat[MX];
int pos = 0;

void expush(char x) {
    dat[pos++] = x;
}

void result() {
    for (int i = 0; i < pos; i++) {
        cout << dat[i] << "\n";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int k;
    cin >> k;

    stack<int> S;
    int num = 1;

    for (int i = 0; i < k; i++) {
        int a;
        cin >> a;

        while (num <= a) {
            S.push(num++);
            expush('+');
        }

        if (!S.empty() && S.top() == a) {
            S.pop();
            expush('-');
        } else {
            cout << "NO\n";
            return 0;
        }
    }

    result();
    return 0;
}
