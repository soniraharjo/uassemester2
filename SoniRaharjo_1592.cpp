#include <iostream>
#include <cstring>
#include <iomanip>

using namespace std;

class BarangDagangan

{

private:

char Kode[10], Nama[20];

int HargaBarang, Qty, HargaJual;

public:

BarangDagangan();

void InputData(char *, char *, int, int);

void HitungHargaJual();

void TampilData();

};

BarangDagangan::BarangDagangan()

{

//      Kode=””;

//      Nama=””;

HargaBarang=Qty=HargaJual=0;

}

void BarangDagangan::InputData(char *k, char *n, int h, int q)

{

strcpy(Kode,k);

strcpy(Nama,n);

HargaBarang=h;

Qty=q;

}

void BarangDagangan::HitungHargaJual()

{

HargaJual=HargaBarang*Qty;

}

void BarangDagangan::TampilData()

{

cout << "\nHarga Jual";

cout << "\n=========================================================================";

cout << "\n|"<<setw(10)<<"Kode |"<< setw(25)<<"NAMA |"<<setw(15)<<"Harga Barang |"<<setw(7)<<"Qty |"<<setw(15)<<"Harga Jual |" << endl;;

cout << "=========================================================================\n";

cout << "|" <<setw(8)<<Kode<<" |" <<setw(23)<<Nama<<" |"<<setw(13)<<HargaBarang<<" |"<<setw(5)<<Qty<<" |"<<setw(13)<<HargaJual<<" |";

cout << "\n=========================================================================\n";

}

int main()

{

cout << "=============================\n";

cout << "Harga Barang Dagangan\n";

cout << "=============================\n\n";

 BarangDagangan vBarangDagangan;

char x[10], y[20];

int z, i;

cout << "Input Kode = ";

cin >> x;

cout << "\nInput Nama = ";

cin >> y;

cout << "\nInput Harga Barang = ";

cin >> z;

cout << "\nInput Quantity = ";

cin >> i;

cout << "\n";

vBarangDagangan.InputData(x,y,z,i);

vBarangDagangan.HitungHargaJual();

vBarangDagangan.TampilData();

system("pause");

}
