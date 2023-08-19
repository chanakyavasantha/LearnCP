## Some Useful Functions in C++:

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
