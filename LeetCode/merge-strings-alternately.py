class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        word1_len = len(word1)
        word2_len = len(word2)

        i = 0
        j = 0
        result = ""

        while i < word1_len and j < word2_len:
            result += word1[i] + word2[j]
            i += 1
            j += 1
        
        result += word1[i:]
        result += word2[j:]

        return result
