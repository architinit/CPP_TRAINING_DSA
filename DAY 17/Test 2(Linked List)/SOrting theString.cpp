class Solution {
public:
    string sortSentence(string s) {
        string arr[9];
        int maxIndex = 0;
        string word;
        int length = s.size();

        for (int i = 0; i < length; ++i) {
            if (isdigit(s[i])) {
                int index = s[i] - '1';
                arr[index] = word;
                word = "";
                maxIndex = max(maxIndex, index + 1);
                ++i;
            } else if (s[i] == ' ') {
                continue;
            } else {
                word += s[i];
            }
        }

        string result;
        for (int i = 0; i < maxIndex; ++i) {
            if (i > 0) {
                result += " ";
            }
            result += arr[i];
        }

        return result;
    }
};
