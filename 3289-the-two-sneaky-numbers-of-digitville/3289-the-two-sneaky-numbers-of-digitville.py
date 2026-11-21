class Solution:
    def getSneakyNumbers(self, nums: List[int]) -> List[int]:
        seen = set()
        sneak = []
        for num in nums:
            if num in seen:
                sneak.append(num)
            else:
                seen.add(num)
        return sneak 