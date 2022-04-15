using namespace std;
class Output{
public :
void cetak(){
  ifstream infile;
          infile.open("api_data.txt");
          infile>>uang_saku;
          infile>>keluar;
          infile>>bulan;
          infile>>uang;
          infile>>topeng;
          infile>>totabungan;
  cout<<"========================================"<<endl;
  cout<<"          PROGRAM FINANSIAL           \n";
  cout<<"========================================"<<endl;
  cout<<"Uang bulan ini            :"<<"Rp."<<data_file[0]<<endl;
  cout<<"Pengeluaran bulan ini     :"<<"Rp."<<data_file[1]<<endl;
  cout<<"Total uang anda bulan ini :"<<"Rp."<<data_file[3]<<endl;
  cout<<"Total pengeluaran dalam "<<bulan<<" Bulan "<<data_file[4]<<endl;
  cout<<"Total Tabungan dalam "<<bulan<<" Bulan "<<data_file[5]<<endl;
  cout<<"========================================";
  
  
}
void getData(){
  ambil_data.open("api_data.txt");
  while(!ambil_data.eof()){
    ambil_data>>data_file[index];
    index += 1;
  }
  ambil_data.close();
}
private :
ifstream ambil_data;
string data_file[10];
int index=0;
int bulan;
long int uang_saku,uang,keluar,tabung,totabungan,topeng;
};