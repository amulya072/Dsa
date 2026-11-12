class Solution:
    def minimumCost(self, cost1, cost2, costBoth, need1, need2):
        mn = min(need1, need2)
        mx = max(need1, need2)

        separate = cost1 * need1 + cost2 * need2
        overlap = mn * costBoth + (need1 - mn) * cost1 + (need2 - mn) * cost2
        all_both = mx * costBoth

        return min(separate, overlap, all_both)