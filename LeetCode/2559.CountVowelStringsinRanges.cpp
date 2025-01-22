#include <bits/stdc++.h>
using namespace std;
bool isVowel(char c)
{
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}
int main()
{

    vector<string> words = {"aba", "bcd", "ece", "aa", "e"};

    vector<vector<int>> queries = {{0, 2}, {1, 4}, {1, 1}};
    vector<int> result;

    int ar[words.size()];

    for(int i=0;i<words.size();i++)
    {
       if(isVowel(words[i][0]) && isVowel(words[i][words[i].size()-1]))
       {
           ar[i]=1;
       }
       else
       {
           ar[i]=0;
       }
    }
    for (int i = 0; i < queries.size(); i++)
    {
        int l = queries[i][0];
        int r = queries[i][1];

        int count = 0;

        for(int j=l;j<=r;j++){
            count+=ar[j];
        }

        //its give time limit exceeded
        // for (int j = l; j <= r; j++)
        // {
        //     if (isVowel(words[j][0]) && isVowel(words[j][words[j].size() - 1]))
        //     {
        //         count++;
        //     }
        // }
        result.push_back(count);
    }
    // cout << "------------------------" << endl;
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }

    return 0;
}
