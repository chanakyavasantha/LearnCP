## Some Useful Concepts and Functions for CP in C++:

### 1. Count Function: Counts a particular value
<hr>

```
// C++ program for count in C++ STL for
// array
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = { 3, 2, 1, 3, 3, 5, 3 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout <<

		" Number of times 3 appears : "
	<< count(arr, arr + n, 3);

	return 0;
}
```

### 2. Sort Function:
<hr>


```
// C++ program to demonstrate default behaviour of
// sort() in STL.
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
	int n = sizeof(arr) / sizeof(arr[0]);

	/*Here we take two parameters, the beginning of the
	array and the length n upto which we want the array to
	be sorted*/
	sort(arr, arr + n);

	cout << "\nArray after sorting using "
			"default sort is : \n";
	for (int i = 0; i < n; ++i)
		cout << arr[i] << " ";

	return 0;
}

```

### 3. Dynamic Memory Aloocation:
<hr>

```
#include <stdio.h>
#include <stdlib.h>

int main()
{

	// This pointer will hold the
	// base address of the block created
	int* ptr;
	int n, i;

	// Get the number of elements for the array
	printf("Enter number of elements:");
	scanf("%d",&n);
	printf("Entered number of elements: %d\n", n);

	// Dynamically allocate memory using malloc()
	ptr = (int*)malloc(n * sizeof(int));

	// Check if the memory has been successfully
	// allocated by malloc or not
	if (ptr == NULL) {
		printf("Memory not allocated.\n");
		exit(0);
	}
	else {

		// Memory has been successfully allocated
		printf("Memory successfully allocated using malloc.\n");

		// Get the elements of the array
		for (i = 0; i < n; ++i) {
			ptr[i] = i + 1;
		}

		// Print the elements of the array
		printf("The elements of the array are: ");
		for (i = 0; i < n; ++i) {
			printf("%d, ", ptr[i]);
		}
	}

	return 0;
}
```

### 4. Sorting a vector of pairs in c++:
<hr>

```
// C++ program to demonstrate sorting in vector
// of pair according to 2nd element of pair
#include<bits/stdc++.h>
using namespace std;

// Driver function to sort the vector elements
// by second element of pairs
bool sortbysec(const pair<int,int> &a,
			const pair<int,int> &b)
{
	return (a.second < b.second);
}

int main()
{
	// declaring vector of pairs
	vector< pair <int, int> > vect;

	// Initialising 1st and 2nd element of pairs
	// with array values
	int arr[] = {10, 20, 5, 40 };
	int arr1[] = {30, 60, 20, 50};
	int n = sizeof(arr)/sizeof(arr[0]);

	// Entering values in vector of pairs
	for (int i=0; i<n; i++)
		vect.push_back( make_pair(arr[i],arr1[i]) );

	// Printing the original vector(before sort())
	cout << "The vector before sort operation is:\n" ;
	for (int i=0; i<n; i++)
	{
		// "first" and "second" are used to access
		// 1st and 2nd element of pair respectively
		cout << vect[i].first << " "
			<< vect[i].second << endl;

	}

	// Using sort() function to sort by 2nd element
	// of pair
	sort(vect.begin(), vect.end(), sortbysec);

	// Printing the sorted vector(after using sort())
	cout << "The vector after sort operation is:\n" ;
	for (int i=0; i<n; i++)
	{
		// "first" and "second" are used to access
		// 1st and 2nd element of pair respectively
		cout << vect[i].first << " "
			<< vect[i].second << endl;
	}
	return 0;
}
```


