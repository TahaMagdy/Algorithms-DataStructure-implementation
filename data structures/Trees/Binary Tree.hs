module Tree_Type where

-- * 1# We will make a data type that can be mapped over! (A Tree)
-- | A tree either it is empty or it is a node that carries two sub-trees.
data Tree a = EmptyTree |
            Node a (Tree a) (Tree a) deriving Show

-- * 2# a function that creates a singleton tree (A tree with one Node)
singleton :: a -> Tree a
singleton x = Node x EmptyTree EmptyTree

-- * 3# a funtion to insert an element
-- | Because we will use (==, <, >); then we made `a` instance of Ord.
treeInsert :: (Ord a) => a -> Tree a -> Tree a
treeInsert x EmptyTree = singleton x
treeInsert x (Node a leftTree rightTree)
  | x == a = Node x  leftTree rightTree
  | x <  a = Node a (treeInsert x leftTree) rightTree
  | x >  a = Node a rightTree (treeInsert x leftTree)
