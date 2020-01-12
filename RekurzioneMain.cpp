#include<iostream>
#include<string>
#include"RekurzioneHeaderMain.h" 
#define vij std::cout<<"------------------------------------------------------------------------------"
#define newl std::cout<<std::endl;
void printArray(int arr[], int n);
void ofroOpsionet(bool valid = true);
void provoValiditeti(char merr);
void ekzekutoOpsionet(char merr); 
void perseritje();	   
char merr;
bool valid = true; 
int main() {
	ofroOpsionet();
	return 0;
}
//Shtyp opsionet e mundshme
void ofroOpsionet(bool valid) {
	std::cout << "Zgjedhni njerin prej opsioneve " << (valid == true ? "" : "valide ")
		<< "te meposhtme me ane te indeksit te ofruar." << std::endl;	
	std::cout
		<< "1.Gjej nese numri eshte palindrom ............................(a)" << std::endl
		<< "2.Numerim se mbrapthi ........................................(b)" << std::endl
		<< "3.Gjej nese numri eshte i thjeshte ...........................(c)" << std::endl
		<< "4.Gjej shumen e shifrave te nje numeri .......................(d)" << std::endl
		<< "5.Gjej prodhimin e dy numrave ................................(e)" << std::endl
		<< "6.Gjej shumen e numrave natyror ..............................(f)" << std::endl
		<< "7.Shtyp seri te numerave me inkrement te rastesishem .........(g)" << std::endl
		<< "8.Numerim nga n ne 0 ne n ....................................(h)" << std::endl
		<< "9.Rendit vargun ..............................................(i)" << std::endl
		<< "10.Sekuenca Shiqo dhe Thuaj ..................................(j)" << std::endl
		<< "11.Gjej numrin e bashketingelloreve ..........................(k)" << std::endl
		<< "12.Gjej min dhe max te vargut ................................(l)" << std::endl;
	vij;
	newl;
	std::cin >> merr;		   //Merr zgjedhjen e perdoruesit
	merr = tolower(merr);
	provoValiditeti(merr);
}	   	
//Provon nese karakteri i shtyper eshte valid
void provoValiditeti(char merr) {
	if (merr == 'a' || merr == 'b' || merr == 'c' || merr == 'd' || merr == 'e' || merr == 'f'
		|| merr == 'g' || merr == 'h' || merr == 'i' || merr == 'j' || merr == 'k' || merr == 'l')
		ekzekutoOpsionet(merr);
	else {
		valid = false;
		if (vf.cls1 == true)
			system("cls");
		ofroOpsionet(valid);
	}
}		
//Varesisht prej karakterit ekzekutohet funksioni perkates
void ekzekutoOpsionet(char merr) {
	switch (merr) {
	case'a':	provoPalindrom();	break;
	case'b':	NumeroSeMbrapthi();   break;
	case'c':	provoNumerThjesht();	break;
	case'd':	shumaEShifrave();	break;
	case'e':  	prodhim();   break;
	case'f':	ShumeSigma();	break;
	case'g':   	seri();   break;
	case'h':  	numerimN0N();	break;
	case'i':   	renditVargun();   break;
	case'j':   	shiqoDheThuaj();   break;
	case'k':   	NumriBashktinglloreve();   break;
	case'l':   	gjejMinDheMax();   break;
	case'm':    faktorielIndirekt();   
	}
	vij;	newl;	vij;	newl;
	perseritje();
}		
//Nese kerkohet, perserit programin prej fillimit
void perseritje() {
	char perseritje = 'j';
	std::cout << "A deshironi te ekzekutoni nje funksion tjeter? (P) ose (J) ";
	std::cin >> perseritje;
	perseritje = toupper(perseritje);
	if (perseritje == 'P') {
		if (vf.cls == true)
			system("cls");
		ofroOpsionet();
	}
}									 
void printArray(int arr[], int n) {
	for (int i = 0; i < n; i++)
		std::cout << arr[i] << " ";
}		
