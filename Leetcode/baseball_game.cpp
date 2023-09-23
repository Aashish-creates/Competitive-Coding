class Solution
{
public:
    int calPoints(vector<string> &operations)
    {
        stack<int> abc;
        for (auto it : operations)
        {
            if (it == "+")
            {
                int a = abc.top();
                abc.pop();
                int b = abc.top();
                abc.push(a);
                abc.push(a + b);
            }
            else if (it == "D")
            {
                int c = abc.top();
                abc.push(c * 2);
            }
            else if (it == "C")
                abc.pop();
            else
                abc.push(stoi(it));
        }
        int sum = 0;
        while (abc.size() != 0)
        {
            sum += abc.top();
            abc.pop();
        }
        return sum;
    }
};