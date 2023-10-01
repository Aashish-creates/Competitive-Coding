class Solution
{
public:
    int mostWordsFound(vector<string> &sentences)
    {
        int count = 1;
        int ab = 0;
        for (int i = 0; i < sentences.size(); i++)
        {
            count = 1;
            for (int j = 0; j < sentences[i].length(); j++)
            {
                if (sentences[i][j] == ' ')
                    count++;
            }
            ab = max(count, ab);
        }
        return ab;
    }
};