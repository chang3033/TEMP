class Solution(object):
    def combinationSum3(self, k, n):
        """
        :type k: int
        :type n: int
        :rtype: List[List[int]]
        """
        ans = []
        cache = {(d,1,d):[[d,]] for d in range(1,10)}

        def BT(digit, kk, remainder):
            if cache.get((digit,kk,remainder)) is not None:
                return cache[(digit,kk,remainder)]

            if digit > 9 or digit > remainder or kk <= 0:
                cache[(digit,kk,remainder)] = []
                return cache[(digit,kk,remainder)]          

            res = list()
            if digit < 9:
                res = BT(digit + 1, kk,   remainder)
                ps  = BT(digit + 1, kk-1, remainder - digit)
                for psi in ps:
                    res.append([digit,] + psi)

            cache[(digit,kk,remainder)] = res
            if (digit, kk, remainder) == (9,2,15) or  (digit, kk, remainder) == (8,2,15) or (digit, kk, remainder) == (7,2,15) or (digit, kk, remainder) == (6,2,15) :
                print (digit, kk, remainder), cache.get((6,2,15)), cache.get((7,2,15)), cache.get((8,2,15)), cache.get((9,2,15))
            return cache[(digit,kk,remainder)]



        ans = BT(1,k,n)
        print cache
        return ans