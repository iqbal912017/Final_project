#include <iostream>
#include <string>
#include "kasa.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;



int main(int argc, char** argv) {
	//Structure yapiyor
	zara zara1;
	//kasa.cpp'dan void yapiyor (Hepsi, setmarka'dan odemeyap'a kadar)
	zara1.setmarka("zara");
	zara1.setbeden("L");
	zara1.ekran();
	zara1.proses();
	zara1.fis();
	zara1.diskon();
	zara1.odemeyap();
	
	//geri cikmak yapiyor
	return 0;
}






// IQBAL LUTHFI
