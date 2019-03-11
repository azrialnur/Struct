#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<windows.h>

using namespace std;
int i,j,a=1,b=1;
struct data{
string nama,nim,jenis,jurusan;

}mhs[100];
float nilai1,nilai2,nilai3,rata;

void input_mhs(data)
{
    int n;

    cout<<"Masukkan jumlah Mahasiswa : ";cin>>j;
    cout<<endl;
    for(i=1;i<=j;i++){
    cout<<"data ke- "<<b++<<endl;
    cout<<"Masukkan Nama Mahasiswa\t :";cin>>mhs[i].nama;
    cout<<"Masukkan NIM\t :";cin>>mhs[i].nim;
    cout<<"Masukkan Jenis Kelamin(L/P)\t :";cin>>mhs[i].jenis;
    cout<<"Masukkan jurusan Mahasiswa\t :";cin>>mhs[i].jurusan;
    cout<<"Masukkan Nilai harian ke 1 = ";cin>>nilai1;
    cout<<"Masukkan Nilai harian ke 2 = ";cin>>nilai2;
    cout<<"Masukkan Nilai harian ke 3 = ";cin>>nilai3;

}
}


void maks_mhs(data)
{
    float rata,nilai1,nilai2,nilai3;

    cout<<"Rata-Rata nilai : "<<rata<<endl;
    rata=(nilai1+nilai2+nilai3)/3;

}


void cari_mhs(data)
{
    char bil;
    int cari,nim;
    cout<<"\n\n\n\n\n========================================================================="<<endl;
    cout<<"Mencari NIM"<<endl;
    cout<<"masukkan NIM Yang dicari = ";cin>>bil;
    if(bil==nim){cout<<"data ditemukan"<<endl;}
    else{cout<<"data tidak ditemukan"<<endl;}


}

int main()
{
    char awal,k;
    int pilih;
    awal:
     cout<<"\n\n\n\n\n=============================PROGRAM STRUKTUR DATA============================="<<endl;

      cout<<"\n================================ PILIHAN MENU =================================";
  cout<<"\n1. Input data";
  cout<<"\n2. Rata-rata maksimal";
  cout<<"\n3. Cari NIM";
  cout<<"\n0. Keluar";
  cout<<endl;

  cout<<"Masukkan Pilihan : ";
  cin>>pilih;
  if(pilih==1){input_mhs(mhs[20]);goto awal;}
  if(pilih==2){maks_mhs(mhs[20]);goto awal;}
  if(pilih==3){cari_mhs(mhs[20]);goto awal;}
  if(pilih==0)
    {
    cout<<"\n\n\n\n\n\n\n APAKAH ANDA INGIN KELUAR DARI PROGRAM INI?\n\n";
    cout<<"     [Y]                   [T]                 \n"<<endl;
     cout<<"        ";cin>>k;
    if(k=='y'||k=='Y')
    {cout<<"\n\n\n\n\n******************************* PROGRAM SELESAI *******************************";}
    if(k=='t'||k=='T')
           {goto awal;}
    }
  else
   {cout<<"Pilihan 1-5";getch();goto awal;}


    }
