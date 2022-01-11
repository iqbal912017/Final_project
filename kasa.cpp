#include <iostream>
#include <string>
//iomanip kutuphane kulaniyorum (Parametric manipulators) 
#include <iomanip>
#include "kasa.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;
// Bu program kodunda string turunde degisken olusturuyorum (variables)
string type[100];
// Bu program kodunda float turunde degisken olusturuyorum (variables)
float sonhesap;

// void fonksiyonu yapiyorum, kasa.h kutuphane'den, zara sinifin'de (class zara)
void zara::ekran() {
	
	//cout = metni ekrana gostermek icin
	cout<<"===========================\n";
    cout<<"Program C++ uygun kasiyer\n";
    cout<<"===========================\n\n";
	cout<<" marka adi: "<< marka<<endl ;
    cout<<"beden : "<<beden<<endl<<endl;
    cout<<"kac tane urun almak istedi :";
    
	//input 
	cin>> toplamalma;
	//cout = metni ekrana gostermek icin 
	//endl enter icin
	cout<<endl; 
	
}
// void fonksiyonu yapiyorum, kasa.h kutuphane'den, zara sinifin'de (class zara)
void zara::proses(){
	
	//C++ For Dongusu 
	//toplamalma kadar tekrar yapiyor
	for (int i=0;i<toplamalma;i++){
		//cout = metni ekrana gostermek icin
        cout<<i+1<<". urun\n";
    	cout<<"type adi (kiyafet, ceket, VB) : ";
    	//input
        cin>>type[i];
        //cout = metni ekrana gostermek icin
        cout<<"kac tane almak istedi : ";
        //input, bu urun kac tane almak istedi
        cin>>toplam[i]; 
		//cout = metni ekrana gostermek icin
        cout<<"fiyat tanesi : ";
        //input bu urun fiyat tanesi ne kadar
        cin>>fiyat[i]; 
		// bu urunu toplam fiyati
        hesap[i] = toplam[i]*fiyat[i];
        // hepsi urunler toplam fiyati
        sonhesap += hesap[i]; 
        //cout = metni ekrana gostermek icin
        //endl enter icin
        cout<<endl;
    }
}
// void fonksiyonu yapiyorum, kasa.h kutuphane'den, zara sinifin'de (class zara)
void zara::fis(){
	
	//cout = metni ekrana gostermek icin
	cout<<endl;
	cout<<"\n===============";
    cout<<"\nFIS (receipt)";
    cout<<"\n==============="<<endl;

    cout<<"\nNo Type  tane fiyat toplam\n";
    
    //C++ For Dongusu 
	//toplamalma kadar tekrar yapiyor
    for (int i=0; i<toplamalma; i++ ){
    	
    	//cout = metni ekrana gostermek icin (fisi gosteriyor)
    	//iomanip kutuphane kulaniyorum (Parametric manipulators) 
        cout<<i+1<<setw(8)<<type[i]<<setw(10)<<toplam[i]<<setw(12)<<fiyat[i]<<setw(12)<<hesap[i]<<endl;
    }
	
}
// void fonksiyonu yapiyorum, kasa.h kutuphane'den, zara sinifin'de (class zara)
// indirim hesaplama
void zara::diskon(){
	
	//if -> kosul saglandiginda bir islem yapilmasini saglar
	if(sonhesap>=100){
        indirim=0.06*sonhesap;
    //elseif -> if içerisindeki kosul saglanmadiginda baska bir kosula uydugunda kullanilir.
    }else if(sonhesap>= 50){
        indirim=0.04*sonhesap;
    }else if(sonhesap>= 25){
        indirim=0.02*sonhesap;
    //else -> if içerisindeki kosul saglanmadiginda bir islem yapilmasini saglar ve if‘ten hemen sonra kullanilmalidir.
    }else{
        indirim=0;
    }
}
// void fonksiyonu yapiyorum, kasa.h kutuphane'den, zara sinifin'de (class zara)
void zara::odemeyap(){
	
	//cout = metni ekrana gostermek icin (toplam, ve ne kadar odeme lazim gosteriyor)
	cout<<"Toplam : "<<sonhesap<<" TL"<<endl;
    cout<<"Indirim : "<<indirim<<" TL"<<endl;
    cout<<"Toplam Hesap : "<<sonhesap - indirim<<" TL"<<endl;
    cout<<"Para (TL) :";
    //input
    cin>>odeme;
    //cout = metni ekrana gostermek icin (iade gsoteriyor)
    cout<<"iade : "<<(odeme-(sonhesap-indirim))<<" TL"<<endl;
    
}
