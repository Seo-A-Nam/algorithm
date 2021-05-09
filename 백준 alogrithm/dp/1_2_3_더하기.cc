#include <iostream>
using namespace std;
/* 
정수 n이 주어졌을 때, 
n을 1, 2, 3의 합으로 나타내는 방법의 수를 구하는 프로그램
*/

int     g_cnt;

void    run(int n)
{
    if (n == 0)
    {
        g_cnt++;
        // n을 나타내는 합의 수 1개 추가
        return ;
    }
    if (n >= 1)
        run(n - 1);
    if (n >= 2)
        run(n - 2);
    if (n >= 3)
        run(n - 3);
}

int     main(void)
{
    int T;
    int n;

    cin >> T;
    while (T--)
    {
        cin >> n;
        g_cnt = 0;
        run(n);
        cout << g_cnt << endl;
    }
    return (0);
}