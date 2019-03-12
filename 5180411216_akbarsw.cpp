#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;
char nim[17], nama [20], jenis_kelamin[7], jurusan [8] ;
int main()
{
int data[5];
int i, total, rata, tmp;

                cout<<"Masukan Data Diri Mahasiswa "<<endl;
                cout<<"-----------------------------"<<endl;
                cout<<"Masukkan NIM :";gets(nim);
                cout<<"Masukkan Nama Lengkap :";gets(nama);
                cout<<"Masukkan Jenis Kelamin :";gets(jenis_kelamin);
                cout<<"Masukkan Jurusan :";gets(jurusan);
                cout<<"------------------------------"<<endl;
                cout<<"Masukkan Nilai Harian Mahasiswa : "<<endl;
                    total=0;
                    for(i=0; i<3; i++)
                    {
                        cout<<"Masukkan angka ke-"<<(i+1)<<" : "; cin>>data[i];
                        total = total+data[i];
                    }
                cout<<endl;
                cout<<"--------------------------------------------"<<endl;
                cout<<"Mahasiswa bernama "<<nama<<" mempunyai nilai sebagai berikut "<<endl;
                                for(i=0;i<3;i++){
                                cout<<"["<<(0)<<" "<<(i)<<" ] : "<< data [i]<<" "<<endl; }
                                cout<<"--------------------------------------------"<<endl;
                                cout<<"Rata-rata "<<nama<<":"<<endl;
                                {
                                    rata = total / 3;
                                    cout<<"Total : "<<total<<endl;
                                    cout<<"Rata - Rata : "<<rata<<endl;
                                }


    getch();

}
