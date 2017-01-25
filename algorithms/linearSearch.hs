linearSearch :: (Eq a) => a -> [a] -> Bool
linearSearch x (element:list)
            | not ( elem x (element:list) ) = False -- before recursion
            | x == element  = True
            | otherwise     = linearSearch x list
