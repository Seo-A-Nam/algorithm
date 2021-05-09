#include <iostream>
#include <algorithm>
using namespace std;

/*
정수 X에 사용할 수 있는 연산은 다음과 같이 세 가지 이다.

X가 3으로 나누어 떨어지면, 3으로 나눈다.
X가 2로 나누어 떨어지면, 2로 나눈다.
1을 뺀다.

정수 N이 주어졌을 때, 
위와 같은 연산 세 개를 적절히 사용해서 1을 만들려고 한다. 연산을 사용하는 횟수의 최솟값을 출력하시오
*/

int     dp[1000001]; // 최소 연산 횟수

int     main(void)
{
    int X;
    int q;

    cin >> X;
    for (int i = 2; i <= X; i++)
    {
        dp[i] = dp[i - 1] + 1;
        if (i % 2 == 0)
            dp[i] = min(dp[i], dp[i / 2] + 1);
        if (i % 3 == 0)
            dp[i] = min(dp[i], dp[i / 3] + 1);
    }
    cout << dp[X] << endl;
    return (0);
}

// dp[n] = min(dp[n-1] + 1, dp[n/2] + 1, dp[n/3] + 1)