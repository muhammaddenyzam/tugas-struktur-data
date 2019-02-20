#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

struct Buku
{
    char nm [50], peng[50], kd[4], thn[4], hrg[10];
 
};

Buku bku[20 ];

unsigned int x,y;
void tambah ()
{
	
	cout<< "masukkan jumlah buku :  ";
	cin >>x;
	for (y=0;y<x;y++)
	{
		cout<<"\n============================="<<endl;
		cout<<"buku yang ke-"<<y+1<<endl;
		cout<<"============================="<<endl;
		
		cout<<"kode buku		:";cin>>bku[y].kd;
		cout<<"nama buku		:";cin>>bku[y].nm;
		cout<<"tahun terbit		:";cin>>bku[y].thn;
		cout<<"pengarang		:";cin>>bku[y].peng;
		cout<<"harga			:";cin>>bku[y].hrg;
		cout<<" "<<endl;	
	}system("cls");
}

void tampil ()
{
	cout << "No. " << "Kode Buku\t" << "Nama Buku\t" << "Tahun Terbit\t" << "Pengarang\t" << "Harga Buku\n" << endl;
			for (y=0;y<x;y++)
			{
				cout << y+ 1 << ". " << "\t" <<bku[y].kd << "\t" <<bku[y].nm << "\t\t" <<bku[y].thn << "\t\t" <<bku[y].peng << "\t\t" << bku[y].hrg<<"\n"<< endl;
			}
			cin.get();cout<<"\n"<<endl;
}

void ubah()
{
	unsigned int z;
    cout << "Edit Data Buku yang ke-";
    cin >> z;
    z=z-1;
    cout<<"kode buku		:";cin>>bku[z].kd;
	cout<<"nama buku		:";cin>>bku[z].nm;
	cout<<"tahun terbit		:";cin>>bku[z].thn;
	cout<<"pengarang		:";cin>>bku[z].peng;
	cout<<"harga			:";cin>>bku[z].hrg;
	cout<<" "<<endl;
 	tampil();
    system("cls");
	
}

void hapus ()
{
    int z,a;
    cout << "Hapus Data Buku ke-";
    cin >> z;
    z=z-1;
    y--;
    for (a=z;a<y;a++)
    {
       bku[y]=bku[y-1];
    }
    x=x-1;
    cout << "\t\t\tData Buku sudah Berhasil Dihapus"<<endl;
    getch();
	system("cls");

}

int main()
{
	int pil;   
	menu :
    cout << "1. Masukan Data Buku"<<endl;
    cout << "2. Hapus Data Buku"<<endl;
    cout << "3. Ubah Data Buku "<<endl;
    cout << "4. Tampilkan Data Buku"<<endl;
    cout << "99. Keluar"<<endl<<endl;
    cout << "Masukan Pilihan : ";
	cin >> pil;
	system("cls");

    switch (pil)
    {
        case 1 :
        	tambah ();
			goto menu;
        	break;

        case 2 :
        	hapus();
        	goto menu;
        	break;

		case 3 :
			ubah();
			goto menu;
			break;
        
        case 4 :
        	tampil();
        	goto menu;
        	cout<<"\n"<<endl;
			break;

        case 99 :
            cout<<"Terimakasih"<<endl;
        break;

        default:
            cout << "Pilihan anda tidak ada! Silahkan Coba lagi"<<endl;
    }
    system("cls");
	return 0;
}
