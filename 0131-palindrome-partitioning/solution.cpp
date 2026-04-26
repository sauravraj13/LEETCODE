class Solution {
public:
    bool IsPal(string &s, int start, int end) {
        while (start < end) {
            if (s[start] != s[end]) return false;
            start++;
            end--;
        }
        return true;
    }

    void PalPart(vector<vector<string>> &result, vector<string> &partitions, string &s, int idx) {
        if (idx == s.size()) {
            result.push_back(partitions);
            return;
        }

        for (int i = idx; i < s.size(); i++) {
            if (IsPal(s, idx, i)) {
                partitions.push_back(s.substr(idx, i - idx + 1));
                PalPart(result, partitions, s, i + 1);
                partitions.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> result;
        vector<string> partitions;
        PalPart(result, partitions, s, 0);
        return result;
    }
};
