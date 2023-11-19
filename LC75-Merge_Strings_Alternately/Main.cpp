#include <string>
#include <iostream>
using namespace std;
class Solution {

public:

    string mergeAlternately(string word1, string word2)
    {
        int x = 0, y = 0;
        string res = "";

        while (x < word1.size() && y < word2.size())
        {
            res += word1[x++];
            res += word2[y++];
        }
        while (x < word1.size())
        {
            res += word1[x++];
        }
        while (y < word2.size())
        {
            res += word2[y++];
        }

        return res;
    }

};

int main() {
    Solution solution;

    string word1 = "abc";
    string word2 = "pqr";

    string result = solution.mergeAlternately(word1, word2);

    cout << "Merged String: " << result << endl;

    return 0;
}