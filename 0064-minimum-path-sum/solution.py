class Solution(object):
    def minPathSum(self, grid):
        """
        :type grid: List[List[int]]
        :rtype: int
        """
        row = len(grid)
        col = len(grid[0])
        dp = [[float('inf')] * (col + 1) for _ in range(row + 1)]
        dp[0][1] = dp[1][0] = 0
        for i in range(1, row + 1):
            for j in range(1, col + 1):
                dp[i][j] = grid[i - 1][j - 1] + min(dp[i - 1][j], dp[i][j - 1])
        return dp[row][col]
