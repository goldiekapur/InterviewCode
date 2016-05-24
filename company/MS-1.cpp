Set 90 Microsoft Interview Experience

Round 1:

Its initial screening round. It has happened through skype.

1. Given n*n matrix with some elements in each cell. If there is “0” in any cell then we have to 
	make that corresponding row and column to “0”
	Time complexity: O(n*n) Space complexity: O(1)

2. Given an array of elements with size n. You should find the number which is repeated more than n/2 times
	Time complexity: O(n)

	After screening round, they asked me to come for 4 F2F rounds. I have visited Microsoft IDC Hyderabad.

//Round 2:

1. Given sorted array of numbers and a sum. we have to find any two numbers whose sum is equal to the given sum.

Time Complexity: O(n)

2. Given Binary tree with parent pointer and two nodes. Find LCA of the given two nodes in a given binary tree

	struct TreeNode
	{
	  int data;
	  TreeNode *left, *right, *parent;
	}; 
	Parent pointer of each node points to its parent. Root node’s parent pointer points to NULL

	Time Complexity: O(logn)

Round 3:
	1. Given two linkedlists. Find the intersection point of those two linkedlists
	2. Its based on Binary tree. I forgot the question :)
	
	//3. Design discussion on Search functionality available in smart phones

Round 4:
	1. Given a linkedlist with random pointer for each node which points to some random number
	in the given list. Clone the linkedlist

	struct ListNode
	{
	  int data;
	  ListNode *next, *random;
	}; 

	2. Design and implement DNS Cache.

	Requirements:
	Cache must be fixed in size and it will be decided by the user who wants to use this cache.
	If the entry is not available in Cache then it should call server to get the details of IP Address and store 
	it in cache.

Round 5:
	1. Print given matrix in spiral order
	2. I forgot the question. It is related to arrays
	3. Design discussion on Top Trends feature available in facebook.
	