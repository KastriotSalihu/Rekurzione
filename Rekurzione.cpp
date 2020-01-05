#include<iostream>
#include"RecurseHeader.h"

int main() {   
	display(5);
	newl;
	for (int i = 1;i <= 5;i++) {
		std::cout << Fibonacci(i);
		spac;  
	}		   
	newl;						 
	checkPalindrome();	
	LOG()<< 1231/10;				 
	newl;							   
	LOG() << "Hello! " << "How " << "ar " << "ya?" << std::endl;	 
	fibSeries(10);
	newl;															 
	Numerim(6);	
	newl;
	int n = 15;
	if (isPrime(n))
		LOG() << "Yes";
	else
		LOG() << "No";
	newl;
	int num = 12345;
	int result = sum_of_digit(num);
	printf("Sum of digits in %d is %d\n", num, result);
	int x = 5, y = 2;
	std::cout << product(x, y);
	newl;
	n = 16;
	//printPattern(n, n, true); 
	printPattern(n);
	newl;
	int arr[] = { 12, 11, 13, 5, 6 };	   	
	n = sizeof(arr) / sizeof(arr[0]);
	printArray(arr, n);	
	newl;
	insertionSortRecursive(arr, n);
	printArray(arr, n);
	newl;
	int N = 8;
	std::cout << shiqoDheThuaj(N-1) << std::endl;
	std::cout << shiqoDheThuaj(N) << std::endl;

	char s1[100] = "GEEKSFORGEEKS";
	char s2[100] = "";
	myCopy(s1, s2);
	std::cout << s2;
	newl;
	std::string str = "abc deAeeeee";
	std::cout << totalZanore(str, str.length());
	newl;

	for (int i = 1;i < 256;i++) {
		char o = i;
		//std::string op = (i % 4 != 0) ? "" : "\n";
		//std::cout <<i<<"\t..."<< o<<"\t"<<op;
		std::cout << i << " ...\t" << o << "\t\t";
		if (i > 6 && i < 14) {
			newl;
			continue;
		}
		if (i % 3 == 0)
			newl;	  		
	}
	newl;

	char k = 13;
	LOG() << "Kastriot" << k << "Salihu";
	newl;
	int arry[] = { 12, 1234, 45, 67, 1 };
	n = sizeof(arry) / sizeof(arr[0]);
	std::cout << "Minimum element of array: " << getMin(arry, n) << "\n";
	std::cout << "Maximum element of array: " << getMax(arry, n) << "\n";
	newl;
	int number, result;
	printf("Enter a positive integer: ");
	scanf("%d", &number);
	result = sum(number);
	printf("sum = %d", result);




	return 0; 
}

// A utility function to print an array of size n 
void printArray(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		std::cout << arr[i] << " ";
}
