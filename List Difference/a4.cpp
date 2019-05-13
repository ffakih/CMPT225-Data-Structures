/*
**  a4.cpp
**  Assignment 4, CMPT-225
**
**  Reads a sequence of integers (in the range of int's) from standard in;
**  It is interpreted as two lists, separated by a single 0
**/
/*
**  a4.cpp
**  Assignment 4, CMPT-225
**
**  Reads a sequence of integers (in the range of int's) from standard in;
**  It is interpreted as two lists, separated by a single 0
**/
#include <iostream>
#include "heap.h"
#include <map>			// I am using a map to store values in L2
using namespace std;

int
main ()
{

  int x;

  bool List2 = false;
  //cout << "list 1:" << endl ;
  cout << "301347333, ffakih@sfu.ca, Firas Fakih " << endl;
  Heap L1;
  std::map < int, int >L2;	// INSTANSIATION



  cin >> x;

  while (!cin.eof ())
    {
      if (x == 0)
	{
	  List2 = true;
	  //cout << "\nlist 2:\n" ;
	  while (List2 == true && !cin.eof ())
	    {
	      cin >> x;
	      L2.insert (std::pair < int, int >(x, x));
	    }

	  break;
	}
      else
	{
	  L1.insertH (x, x);  //Insert for Heap
	       
	}

      cin >> x;

    }
  


  while (L1.empty () == false)
    {
      int y = L1.extractMin ();
// method count, counts occurences of specific values.
      if (L2.count (y) == 0)
	{
	  cout << y << endl;
	  break;
	}
    }
  if (L1.empty () == true)  // Null check
    {
      cout << "None" << endl;
    }




}



			

