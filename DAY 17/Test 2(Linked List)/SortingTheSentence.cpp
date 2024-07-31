class Solution {
public:
    string sortSentence(string s) {
        string word = "";
        string s2 = "";
        map<int, string> test;
        for(int i = 0 ; i < s.length();i++) {
            if(s[i] != 32 ) {
                if (isdigit(s[i])){
                test[s[i]-48] = word;
                word = "";
                continue;
                }
                word += s[i];
            }
        }
        for (auto i : test) {
            s2 += i.second+ " ";
        }
        s2.pop_back();
        return s2;
    }
};
