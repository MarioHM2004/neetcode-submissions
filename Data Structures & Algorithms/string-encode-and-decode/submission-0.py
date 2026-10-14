class Solution:

    def encode(self, strs: List[str]) -> str:
        parts = []
        
        for x in strs:
           parts.append(f"{len(x)}#{x}")
        return "".join(parts)

    def decode(self, s: str) -> List[str]:
        decoded_strList = []
        i = 0

        while i < len(s):
            j = s.find("#", i)
            num = int(s[i:j])
            decoded_strList.append(s[j + 1:j + num + 1])
            i = j + num + 1

        return decoded_strList
