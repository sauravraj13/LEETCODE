class Solution(object):
    def sumOfLeftLeaves(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        if root == None:
            return 0
        elif root!=None and root.left==None and root.right==None:
            return 0
        else :
            ans = 0

            if root.left:
                if not root.left.left and not root.left.right:
                    ans += root.left.val
                else :
                    ans += self.sumOfLeftLeaves(root.left)
            ans+= self.sumOfLeftLeaves(root.right)

            return ans        
