class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        i=0
        result=[]
        while(i<len(nums)-1):
            j=i+1
            while(j<len(nums)):
                if(nums[i]+nums[j]==target):
                    result.append(i)
                    result.append(j)
                    return result
                j += 1
            i+=1
