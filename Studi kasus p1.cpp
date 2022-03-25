#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
main(){
	char pembelian;
	int kode,porsi,jumlah,banyak;
	long int total,diskon,akhir,bayar,harga,duit,kembalian;
	atas:
		cout<<" ====================== MENU MAKANAN ======================="<<endl;
		cout<<"  1. Ayam Goreng "<<endl;
		cout<<"  2. Ayam Bakar" <<endl;
		cout<<"============================================================"<<endl;
		cout<<"Jumlah Menu Yang Dipesan = ";
		cin>>banyak;
		jumlah=1;
		bayar=0;
		for(jumlah=1;jumlah<=banyak;jumlah++){
			ulang:
				cout<<"Masukkan kode menu: ";
				cin>>kode;
		if(kode==1){
			cout<<" Nama Makanan = Ayam Goreng\n";
			cout<<" Harga        = Rp.17000,-\n"<<endl;
			cout<<" Jumlah Porsi = ";
			cin>>porsi;
			harga = 17000;
			total = harga*porsi;
			cout<<"Total harga = Rp"<<total<<endl;
	}	else if(kode==2){
			cout<<" Nama Makanan = Ayam Bakar\n";
			cout<<" Harga        = Rp. 21000,-\n"<<endl;
			cout<<" Jumlah Porsi = ";
			cin>>porsi;
			harga=21000;
			total=harga*porsi;
			cout<<" Total Harga 		= Rp"<<total<<endl;
	}	else{
		cout<<"Invalid Number";
		goto ulang;
	}
			bayar = bayar + total;
	}		cout<<" Total Bayar		= Rp"<<bayar<<",-"<<endl;
			cout<<" Masukan Pembayaran	= Rp";cin>>duit;
		if(bayar>45000){
			diskon = bayar*0.10;
			cout<<"Kamu dapat diskon 10%\n";
	}	else if(bayar<45000){
			cout<<"Tidak dapat diskon\n";
			diskon = 0;
	}
			akhir=bayar-diskon;
			kembalian=duit-akhir;
			cout<<"Kamu Dapat Diskon      = Rp"<<diskon<<",-"<<endl;
			cout<<"Cash Back              = Rp"<<kembalian<<",-"<<endl;
			cout<<"           TERIMA KASIH"<<endl;
			cout<<"Pembelian Baru [y/t] ";cin>>pembelian;
		if(pembelian=='y'||pembelian=='y')
		goto atas;
		else
			cout<<"Selamat Tinggal\n";
    }
