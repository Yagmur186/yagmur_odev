#include <iostream>
#include <string>
using namespace std;
class Sunucu{
public:
string adsoyad;
int sehir;
int toplampuan;
string yarismaci(int sayi_3)
int yarismaci1=adsoyad,sehir;
int yarismaci2=adsoyad,sehir;
int yarismaci3=adsoyad,sehir;

Sunucu(string xadsoyad, int ysehir, int ztoplampuan){
 adsoyad = xadsoyad;
 sehir = ysehir;
 toplampuan = ztoplampuan;

}
};
int main(){
    Sunucu sunucum;
    sunucum.sunucuadsoyad="Ali";
    sunucum.sunucusehri="Niğde";
    sunucum.sunucutoplampuan="25";
cout << sunucum.sunucuadsoyad << ",adsoyad: " << sunucum.sunucusehir << ",şehri: " << sunucum.sunucutoplampuan << ",toplampuanı:";

return 0;
}
