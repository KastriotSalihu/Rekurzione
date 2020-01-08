#include<iostream>
#include<cstdlib>
#include<string>
#include"RekurzioneHeaderMain.h"
#define vij std::cout<<"------------------------------------------------------------------------------------"
#define newl std::cout<<std::endl;
void printArray(int arr[], int n);

bool valid=true;
int main(){

 std::cout<<"Zgjedhni njerin prej opsioneve "<<(valid==true?"":"valide ")
 <<"te meposhtme me ane te indeksit te ofruar."<<std::endl;
char merr;
std::cout
<<"1.Gjej nese numri eshte palindrom                          ...(a)"<<std::endl
<<"2.Numerim se mbrapthi                                      ...(b)"<<std::endl
<<"3.Gjej nese numri eshte i thjeshte                         ...(c)"<<std::endl
<<"4.Gjej shumen e shifrave te nje numeri                     ...(d)"<<std::endl
<<"5.Gjej prodhimin e dy numrave                              ...(e)"<<std::endl
<<"6."<<std::endl
<<"7.Shtyp seri te numerave me inkrement te rastesishem       ...(g)"<<std::endl
<<"8.Numerim nga n ne 0 ne n                                  ...(h)"<<std::endl
<<"9.Rendit vargun                                            ...(i)"<<std::endl
<<"10.Sekuenca Shiqo dhe Thuaj                                ...(j)"<<std::endl
<<"11.Gjej numrin e zanoreve                                  ...(k)"<<std::endl
<<"12.Gjej min dhe max te vargut                              ...(l)"<<std::endl;
vij;
newl;
std::cin>>merr;
switch(merr){
case 'a':
    provoPalindrom();
    break;
case'b':
    NumeroSeMbrapthi();
    break;
case 'c':
    provoNumerThjesht();
    break;
case 'd':
    shumaEShifrave();
    break;
case'e':
    prodhim();
    break;
case'g':
    seri();
    break;
case 'h':
    numerimN0N();
    break;
case'i':
    renditVargun();
    break;
case'j':
    shiqoDheThuaj();
    break;
case'k':
    NumriZanoreve();
    break;
case'l':
    gjejMinDheMax();
    break;
default:
    valid = 0;
    goto f;
}

vij;
newl;
vij;
f:
    char perseritje = 'j';
    std::cout<<"A deshironi te ekzekutoni nje funksion tjeter? (P) ose (J) ";
    std::cin>>perseritje;
    perseritje = toupper(perseritje);
    if(perseritje=='P')
        main();

return 0;
}
void printArray(int arr[], int n){
	for (int i = 0; i < n; i++)
		std::cout << arr[i] << " ";
}


