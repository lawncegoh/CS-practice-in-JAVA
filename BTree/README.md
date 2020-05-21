# Why is BTree used?
Btree is used in the databases and file systems as it is well suited for storage systems that read and write relatively large blocks of data. 

# How did I use it this time round?
Inititally, I used a normal FILE* in C++ and wrote to a .txt file using fputs. This was an initial implementation on the backend. On the frontend, I utilised the std::unordered_map to store inputs to the database. 
- I then realised that this write to disk method might be too slow after some benchmarking tests, both through isolated database tests as well as http requests tests from multi-threaded clients.
- The implementation of BTree is interesting as I have never done it before. In my knowledge, I know that BTree users some form of hierarchical index to minimise the number of disk reads. It also minimises waste by making sure that the interior nodes are at least half full.
- The keys are also in sorted order so as to aid sequential traversing.

# Comparing BTree with LSM

# Comparing BTree with AVL Tree

# Comparing BTreee with Red Black TRee










### Disclaimer: This Btree implementation was taken from https://www.geeksforgeeks.org/insert-operation-in-b-tree/
