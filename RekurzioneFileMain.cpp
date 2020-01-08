#include<iostream>
#include <cstdlib>
#include<string>
#include"RecurseHeader.h"

bool provoPalindrom(){
bool test;
int numeri;
newl;
std::cout<<"Shtypni numerin qe deshironi te provoni a lexohet njejte edhe nga fundi: ";
std::cin>>numeri;
test = checkPalindrome(numeri);
newl;
return test;
}
//Shtyp numrat n n-1 n-2 ... 0
void NumeroSeMbrapthi(){
int fillimi;
std::cout<<"Shtypni numrin prej te cilit deshironi te filloj numerimi se mbrapthi: ";
std::cin>>fillimi;
newl;
display(fillimi);
newl;
}
//Provon nese numri i dhene eshte i thjeshte
bool provoNumerThjesht(){
    bool test;
    int numeri;
    newl;
    std::cout<<"Shtypni numerin qe deshironi te provoni a eshte numer i thjeshte: ";
    std::cin>>numeri;
    test = isPrime(numeri);
	if (test)
		LOG() << "Po";
	else
		LOG() << "Jo";
	newl;
	return test;
}
//Gjen shumen e shifrave te nje numri
void shumaEShifrave(){
    int numeri;
    newl;
    std::cout<<"Shtypni numerin shumen e shifrave te te cilit deshironi te gjeni: ";
    std::cin>>numeri;
	int rezultati = sum_of_digit(numeri);
	printf("Shuma e shifrave te numerit %d eshte %d\n", numeri, rezultati);
	newl;
}

void prodhim(){
	int x , y;
	newl;
	std::cout<<"Shtypni numrat te cilet deshironi te shumezoni: "<<std::endl
	<<"x= ";
	std::cin>>x;
	std::cout<<std::endl<<"y= ";
	std::cin>>y;
	std::cout <<"Prodhimi i numerit "<<x<<" dhe "<<y<<" eshte "<< product(x, y);
	newl;
}

void seri(){
    int n,m;
    newl;
    std::cout<<"Shtypni numrin fillestar ne seri te numerave: ";
    std::cin>>n;
    m = rand() % 10;
	//printPattern(n, n, true);
	printPattern(n,m);
	newl;
	}

	void numerimN0N(){
	    int numeri;
	    newl;
	    std::cout<<"Shtypni numrin per fillim te numerimit: ";
	    std::cin>>numeri;
	    Numerim(numeri);
	newl;
	}
	//Insertion Sort
	void renditVargun(){
	    const int ni = 5;
	    int arr[ni];
	    newl;
	    for(int i = 0; i<ni;i++){
            std::cout<<"Elementi["<<i+1<<"]= ";
            std::cin>>arr[i];
	    }
	int n = sizeof(arr) / sizeof(arr[0]);
	std::cout<<"Vargu i dhene eshte: ";
	printArray(arr, n);
	std::cout<<"Vargu pas renditjes eshte: ";
	insertionSortRecursive(arr, n);
	printArray(arr, n);
	newl;
	}
	void shiqoDheThuaj(){
	    int numri;
	    newl;
	    std::cout<<"Shtypni poziten e elementit ne sekuencen Shiqo Dhe Thuaj: ";
	    std::cin>>numri;
	std::cout <<"Nga elementi ne poziten paraprake "<< lookAndSay(numri-1)
	<<" rrjedh se elementi ne poziten e kerkuar eshte "<< lookAndSay(numri) << std::endl;
	newl;
	}
	void NumriZanoreve(){
	std::string str;
	newl;
	std::cout<<"Shtypni fjalin ne te cilen deshironi te numeroni zanoret: ";
	std::getline (std::cin,str);
	std::cout <<"Numri i zanoreve ne fjaline \""<<str<<"\" eshte "
	<< totalConsonants(str, str.length());
	newl;
	}
	void gjejMinDheMax(){
	  const int ni = 5;
	    int arry[ni];
	    newl;
	    for(int i = 0; i<ni;i++){
            std::cout<<"Elementi["<<i+1<<"]= ";
            std::cin>>arry[i];
	    }
	int n = sizeof(arry) / sizeof(arry[0]);
	std::cout << "Minimum element of array: " << getMin(arry, n) << "\n";
	std::cout << "Maximum element of array: " << getMax(arry, n) << "\n";
	newl;
	}
	/*
int main() {
	for (int i = 1;i <= 5;i++) {
		std::cout << Fibonacci(i);
		spac;
	}
//	newl;
//	checkPalindrome();
//	LOG()<< 1231/10;
//	newl;
//	LOG() << "Hello! " << "How " << "ar " << "ya?" << std::endl;
//	fibSeries(10);
	//newl;



	char s1[100] = "GEEKSFORGEEKS";
	char s2[100] = "";
	myCopy(s1, s2);
	std::cout << s2;


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
*/
