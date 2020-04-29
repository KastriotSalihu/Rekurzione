#pragma once
#define newl std::cout<<std::endl;	//Prints a new line
#define spac std::cout<<" "	    //Prints a space
#define LOG() std::cout			 //Prints
#define MAX 100                   //printA max number of elements

int      factorial_a (int);                                               //Used
void     Numerim (int);                                               //Used
long int calculPow (int, int);                                     //Used
void     printPattern (int,int);                                      //Used
int      reverse_digits (int, int);                                  //Used as Secondary to P
bool     checkPalindrome (int);                                     //Used P
bool     isPrime (int, int = 2);                                       //Used
int      sum_of_digit (int);                                              //Used
int      product (int, int);                                            //Used
void     insertionSortRecursive (int arr[], int);                        //Used
void     printA (int array[],int,int);
bool     isConsonant (char);                                            //Used as Secondary to J
int      totalConsonants (std::string str, int n);                                //Used J
int      getMax (int arr[], int);                                         //Used K
int      getMin (int arr[], int);                                         //Used K
int      sum (int);                                                       //Used


void     printArray(int arr[], int);                       //Auxilary

