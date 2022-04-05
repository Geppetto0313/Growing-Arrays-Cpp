#include <iostream>

using namespace std;

//Display Method to show the Array A Before and After
void Display(int a[], int s) {
	for (int i = 0; i < s; i++) {
		cout << "Array: " << a[i] << " ";
	}
	cout << endl;;
}

int main()
{
   //Pointer Variable
	int* a;

	//Initializing Array
	a = new int[10]{1,2,3,4,5,6,7,8,9,10};
	
	//Pointer Variable used new array.
	int* b;

	//Initializing Array Size but values set to 0 for display purposes only.
	b = new int[20]{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

	//For Loop used to copy the smaller Array a to the bigger Array b.
	for (int i = 0; i < 10; i++) {
		b[i] = a[i];
	}
	
	//Display Array before growing.
	Display(a, 10);

	//Copy Array
	a = b;
	
	//Display Array after growing.
	Display(a, 20);
	
}


