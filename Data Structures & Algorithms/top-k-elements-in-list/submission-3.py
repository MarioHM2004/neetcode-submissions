class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        v = [[] for _ in range(len(nums) + 1)]
        m = {}
        result = []

        for i in nums:
            m[i] = m.get(i, 0) + 1

        for n, x in m.items():
            v[x].append(n)

        for i in range(len(v) - 1, 0, -1):
            for j in v[i]:
                result.append(j)

                if len(result) == k:
                    return result


        