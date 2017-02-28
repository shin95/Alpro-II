
/**=========================================
Tugas Kelompok
---------------
Nama		:	Sindi Ibrahim Hidayattulloh
NPM			:	0616103028
Nama    : Andry Nugrohopangestu
NPM     : 0616103036
==========================================
Prodi		  :	Teknik Informatika
Class		  :	B
Fakultas	:	Universitas Widyatama
========================================**/


#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>
using namespace std;


int main () {

	struct
	{
		char maskapai[10];
		int jumlah_penerbangan;
		char tujuan [50];
	}
	flight;
	
	
	int sum, sum_all;
	char separator[10] = "00";
	char current [10];
	FILE* penerbangan = fopen("flight data separator.txt", "rt");
	
	sum_all = 0;

	if(feof(penerbangan)) {
    	cout<<"File Kosong,proses konsolidasi dibatalkan...!!!\n";
    }
   	else {
   		
   		
  	fscanf (penerbangan, "%s %d %s", flight.maskapai, &flight.jumlah_penerbangan, flight.tujuan);
  	
  	
  	do {
  		while(!feof(penerbangan) && strcmp(flight.maskapai,separator)==0) {
  			fscanf (penerbangan, "%s %d %s", flight.maskapai, &flight.jumlah_penerbangan, flight.tujuan);
		}
		
  		sum = 0;
   		strcpy(current, flight.maskapai);
   		 
		while (!feof(penerbangan) && strcmp(flight.maskapai,separator)!=0) {
			sum= sum + flight.jumlah_penerbangan;
		fscanf (penerbangan, "%s %d %s", flight.maskapai, &flight.jumlah_penerbangan, flight.tujuan);
		}
		cout<<"Jumlah penerbangan maskapai "<<current<<" "<<sum<<endl;
		sum_all= sum_all + sum;
	  } while (!feof(penerbangan));
	
	cout<<"Jumlah Seluruh Penerbangan " <<sum_all;
	} 
	fclose(penerbangan);
	return 0;
}
