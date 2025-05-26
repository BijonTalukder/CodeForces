#include<bits/stdc++.h>
using namespace std;
int main()
{

    vector<string> words ={"leet","code"};
    char ch = 'e';
    vector<int> result;

    for(int i=0;i<words.size();i++)
    {

        for(int j=0;j<words[i].size();j++){
            if(words[i][j] == ch)
            {
                result.push_back(i);
                break; // Break to avoid adding the same word multiple times
            }
        }
   
    }


    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;  // Output the indices of words containing the character
        /* code */
    }
    
}       