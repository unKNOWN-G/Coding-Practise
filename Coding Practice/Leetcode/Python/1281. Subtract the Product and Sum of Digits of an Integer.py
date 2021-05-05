from operator import mul
class Solution:
    def subtractProductAndSum(self, n: int) -> int:
        str_num = str(n)
        digits = [int(str_num[i]) for i in range(len(str_num))]
        return reduce(mul, digits, 1) - sum(digits)
        