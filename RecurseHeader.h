#pragma once
#define newl std::cout<<std::endl;	//Prints a new line
#define spac std::cout<<" "	    //Prints a space
#define LOG() std::cout			 //Prints
//#define shtyp() std::cout
int faktorial(int n);
int factorial_a(int n);

void printArray(int arr[], int n);

void Numerim(int test);
void display(int n);
void printPattern(int n, int m);										   //6

int Fibonacci(int n);
int Fibonacci0(int n);
void fibSeries(int n);

int reverse_digits(int n, int temp);
bool checkPalindrome(int numeri);										   //5

bool isPrime(int n, int i = 2);								  //4

int sum_of_digit(int n);									 //3

int product(int x, int y);									//2

void insertionSortRecursive(int arr[], int n);			 //1

std::string lookAndSay(int n);									 //7

void myCopy(char s1[], char s2[], int index = 0);						//8

bool isConsonant(char ch);
int totalConsonants(std::string str, int n);								   //

int getMax(int arr[], int n);
int getMin(int arr[], int n);

int sum(int n);

