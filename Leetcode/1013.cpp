class Solution
{
public:
    bool canThreePartsEqualSum(vector<int> &arr)
    {
        int n = arr.size();
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }
        if (sum % 3 != 0)
            return false;
        int sum2 = 0;
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            sum2 += arr[i];
            if (sum2 == sum / 3)
            {
                c++;
                sum2 = 0;
            }
        }

        if (c >= 3)
            return true;
        return false;
    }
};