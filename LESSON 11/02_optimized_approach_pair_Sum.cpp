#include <iostream>
#include <vector>
using namespace std;

vector<int> pair_sum(vector<int> num, int target)  // O(n)
{
    vector<int> ans;
    int n = num.size();

    int i = 0, j = n - 1;

    while (i < j)
    {
        int Pair_sum = num[i] + num[j];
        if (Pair_sum > target)
        {
            j--;
        }
        else if (Pair_sum < target)
        {
            i++;
        }
        else
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
}

int main()
{
    vector<int> num = {2, 7, 11, 15};
    int target = 26;
    vector<int> ans = pair_sum(num, target);
    cout << ans[0] << "," << ans[1] << endl;
    return 0;
}
// nothing