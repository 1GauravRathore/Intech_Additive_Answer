#include <bits/stdc++.h>
using namespace std;
int trap(vector<int> &arr);
int main()
{
    vector<int> level = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << "tapped water of rainfall is -> " << trap(level);
    return 0;
}
int trap(vector<int> &arr)
{
    int n = arr.size();
    int left_max = 0, right_max = 0, left = 0, right = n - 1;
    int result = 0;
    
    while (left < right)
    {
        if (arr[left] <= arr[right])
        {
            if (arr[left] >= left_max)
                left_max = arr[left];
            else //( arr[i] < left_max)
                result += (left_max - arr[left]);
            left++;
        }
        else //(arr[left]> arr[right])
        {
            if (arr[right] >= right_max)
                right_max = arr[right];
            else // (arr[i] < right_max)
                result += (right_max - arr[right]);
            right--;
        }
    }
    return result;
}
