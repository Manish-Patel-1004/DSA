class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        if not strs:
            return ""
        s = min(strs)
        l = max(strs)    
        i = 0
        while i < len(s) and s[i] == l[i]:
            i += 1
        return s[:i]