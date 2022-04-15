using namespace std;
class Proses{
    public:
    void getData(){
          ifstream infile;
          infile.open("api_data.txt");
          infile>>uang_saku;
          infile>>keluar;
      infile>>bulan;
}
  void proses(){
    uang = bulan*uang_saku;
    totabungan = (uang_saku-keluar)*bulan;
    topeng = keluar*bulan;
    
  }
void toFile(){
  ofstream tofile;
  tofile.open("api_data.txt");
  tofile<<uang_saku<<endl;
  tofile<<keluar<<endl;
  tofile<<bulan<<endl;
  tofile<<uang<<endl;
  tofile<<topeng<<endl;
  tofile<<totabungan;
  
}
  
private :
int bulan;
long int uang_saku,uang,keluar,tabung,totabungan,topeng;

};