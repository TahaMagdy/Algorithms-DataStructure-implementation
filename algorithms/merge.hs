merging :: (Ord a) => [a] -> [a] -> [a]
merging [] xs = xs
merging xs [] = xs
merging (x:xs) (y:ys)
    | (x < y)   = x:merging xs (y:ys)
    | otherwise = y:merging (x:xs) ys
 
split :: [a] -> ([a], [a])
split xs    = (take n xs, drop n xs)
    where n = (length xs) `div` 2 
 
mergeSort :: (Ord a) => [a] -> [a]
mergeSort xs 
    | (length xs) > 1  = merging (mergeSort ls) (mergeSort rs)
    | otherwise        = xs
        where (ls, rs) = split xs
