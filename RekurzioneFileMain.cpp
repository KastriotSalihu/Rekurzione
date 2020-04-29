#include<iostream>
#include <cstdlib>
#include<string>
#include "RecurseHeader.h"
//Provon nese numri i dhene eshte palindrom
bool provoPalindrom() {
	bool test;
	int numeri;
	std::cout << "\nShtypni numerin qe deshironi te provoni a lexohet njejte edhe nga fundi: ";
	std::cin >> numeri;
	test = checkPalindrome(numeri);
	std::cout<< std::endl;
	return test;
}
//Provon nese numri i dhene eshte i thjeshte
bool provoNumerThjesht() {
	bool test;
	int numeri;
	
	std::cout << "\nShtypni numerin qe deshironi te provoni a eshte numer i thjeshte: ";
	std::cin >> numeri;
	test = isPrime(numeri);
	if (test)	LOG() << "Po";
	else		LOG() << "Jo";
	std::cout<< std::endl;
	return test;
}
//Gjen shumen e shifrave te nje numri
void shumaEShifrave() {
	int numeri;
	std::cout << "\nShtypni numerin shumen e shifrave te te cilit deshironi te gjeni: ";
	std::cin >> numeri;
	int rezultati = sum_of_digit(numeri);
	printf("Shuma e shifrave te numerit %d eshte %d\n", numeri, rezultati);
	std::cout<< std::endl;
}
//Gjen prodhimin e dy numrave
void prodhim() {
	int x, y;
	std::cout <<"\nShtypni numrat te cilet deshironi te shumezoni: " << std::endl
		  << "x= ";
	std::cin >> x;
	std::cout << std::endl << "y= ";
	std::cin >> y;
	std::cout << "Prodhimi i numerit " << x << " dhe " << y << " eshte " << product(x, y);
	std::cout<< std::endl;
}
//Shtyp nje varg numrash me ndryshim te rastesishem mes elementeve
void seri() {
	int n, m;
	std::cout << "\nShtypni numrin fillestar ne seri te numerave: ";
	std::cin >> n;
	m = rand() % 10;
	//printPattern(n, n, true);
	printPattern(n, m+1);
	std::cout<< std::endl;
}
//Numerim prej nje numri N ne ZERO ne N
void numerimN0N() {
	int numeri;
	std::cout << "\nShtypni numrin per fillim te numerimit: ";
	std::cin >> numeri;
	Numerim(numeri);
	std::cout<< std::endl;
}
//Sorton nje varg te dhene me metoden Insertion Sort
void renditVargun() {
	const int ni = 5;
	int arr[ni];
	std::cout<< std::endl;
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
	std::cout<< std::endl;
}
//Shtyp varg me Rekurzion
void ShtypVarg(){
    int arr[MAX];
    int p;
    std::cout << "\nShtypni numrin e elementeve qe deshironi te"
              << " ruani ne varg: ";
    std::cin>>p;
    for(int i = 0;i<p;i++){
        std::cout<< "Shtypni elementin "<<i+1<<": ";
        std::cin>>arr[i];
    }
    printA(arr,0,p);
    std::cout<< std::endl;
}
//Logarit fuqine e nje numri
void bazeNeEksponent(){
    int x,y;
    std::cout<< "\nShtypni vleren e bazes se fuqise: ";
    std::cin >> x;
    std::cout << "Shtypni vleren e eksponentit: ";
    std::cin >> y;
    std::cout << "Fuqia e kerkuar eshte: "<<calculPow(x,y);
    std::cout<< std::endl;
}
//Shtyp numrin e bashketingelloreve ne nje fjali te dhene
void NumriBashktinglloreve() {
	std::string str;
	std::cout << "\nShtypni fjalen ne te cilen deshironi te numeroni bashketingelloret: ";
	std::cin >> str;
	std::cin.clear();
	std::cin.ignore(INT_MAX,'\n');
	std::cout << "Numri i bashketingelloreve ne fjalen \"" << str << "\" eshte ";
        std::cout << totalConsonants(str, str.length());
	std::cout<< std::endl;
}
//Shtyp elementin minimal dhe maksimal ne nje varg te dhene
void gjejMinDheMax() {
	const int ni = 5;
	int arry[ni];
	std::cout<< std::endl;
	for (int i = 0; i < ni;i++) {
		std::cout << "Elementi[" << i + 1 << "]= ";
		std::cin >> arry[i];
	}
	int n = sizeof(arry) / sizeof(arry[0]);
	std::cout << "Minimum element of array: " << getMin(arry, n) << "\n";
	std::cout << "Maximum element of array: " << getMax(arry, n) << "\n";
	std::cout<< std::endl;
}
//Shtyp faktorielin e nje numri n
void faktorielIndirekt() {
	int n;
	std::cout << "\nShtypni numrin per te gjetur faktorielin: ";
	std::cin >> n;
	std::cout << "Faktorieli i numrit " << n << " eshte " << factorial_a(n);
	std::cout<< std::endl;
}
//Shtyp shumen e numrave natyror deri ne n
void ShumeSigma() {
	int n;
	std::cout << "\nShtypni numrin per te gjetur shumen: ";
	std::cin >> n;
	std::cout << "Shuma e numrave natyror deri tek numri i kerkuar " << n
		<< " eshte " << sum(n) << std::endl;
	std::cout<< std::endl;
}
