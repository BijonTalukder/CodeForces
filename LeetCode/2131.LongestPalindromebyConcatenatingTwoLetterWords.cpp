#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> words = {"io","io"};
    unordered_map<string, int> wordCount;
    int count =0;
    for (string word:words){
     string rev = word;
     swap(rev[0], rev[1]);
     if(wordCount.find(rev) != wordCount.end()){
         count += wordCount[rev];
     }
        wordCount[word]++;
    }
      cout << count * 2 << endl;
    // vector<string> s;
    // int x = 0;
    // int flag = 0;
    //     // Step 1: Build reversed versions
    //     for (int i = 0; i < words.size(); i++)
    // {
    //     string temp = words[i];
    //     reverse(temp.begin(), temp.end());
    //     s.push_back(temp);
    // }

    // // Step 2: Compare original words with reversed words
    // for (int i = 0; i < words.size(); i++)
    // {
    //     for (int j = 0; j < s.size(); j++)
    //     {
    //         if ( words[i] == s[j])
    //         {
    //             x++;
    //         }
    //         else
    //         {

    //             // cout<< s[i][0]<< " "<<s[j][0]<<endl;
    //             //                 cout<< s[i][1]<< " "<<s[j][1]<<endl;

    //             if (s[i][0] == s[i][1])
    //             {
    //                 // cout<<" g";
    //                 flag ++;
    //             }
    //         }
    //     }
    // }
    // cout<< flag << " " << x << endl;
    // if(flag ==0 && x==0)
    // if (flag == x*2 ||x==0)
    // {
    //     cout << 2 << endl;
    // }
    // else
    // {
    //     cout << x * 2 << endl;
    // }
    // return 0;
}
