using namespace std;
class Input{
        public : 
            void cetak(){                        
              cout<<"========================================"<<endl;
              cout<<"===========UANG SAKU PERBULAN==========="<<endl;
              cout<<"Uang Saku      : ";
              cin>>uang_saku;
              cout<<"Jumlah Pengeluaran : ";
              cin>>keluar;
              cout<<"Jumlah Bulan   : ";
              cin>>bulan;
  
            }
            void toFile(){
              ofstream tofile;
              tofile.open("api_data.txt");
              tofile<<uang_saku<<endl;
              tofile<<keluar<<endl;
              tofile<<bulan;
             
            }

        private :
        int bulan;
        float uang_saku,uang,keluar,tabung,totabungan,topeng;
};
