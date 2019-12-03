# Data Structures
For this code I created my own heap.h class and implemented it to the List Difference program,  and also used the STL <map> to implement a map.
I was inserting the values for L1 in the heap and values for L2 in the map.
Compared the max of L1 (obtained from flipping trickleUp and trickleDown so extractMin can provide the MAX) with the number of occurences of that same number in map L2 using the method "count()".
If no occurences meant that the current max is the answer, if there is ocurences my program would extract the next min and compare it, in a loop, and when there was no more elements to compare (ExtractMin() removes the max permanently) it meant that the retured message was "None".
