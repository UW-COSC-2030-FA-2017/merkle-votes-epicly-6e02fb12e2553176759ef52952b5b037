# MerkleVotes

Merkle Is Voting - And it's going to be epic.

This homework counts for your 4th 5th and 6th homeworks.

## Part One
1. Implement a binary tree (NOT a search tree)
1. Nodes must -
  1. hold a pseudo-time stamp (integer, non-unique)[5]
  1. hold a 128 bit data component (string of 32 characters)[5]
  1. have 2 pointers to type node [5]
  1. be differentiable if they are a leaf node or not [5]
1. A bTREE.h file and bTREE.cpp file are included but are incomplete
1. Complete the functions required [30]
  1. Add any additional functions that might want

## Part Two
1. Use the binary tree created in part one to implement a pseudo-MerkleTree Class
1. Our Merkle Trees have some special properties:
  1. Manually inserted data can only exist as leaf nodes
  1. Non-Leaf nodes are the hashes of the child nodes below them
  1. Our nodes should be ordered by a 'fake' time stamp
1. pMT.h and pMT.cpp are provided but incomplete
1. Complete the functions provided [30]

1.  [Individual Submission] Compute the number of operations it takes to
Insert a new data node [5]
Recompute hashes upon entry of a new node [5]
Compare if two trees are identical [5]
Determine where two trees differ [5]

## Part Three
1. Create a vote.cc with a main function that stores 'time stamped' votes into your pmTree data structure
1. Vote Data will be a string in the following format RANDOM:CANDIDATE
1. You will be provided with sample voterFiles.
1. Your program should be able to:
  1. Read in a single file with timestamped votes and output the value of the root node 
  1. Read in two sets of time stamped vote files, and:
  1. If identical, print "Validated"
  1. If not identical, print the sub-trees that differ, along with the offending vote data 

## Final Project (more details forthcoming)
Create a poster using the template provided, describing your design decisions, lessons learned, future extension ideas, ...
Poster will be due at the time of final code submission