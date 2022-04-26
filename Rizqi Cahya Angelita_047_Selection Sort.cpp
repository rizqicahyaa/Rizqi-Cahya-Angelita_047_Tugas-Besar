#include <iostream>

using namespace std;

int main()
{
	//deklarasi dan inisialisasi variabel
	//variabel max_elemen untuk batas / jumlah elemen dalam array 
	//variabel tmp dan min berfungsi untuk menampung nilai dari data-datanya
	int loop, max_elemen, min, nested_loop, tmp;
	int data[10];
	
	// perintah input jumlah elemen dalam array
	cout<<"Program Selection Sort \n";
	cout<<"\n";
	cout<<"Masukkan Jumlah Dalam Array : ";
	cin>>max_elemen;
	
	//perulangan input elemen ke dalam array. jadi, tiap kali programnya looping kita akan menginputkan nilai data sampai batas yang telah ditentukan
	for (loop=0; loop<max_elemen; loop++)
	{
		cout<<"Masukkan Element ke- " <<loop+1 <<" : ";
		cin>>data[loop];
	}
	
	//algoritma selection sort
	for (loop=0; loop<max_elemen-1; loop++)
	{
		min=loop;
		for(nested_loop=loop+1;nested_loop<max_elemen;nested_loop++)
		{
			 if(data[min]>data[nested_loop]) //untuk Ascending atau Descending tinggal Ubah Tanda “>” atau “<”
			{
				min=nested_loop;
			}
		}
		tmp=data[min];
		data[min]=data[loop];
		data[loop]=tmp;
	}
	
	//menampilkan elemen hasil sorting
	cout<<"Setelah Diurutkan Menjadi : \n";
	for(loop=0; loop<max_elemen; loop++)
	{
		cout<<data[loop]<<"\t";
	}
	return 0;
}
