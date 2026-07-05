class Solution:
    def isPalindrome(self, s: str) -> bool:
        s1=re.sub(r'[^a-zA-Z0-9]', '', s).lower()
        return s1==s1[::-1]