class Solution:
    def isValid(self, s: str) -> bool:
        stack=deque()
        for i in range(len(s)):
            if s[i] in ['(','{','[']:
                stack.append(s[i])
            if s[i] in [')','}',']']:
                if not stack: return False
                char=stack.pop()
                if s[i]==')':
                    if char!='(': return False
                if s[i]=='}':
                    if char!='{': return False
                if s[i]==']':
                    if char!='[': return False
        if stack:
            return False
        return True