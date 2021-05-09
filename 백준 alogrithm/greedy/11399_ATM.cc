#include <iostream>
#include <algorithm>
using namespace std;
/*
줄을 서 있는 사람의 수 N과 각 사람이 돈을 인출하는데 걸리는 시간 Pi가 주어졌을 때, 
각 사람이 돈을 인출하는데 필요한 시간의 합의 최솟값을 구하는 프로그램을 작성하시오.
*/

int     main(void)
{
    int n;
    int p[1000];
    int total;
    int sum;
    
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> p[i];
    sort(p, p + n);
    // 오름차순으로 정렬
    total = 0;
    sum = 0;
    for (int i = 0; i < n; i++)
    {
        total += p[i]; // 각 사람이 돈을 인출하는 데 걸리는 시간
        sum += total;
    }
    cout << sum;
    // 각 사람이 돈을 인출하는 데 필요한 시간의 합의 최솟값
    return (0);
}