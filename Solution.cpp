class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        multiset<string> ms1(words1.begin(), words1.end());
        multiset<string> ms2(words2.begin(), words2.end());
        int cnt = 0;
        for (string& w : words1) {
            cnt += (ms1.count(w) == 1 && ms2.count(w) == 1);
        }
        return cnt;
    }
};
