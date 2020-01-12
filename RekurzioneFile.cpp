#include <iostream>
#include<string>
#include <algorithm>
#define min(x,y) ((x<y)?x:y)
	   
int factorial_b(int n);																						   
//Finds the factorial of a given number n (n!)
int factorial_a(int n) {
	if (n <= 1)   return 1;
	else  
		return n * factorial_b(n - 1);
}			   
int factorial_b(int n) {
	if (n <= 1)   return 1;
	else  
		return n * factorial_a(n - 1);
}			   					
// Prints n n-1 ... 2 1 1 2 ...	n-1 n
void Numerim(int test){
	if (test < 1)   return;
	else{
		std::cout << test << " ";
		Numerim(test - 1);    // statement 2
		std::cout << test << " ";
		return;
	}
}										 
//Displays integers from n to 0
void display(int n) {
	if (n < 1)
		return;
	std::cout << n << "\t";
	display(n - 1);
}									   
// Recursive function to print the pattern without any extra variable
void printPattern(int n, int m)	{
	if (n == 0 || n < 0){
		std::cout << n << " ";
		return;
	} 
	// First print decreasing order
	std::cout << n << " ";
	printPattern(n - m, m);		
	// Then print increasing order
	std::cout << n << " ";
}											
 //Reverses order of digits
int reverse_digits(int n, int temp){
	if (n == 0)
		return temp; 
	temp = (temp * 10) + (n % 10);
	return reverse_digits(n / 10, temp);   
}				
//Checks whether number is palindrome
bool checkPalindrome(int num) {
	int result = reverse_digits(num, 0);
	if (result == num) {
		std::cout << "Numri " << num << " eshte palindrom" << std::endl;
		return 1;
	}
	else {
		std::cout << "Numri " << num << " nuk eshte palindrom" << std::endl;
		return 0;
	}		 
}								 
// is Prime or Not using Recursion Returns true if n is prime, else
// return false. i is current divisor to check.
bool isPrime(int n, int i = 2) {
	// Base cases
	if (n <= 2)
		return (n == 2) ? true : false;
	if (n % i == 0)
		return false;
	if (i * i > n)
		return true;
	// Check for next divisor
	return isPrime(n, i + 1);
}
// Function to check sum of digit
int sum_of_digit(int n) {
	if (n == 0)
		return 0;
	return (n % 10 + sum_of_digit(n / 10));
}
// recursive function to calculate multiplication of two numbers
int product(int x, int y) {
	// if x is less than
	// y swap the numbers
	if (x < y)
		return product(y, x);
	// if any of the two numbers is zero return zero
	else if (y == 0)
		return 0;
	// iteratively calculate y times sum of x
	else
		return (x + product(x, y - 1));
}	 	
// Recursive function to sort an array using insertion sort
void insertionSortRecursive(int arr[], int n) {
	// Base case
	if (n <= 1)
		return;
	// Sort first n-1 elements
	insertionSortRecursive(arr, n - 1);
	// Insert last element at its correct position
	// in sorted array.
	int last = arr[n - 1];
	int j = n - 2;
	/* Move elements of arr[0..i-1], that are
	  greater than key, to one position ahead
	  of their current position */
	while (j >= 0 && arr[j] > last) {
		arr[j + 1] = arr[j];
		j--;
	}
	arr[j + 1] = last;
}
// Returns n'th term in look-and-say sequence
std::string lookAndSay(int n) {
	// Base cases
	if (n == 1)      return "1";
	if (n == 2)      return "11";
	// Find n'th term by generating all terms from 3 to
	// n-1.  Every term is generated using previous term
	std::string str = "11"; // Initialize previous term
	for (int i = 3; i <= n; i++) {
		// In below for loop, previous character is processed in current iteration. That
		// is why a dummy character is added to make sure that loop runs one extra iteration.
		str += '$';
		int len = str.length();
		int cnt = 1; // Initialize count of matching chars
		std::string  tmp = ""; // Initialize i'th term in series
		// Process previous term to find the next term
		for (int j = 1; j < len; j++) {
			// If current character does't match
			if (str[j] != str[j - 1]) {
				// Append count of str[j-1] to temp
				tmp += cnt + '0';
				// Append str[j-1]
				tmp += str[j - 1];
				// Reset count
				cnt = 1;
			}
			//  If matches, then increment count of matching characters
			else cnt++;
		}
		// Update str
		str = tmp;
	}
	return str;
}
// Function to check for consonant
bool isConsonant(char ch) {
	// To handle lower case
	ch = toupper(ch);
	return !(ch == 'A' || ch == 'E' ||
		ch == 'I' || ch == 'O' ||
		ch == 'U') && ch >= 65 && ch <= 90;
}
//Removes Spaces
int removeSpaces(char* str,int n) {
	int cnt = 0;
	for (int i = 0; i < n;i++) {
		if (str[i] == ' ') {
			str[i] = 'a';
			cnt++;
		}
	}
	return cnt;
}								
// to count total number of consonants from 0 to n-1
int totalConsonants(char *str, int n)
{
	if (n == 1)
		return isConsonant(str[0]);			 
	return totalConsonants(str, n - 1) + isConsonant(str[n - 1]);
}
// CPP program to find minimum (or maximum) element in an array.
int getMin(int arr[], int n){ 
	return (n == 1) ? arr[0] : min(arr[0], getMin(arr + 1, n - 1));
}
int getMax(int arr[], int n) {
	return (n == 1) ? arr[0] : std::max(arr[0], getMax(arr + 1, n - 1));
}
int sum(int n) {
	if (n != 0)
		return n + sum(n - 1);
	else   return n;
}
