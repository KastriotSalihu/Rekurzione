#include<iostream>
#include <cstdlib>
#include<string>
#include"RecurseHeader.h"
//Provon nese numri i dhene eshte palindrom
bool provoPalindrom() {
	bool test;
	int numeri;
	newl;
	std::cout << "Shtypni numerin qe deshironi te provoni a lexohet njejte edhe nga fundi: ";
	std::cin >> numeri;
	test = checkPalindrome(numeri);
	newl;
	return test;
}
//Shtyp numrat n n-1 n-2 ... 0
void NumeroSeMbrapthi() {
	int fillimi;
	std::cout << "Shtypni numrin prej te cilit deshironi te filloj numerimi se mbrapthi: ";
	std::cin >> fillimi;
	newl;
	display(fillimi);
	newl;
}
//Provon nese numri i dhene eshte i thjeshte
bool provoNumerThjesht() {
	bool test;
	int numeri;
	newl;
	std::cout << "Shtypni numerin qe deshironi te provoni a eshte numer i thjeshte: ";
	std::cin >> numeri;
	test = isPrime(numeri);
	if (test)	LOG() << "Po";
	else		LOG() << "Jo";
	newl;
	return test;
}
//Gjen shumen e shifrave te nje numri
void shumaEShifrave() {
	int numeri;
	newl;
	std::cout << "Shtypni numerin shumen e shifrave te te cilit deshironi te gjeni: ";
	std::cin >> numeri;
	int rezultati = sum_of_digit(numeri);
	printf("Shuma e shifrave te numerit %d eshte %d\n", numeri, rezultati);
	newl;
}	
//Gjen prodhimin e dy numrave
void prodhim() {
	int x, y;
	newl;
	std::cout << "Shtypni numrat te cilet deshironi te shumezoni: " << std::endl
		<< "x= ";
	std::cin >> x;
	std::cout << std::endl << "y= ";
	std::cin >> y;
	std::cout << "Prodhimi i numerit " << x << " dhe " << y << " eshte " << product(x, y);
	newl;
}	
//Shtyp nje varg numrash me ndryshim te rastesishem mes elementeve
void seri() {
	int n, m;
	newl;
	std::cout << "Shtypni numrin fillestar ne seri te numerave: ";
	std::cin >> n;
	m = rand() % 10;
	//printPattern(n, n, true);
	printPattern(n, m+1);
	newl;
}
//Numerim prej nje numri N ne ZERO ne N
void numerimN0N() {
	int numeri;
	newl;
	std::cout << "Shtypni numrin per fillim te numerimit: ";
	std::cin >> numeri;
	Numerim(numeri);
	newl;
}
//Sorton nje varg te dhene me metoden Insertion Sort
void renditVargun() {
	const int ni = 5;
	int arr[ni];
	newl;
	for (int i = 0; i < ni;i++) {
		std::cout << "Elementi[" << i + 1 << "]= ";
		std::cin >> arr[i];	
	}
	int n = sizeof(arr) / sizeof(arr[0]);
	std::cout << "Vargu i dhene eshte: ";
	printArray(arr, n);
	std::cout << "Vargu pas renditjes eshte: ";
	insertionSortRecursive(arr, n);
	printArray(arr, n);
	newl;
}
//Shtyp elementin e n-te ne sekuencen Shiqo Dhe Thuaj
void shiqoDheThuaj() {
	int numri;
	newl;
	std::cout << "Shtypni poziten e elementit ne sekuencen Shiqo Dhe Thuaj: ";
	std::cin >> numri;
	std::cout << "Nga elementi ne poziten paraprake " << std::endl << std::endl
		<< lookAndSay(numri - 1)
		<< std::endl << std::endl
		<< " rrjedh se elementi ne poziten e kerkuar eshte " << std::endl << std::endl
		<< lookAndSay(numri) << std::endl;
	newl;
}
//Shtyp numrin e bashketingelloreve ne nje fjali te dhene
void NumriBashktinglloreve() {
	char str[80];
	newl;
	std::cout << "Shtypni fjalen ne te cilen deshironi te numeroni bashketingelloret: ";
	std::cin >> str;
	std::cout << "Numri i bashketingelloreve ne fjalen \"" << str << "\" eshte ";
	int residue = removeSpaces(str,79);
	std::cout << totalConsonants(str, 79)-residue;
	newl;
}
//Shtyp elementin minimal dhe maksimal ne nje varg te dhene
void gjejMinDheMax() {
	const int ni = 5;
	int arry[ni];
	newl;
	for (int i = 0; i < ni;i++) {
		std::cout << "Elementi[" << i + 1 << "]= ";
		std::cin >> arry[i];
	}
	int n = sizeof(arry) / sizeof(arry[0]);
	std::cout << "Minimum element of array: " << getMin(arry, n) << "\n";
	std::cout << "Maximum element of array: " << getMax(arry, n) << "\n";
	newl;
}	
//Shtyp faktorielin e nje numri n
void faktorielIndirekt() {
	int n;
	newl;
	std::cout << "Shtypni numrin per te gjetur faktorielin: ";
	std::cin >> n;
	std::cout << "Faktorieli i numrit " << n << " eshte " << factorial_a;
	newl;
}	 
//Shtyp shumen e numrave natyror deri ne n
void ShumeSigma() {
	int n;
	newl;
	std::cout << "Shtypni numrin per te gjetur shumen: ";
	std::cin >> n;
	std::cout << "Shuma e numrave natyror deri tek numri i kerkuar " << n
		<< " eshte " << sum(n) << std::endl;
	newl;
}
