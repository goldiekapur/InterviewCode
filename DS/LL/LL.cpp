
void LL_Topics()
{

	//Topics:
	
	Practice
		Clone, Kth, Add number, DLL2BST

	UtiltyMethod

	LinerScan //search find , traverse/walk/iterate
	(kth, middle)

	Split_Merge_DummpyNode
	
	intersection_cycle
	Reverse_midle
	Insert		
	delete_remove

	SolveProblem
	AdvancedDS()
}

void Practice_Clone_randompPointer()
{
	#Clone:
		Clone a linked list with next and random pointer | Set 1
		Clone a linked list with next and random pointer | Set 2
		
		Point to next higher value node in a linked list with an arbitrary pointer
		Point arbit pointer to greatest value right side node in a linked list

}

void Practice_Kth()
{

	//Reverse SLL  in groups of given size
		//I/P:  1->2->3->4->5->6->7->8->NULL & k = 3 => O/P:  3->2->1->6->5->4->8->7->NULL. 
		node *reverseInKgroups(node *head, int k)

	//Reverse alternate K nodes in SLL
		//I/P:  1->2->3->4->5->6->7->8->9->NULL & k = 3 => O/P:3->2->1->4->5->6->9->8->7->NULL
		 node* kAlternateReverse(node *head, int k)


	void rotateByK(struct node **head_ref, int k)

	//Swap Kth node from start with Kth node from end in SLL
		void swapKth(struct node **head_ref, int k)
		
		void swapK1StartK2End(struct node **head_ref, int k1Start, int k2End)

	//Swap nodes in a linked list without swapping data
		void swapNodes(struct node **head_ref, int x, int y)
	

	//Delete N nodes after M nodes of a linked list
		void skipK1_deleteK2(struct node  *head, int skipK1, int deleteK2)
	


}

void Practice_Add_Two_Numbers()
{

	#Add two numbers represented by linked lists | Set 1 <Nuber are in reverse order>
			/*
				Input:
				  First List: 7->5->9->4->6  // represents number 64957
				  Second List: 8->4 //  represents number 48
				Output
				  Resultant list: 5->0->0->5->6  // represents number 6500
			*/	  
			node* addTwoLists (node* first, node* second)
			
	#Add two numbers represented by linked lists | Set 2
			/*
			Input:
			First List: 5->6->3  // represents number 563
			Second List: 8->4->2 //  represents number 842
			Output
			Resultant list: 1->4->0->5  // represents number 1405
		  	*/
			node* addTwoLists (node* first, node* second)

	#Add 1 to a number represented as linked list
		
	#Construct a Maximum Sum Linked List out of two Sorted Linked Lists having some Common nodes
		/*
		Output: Following is maximum sum linked list out of two input lists
		list =  1->3->12->32->90->125->240->511
		we switch at 3 and 240 to get above maximum sum linked list
		*/

}
void Practice_BST2DLL_DLL2BST()
{
		Sorted Linked List to Balanced BST
		In-place conversion of Sorted DLL to Balanced BST
		BST2DLL

}

void Practice_Other()
{

	Find a triplet
	//Find a triplet from three linked lists with sum equal to a given number
	/*
	App-1:3 loop scan:O(n^3)

	App-2: Sorting(Organized data) reduce to O(n*n) <become 2 loop scan>. 
	1) Sort list b in ascending order, and list c in descending order.
	2) After the b and c are sorted, one by one pick an element from list a and find the pair 
	by traversing both b and c.
		idea is similar to Quadratic algorithm of 3 sum problem.

	*/

}

void utiltyMethod()
{

	int pop(node** headRef) //UT 
	void Push(node** headRef, int data) //UT	
	void MoveNode(node** destRef, node** sourceRef)//UT
	void append(node** aRef, node** bRef)//UT 

	void moveLast2Front(node **head_ref) 
	node* getMiddle(node *head)

}

void linearScan()
{
	int size(node* head) //LS
	int countFrequency(node* head, int key)	//LS
	int getKthIndex(node* head, int index) //LS
	int getKthFromLast(node* head, int index) //LS

}

void insert()
{
	void  push(node** headRef, int data) //UT	
	node* appendNode(node** headRef, int num) //LS push_back

	void insert(node** headRef, int index, int data)
	void sortedInsert(node** headRef, node* newNode)
	
	void insertSort(node** headRef)
	void sortedInsertCLL(node** head_ref, node* newNode) // Sorted insert 4 C-SLL
	
}

voide Delete_Remove()
{
	int pop(node** headRef) //UT
	int pop_back(node** headRef) //UT
	void MoveNode(node** destRef, node** sourceRef)//UT
	void deleteList(node** headRef) //LS

	void removeSortedLLDuplicates(node* head)
	void removeUnortedLLDuplicates(node* head)

	void deleteKey(node** headRef, int key) 
	void deleteIndex(node** headRef, int index)
	void deleteKthFomLast(node** headRef, int index)
	
	void deleteNode(node* head) //Trickey
	//Given only a pointer to a node to be deleted in SLL

	void deleteNodeDLL(node **head_ref, node *key)
	void deleteAlternateNodes(node *head)

	//Delete nodes which have a greater value on right side
	//Scan from back - as LL not backward scan use stack, or reverse 
	void delLesserNodes(node **head_ref)

	//Delete a given node in Linked List under given constraints
	/*
		1) It must accept pointer to the start node as first parameter and node to be
			deleted as second parameter i.e., pointer to head node is not global.
		2) It should not return pointer to the head node.
		3) It should not accept pointer to pointer to head node.
	*/

	//Given a linked list of line segments, remove middle points
	node* deleteMiddle(node *head)
		
}

void Reverse_Middle()
{
	void printReverse(node* head)
	void Reverse(node** headRef)
	void RecursiveReverse(node** headRef)

	void reverseDLL(node **head_ref)

	//Practice questions for Linked List and Recursion
	
	int getMiddle(node* head)
	int isPalindrome(node* head)
}

void intersection_cycle_cycle()
{
	node* getInterSection(node* head1, node* head2)

	int detectAndRemoveLoop(node *list)
	int detectLoop(node* head)
	void removeLoop(node *loop_node, node *head)	
}

void Dummy_Split_Merge()
{
	//#Split
	void splitCLL(node *head, node **head1_ref, node **head2_ref) //Split SLL into 2  halves
		
	void FrontBackSplit(node* source, node** frontRef, node** backRef) //Split from Middle	-2 half
	
	void AlternatingSplit(node* source, node** aRef, node** bRef)


	//#Merge
	node *mergeSortDLL(node *head) //DLL
		
	node* shuffleMerge(node* a, node* b)	
	
	//5->7->17->13->11 & 12->10->2->4->6 => 5->12->7->10->17->2->13->4->11->6
	node* mergeAlternate(node* a, node* b)
	
	node* sortedMerge(node* a, node* b)
	void mergeSort(node* headRef)
	
	node* sortedIntersect(node* a, node* b) //Intersection of 2  Sorted LL


	#Dummy_Split_Merge

	void segregateEvenOdd(node **head_ref)
	void sort0123(node **head_ref)

	//Merge 2 sorted SLL -> o/p: merged list is in reverse order
	node* sortedMergeReverseOutput(node* a, node* b)

	//Sort LL:  it is alternating ascending and descending
	//<1)Split/Separate 2 lists, 2)Reverse descending LL 3) sortedMerge>
	void sortAfterSplit(Node **headRef)
	
	//reverse alternate nodes and append at the end
		/*
		Remove alternative nodes from second node
		Reverse the removed list.
		Append the removed list at the end.
		*/
	node* rearrange(node *head)
	
	//Rearrange LL in Zig-Zag -> Input:  11->15->20->5->10 ==> Output: 11->20->5->15->10
	node* zigZagRearrange(Node *head)


	//Rearrange LL: all even & odd positioned are together
	Node *rearrangeEvenOddPosition(Node *head)
	

	//1->2->3->4->5->6->7 => 2->1->4->3->6->5->7
	void pairWiseSwap(node *head)
	void pairWiseSwapByChangingData(node *head)

	
	//Rearrange a given linked list in-place => L0->Ln->L1->Ln-1..
	Node *rearrangeStartEnd(Node *head)
	
	bool areIdentical(node *a, node *b)
		
	//Compare two strings represented as LL
	int compareLL(Node *list1, Node *list2) 	

	//Union and Intersection of two Linked Lists
		/*
		App-1) 2 loop scan
		App-2) Merge Both LL then process for union & intersection
		App-3) Use Hashing
		*/
}


void LL_solveProblem()
{
	Construct a Maximum Sum Linked List out of two Sorted LL having some Common nodes

	Check if a linked list of strings forms a palindrome

	Point arbit pointer to greatest value right side node in a linked list

	Add 1 to a number represented as linked list

	Select a Random Node from a Singly Linked List

	Given a linked list of line segments, remove middle points
		struct node* deleteMiddle(struct node *head)

}

void advancedDS()
{
	Generic Linked List in C
	/*
	struct node
	{
    // Any data type can be stored in this node
    void  *data;
 
    struct node *next;
	};
	*/

		
	XOR Linked List – A Memory Efficient Doubly Linked List | Set 1
	XOR Linked List – A Memory Efficient Doubly Linked List | Set 2

	
	QuickSort on Doubly Linked List
	QuickSort on Singly Linked List

	Flattening a Linked List
	Flatten a multilevel linked list
}

void LL_stanford_Article()
{
	
	node* BuildOneTwoThree() //Build the list {1, 2, 3}

	#dummy Node ticks
	node* copyList(node* head)  
	{
		node dummy; 
		node* tail = &dummy;
		dummy.next = NULL;

		node* current = head;

		while (current != NULL) //Linear Scan
		{
			Push(&(tail->next), current->data); 
			tail = tail->next; 
			current = current->next;	
		}
		return(dummy.next);
	}

	//18 Problems


	node* copyList(node* head)

	int size(node* head) //LS
	int countFrequency(node* head, int key)	//LS
	int GetKth(node* head, int index) //LS
	void DeleteList(node** headRef) //LS
	node* appendNode(node** headRef, int num) //LS 
	
	int pop(node** headRef) //UT 
	void Push(node** headRef, int data) //UT	
	void MoveNode(node** destRef, node** sourceRef)//UT
	void append(node** aRef, node** bRef)//UT 
	
	void InsertNth(node** headRef, int index, int data)
	void SortedInsert(node** headRef, node* newNode)
	void InsertSort(node** headRef)
	
	void RemoveSortedLLDuplicates(node* head)
	
	void FrontBackSplit(node* source, node** frontRef, node** backRef) //Split from Middle
	void AlternatingSplit(node* source, node** aRef, node** bRef)
	
	node* ShuffleMerge(node* a, node* b)
	node* SortedMerge(node* a, node* b)
	void MergeSort(node* headRef)
	node* SortedIntersect(node* a, node* b)
	
	void Reverse(node** headRef)
	void RecursiveReverse(node** headRef)
}

void LL_EPI_BOOK()
{

}

void LL_CTCI_BOOK()
{

}

void LL_MadeEassy_BOOK()
{

}

void LL_DO_FAQ()
{

}

voide theory_Notes()
{
	
	//Referance :
		2) Geek
		//Book:	3) EPI , 4) Made Eassy, 5) CTCI() 1) Article:  stanford 
			

	//Linked List vs Array

	//How to write C functions that modify head pointer of a Linked List?
		1)global head pointer 
		2)Return head pointer
		3)Use Double Pointe (i.e headReferance not head pointer)
	
}

struct node 
{
	int data;
	struct* next;
}

typedef struct node node;

