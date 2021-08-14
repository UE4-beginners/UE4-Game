#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // Kadanes's Algorithm for sub array problems

    vector<int> arr = {-2, 2, 4, -4, -1, 10, -3};

    int left = 0, right = 0, Tsum = arr[0], Msum = 0;
    for (int i = 1; i < arr.size(); i++)
    {
        Tsum += arr[i];
        if (Tsum < arr[i])
        {
            Tsum = arr[i];
            left = i;
        }
        if (Tsum > Msum)
        {
            Msum = Tsum;
            right = i;
        }
    }
    cout << "Maximum subarray sum is: " << Msum << endl
         << "From " << endl;

    for (int i = left; i <= right; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{

    solve();
    return 0;
}
