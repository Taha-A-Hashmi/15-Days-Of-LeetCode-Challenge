class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        
        s = s.lower()
        f = 0
        l = len(s) - 1

        while (f < l):
            if not s[f].isalnum():
                f += 1
                continue
            
            if not s[l].isalnum():
                l -= 1
                continue
            
            if s[l] != s[f]:
                return False

            f += 1
            l -= 1
        
        return True