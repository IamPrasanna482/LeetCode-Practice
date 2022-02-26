class Solution {
public:
    string makeFancyString(string s) {
        string result;
	for (int i = 0; i < s.length(); i++) {
		if (!(s[i] == s[i + 1] && s[i + 1] == s[i + 2]))
			result += s[i];
	}
		return result;
    }
};