#include <iostream>
#include <string>
using namespace std;

// C++ program Inheritance 
//yeni bir sinif olustur (base class)
class kiyafet {

	public :
		// Bu program kodunda string turunde iki degisken olusturuyorum (variables)
		string beden;
    	string marka;
	
				
};
//yeni bir sinif olustur (derived class)
class zara : public kiyafet {
	public :
		// Bu program kodunda integer turunde alti degisken olusturuyorum (variables)
		//toplam, hesap, fiyat array kulaniyorum
		int odeme, indirim, toplamalma, toplam[100], hesap[50], fiyat[100];
		
		
		
		// void fonksiyonu yapiyorum, input string 
		void setmarka(string a){
			marka = a;
		}
		// void fonksiyonu yapiyorum, input string 
		void setbeden(string b){
			beden = b;
		}
		
		// void fonksiyonu yapiyorum
		void ekran();
		void proses();
		void fis();
		void diskon();
		void odemeyap();
	
};


