
class Solution {
public:
    int n;
    int maxlen;
    unordered_set<string> st;
    void solve(string& s, int i, string& cur, int count) {
        if (count < 0) return;
        if (i == n) {
            if (count == 0) {
                if (cur.length() > maxlen) {
                    maxlen = cur.length();
                    st.clear();
                }
                if (cur.length() == maxlen) {
                    st.insert(cur);
                }
            }
            return;
        }
        if (s[i] != '(' && s[i] != ')') {
            cur.push_back(s[i]);
            solve(s, i + 1, cur, count);
            cur.pop_back();
            return;
        }
        cur.push_back(s[i]);
        solve(s, i + 1, cur, count + (s[i] == '(' ? 1 : -1));
        cur.pop_back();

        solve(s, i + 1, cur, count);
    }

    vector<string> removeInvalidParentheses(string s) {
        n = s.length();
        maxlen = 0;
        st.clear();
        string cur = "";
        solve(s, 0, cur, 0);
        return vector<string>(st.begin(), st.end());
    }
};