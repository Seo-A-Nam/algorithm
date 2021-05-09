#include <iostream>
using namespace std;

/*
준규가 가지고 있는 동전은 총 N종류이고, 각각의 동전을 매우 많이 가지고 있다.
동전을 적절히 사용해서 그 가치의 합을 K로 만들려고 한다.
이때 필요한 동전 개수의 최솟값을 구하는 프로그램을 작성하시오.
*/

int     main(void)
{
    int n;
    int k;
    int i;
    int coin;
    int A[10];

    cin >> n >> k;
    for (int i = 0; i < n; i++)
        cin >> A[i]; // 참고: 동전의 가치는 오름차순으로 주어짐
    coin = 0;
    i = 0;
    while (i < n)
    {
        if (k == 0)
            break ;
        while (k >= A[n - 1 - i])
        {
            coin++;
            k -= A[n - 1 - i];
        }
        // 현재 가치에서 뺄 수 있는 가장 큰 동전의 값을 계속 빼줌
        if (k < A[n - 1 - i])
            i++;
        // 현재 가치에서 뺄 수 있는 가장 큰 동전의 값보다 값이 작아지면, 
        // 다음에 뺄 동전의 가치를 한 단계 낮춤
    }
    cout << coin;
    return (0);
}