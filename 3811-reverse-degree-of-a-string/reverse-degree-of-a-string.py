class Solution:
    def reverseDegree(self, s: str) -> int:
        ans = 0

        for i in range(len(s)):
            reverse_position = ord('z') - ord(s[i]) + 1
            position = i + 1

            ans += reverse_position * position

        return ans
        