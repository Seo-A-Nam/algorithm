#include <iostream>
#include <string>
using namespace std;

int     main(void)
{
    int     t;
    int     n;
    int     tmp;
    string  s;
    
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> s;
        cout << "Case #" << i + 1 << ":";
        tmp = 1;
        for (int j = 0; j < n; j++)
        {
            if (j > 0 && s[j - 1] < s[j])
                tmp++;
            // check if the substring is increasing or not
            else if (j > 0 && s[j - 1] >= s[j])
                tmp = 1;
            // if it doesn't keeps increasing, then reset the increasing num to 1
            cout << " " << tmp;
        }
        cout << endl;
    }
    return (0);
}