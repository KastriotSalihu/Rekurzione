#pragma once
#define newl std::cout<<std::endl;	//Prints a new line
#define spac std::cout<<" "	    //Prints a space
#define LOG() std::cout			 //Prints


int factorial_a(int n);												  //Used	 
void Numerim(int test);												  //Used
void display(int n);												  //Used
void printPattern(int n, int m);									  //Used			 
int reverse_digits(int n, int temp);								  //Used as Secondary to P
bool checkPalindrome(int numeri);									  //Used P
bool isPrime(int n, int i = 2);								  		  //Used
int sum_of_digit(int n);									 		  //Used
int product(int x, int y);											  //Used
void insertionSortRecursive(int arr[], int n);			 			  //Used
std::string lookAndSay(int n);									 	  //Used
bool isConsonant(char ch);											  //Used as Secondary to J
int removeSpaces(char* str, int n);									  //Used as Secondary to J
int totalConsonants(char *str, int n);								  //Used J
int getMax(int arr[], int n);										  //Used K
int getMin(int arr[], int n);										  //Used K
int sum(int n);														  //Used 

void printArray(int arr[], int n);						 //Auxilary				
