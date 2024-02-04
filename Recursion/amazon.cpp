#include <iostream>
#include <climits>
using namespace std;

int path(int x, int y, int s, int e, int c, int cnt)
{
    if (s > x || e > y)
        return INT_MAX;

    if (s == x && e == y)
    {
        return cnt;
    }

    int right = path(x, y, s, e + c, c + 1, cnt + 1);
    int left = path(x, y, s + c, e, c + 1, cnt + 1);

    // case for both right and left are INT_MAX ,when one INT_MAx and one -1
    if (right == INT_MAX && left == INT_MAX || right == INT_MAX && left == -1 || right == -1 && left == INT_MAX)
    {
        return -1;
    }

    int mini = min(left, right);
    int maxi = max(left, right);

    // case for -1 and some value
    else if (mini == -1 || maxi != INT_MAX)
    {
        return maxi;
    }
    else
    {
        if (mini != -1 && maxi == INT_MAX)
            return mini;
    }
}

int main()
{
    int x, y, s, e;
    x =, y = 1, s = 0, e = 0;
    int c = 1;
    int cnt = 0;
    cout << path(x, y, s, e, c, cnt);
}
