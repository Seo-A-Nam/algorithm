#include <iostream>
using namespace std;
/* 
설탕을 정확하게 N킬로그램 배달해야 할 때, 배달하는 봉지의 최소 개수를 출력한다. 
만약, 정확하게 N킬로그램을 만들 수 없다면 -1을 출력한다.
봉지는 3kg 짜리와 5kg 짜리가 있음
*/

int    get_pack_nb(int n, int count)
{
    if (n == 0)
        return (count); // 지금까지 담은 봉투의 개수
    if (n < 3)
        return (21e8);
    // 5와 3짜리 봉투로 딱 담기지 않고 남는 다는 뜻, 즉 나중에 -1 출력 처리해줘야할 것
    if (n % 5 == 0)
        return (get_pack_nb(0, count + n / 5));
    // 전체 무게가 5로 나누어 떨어지는 경우는 무조건 먼저 처리해줘야함 (시간단축, 봉투 개수 단축)
    return (get_pack_nb(n - 3, count + 1)); 
    //5로 나누어 떨어지지 않으면 3만큼 봉투에 담아줌
}

int     main(void)
{
    int N;
    int res;

    cin>>N;
    if (N >= 3 && N <= 5000)
    {
        if (N % 5 == 0)
            cout << N / 5;
        else
        {
            res = get_pack_nb(N, 0);
            // 5와 3짜리 봉투에 담긴 설탕이 총 몇 봉투인가
            if (res == 21e8)
                cout << -1;
            // 5와 3짜리 봉투에 딱 맞춰 담기지 않고 남는 분량이면, -1를 출력
            else
                cout << res;
        }
    }
    return (0);
}