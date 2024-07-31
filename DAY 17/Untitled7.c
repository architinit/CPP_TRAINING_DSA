class Solution {
public:
    string sortSentence(std::string s) {
        vector<std::pair<int, std::string>> words;
        string word;
        for (char c : s) {
            if (c == ' ') {
                if (!word.empty()) {
                    int pos = word.back() - '0';
                    word.pop_back();
                    words.push_back({pos, word});
                    word.clear();
                }
            } else {
                word += c;
            }
        }
        if (!word.empty()) {
            int pos = word.back() - '0';
            word.pop_back();
            words.push_back({pos, word});
        }
        sort(words.begin(), words.end());
        string result;
        for (const auto& pair : words) {
            if (!result.empty()) {
                result += " ";
            }
            result += pair.second;
        }
        return result;
    }
};
