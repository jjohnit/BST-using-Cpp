# String Set Calculator using C++

This C++ project implements a *string set calculator* which can handle a list of operations on two **binary search trees**, based on the provided commands.

The available commands are:

+ *e* – **Erase set**. This command allows interactive users to delete the current S1 set. The previous value stored in S1 is lost forever.
+ *s* – **Switch sets**. The sets associated with S1 and S2 are swapped, meaning that S1 will receive the previous S2 set and vice versa.
+ *b* – **Subset operation**. This command compares S1 and S2 and prints an appropriate message on the console indicating whether S2 is a proper subset of S2. Two strings are deemed to be equal if they have the same length and content; however, the comparison is case sensitive. S1 and S2 are not modified.
+ *c* – **Copy set**. Set S1 is deep copied into S2. The previous content of S2 is deleted. The content of S1 is not affected.
+ *l* – **List set contents**. The string values stored in the two sets are printed on the standard output stream in alphabetical order. The two sets are not modified.
+ *a* – **Add element**. This function allows a user to add a new string to S1. The value is obtained through an appropriate prompt with an interactive user. No action is taken if the string in question is already in the set. The insertion preserves the BST properties of S1.
+ *u* – **Union**. This command takes the set union of S1 and S2 and stores the resulting value in S1. The previous content of S1 is lost. S2 is not modified by this operation.
+ *i* – **Intersection**. This command takes the set intersection of S1 and S2 and stores the resulting value in S1. The previous content of S1 is overriden. S2 is not modified by this operation.
+ *q* – Prints sets S1 and S2 and **quits** the set manager.

A custom *string class* containing a *copy constructor, assignment operator, and destructor* is defined for the BSTs.
