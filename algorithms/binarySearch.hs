-- * Pre-Condition : The List Must be sorted !!
-- * Index of lists starts form `zero`, So pass the low as 0
binarySearch :: Ord a => a -> [a] -> Int -> Int -> Int
binarySearch x list low high
            | low > high          = -1
            | list !! mid > x     = binarySearch x list low (mid-1)
            | list !! mid < x     = binarySearch x list (mid+1) high
            | otherwise           = mid+1   -- index of the element x
                where
                    mid = ((high + low) `div` 2)

