Level Order Traversal is one of the methods for traversing across a Binary Tree. A level is the number of parent nodes corresponding to a given a node of the tree.
A level Order Traversal traverses a tree in order of levels. It first traverses level 0 the level 1 and so on. 

In my implementation I have used a queue to store addresses of children nodes(ie the left and right children nodes) as we traverse the Binary tree since after visiting a children node we can't visit the parent node since there's no link to it. I have used the queue data structure implemented in the standard Library. 

Time complexity = O(n) -> All cases
Space complexity = O(1) -> Best case
                   O(n) -> Worst/Average Case
