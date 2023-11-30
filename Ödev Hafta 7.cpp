TASARLAYICI
#include<iostream>
using namespace std;
int main()
{
    int sayilar []= {15, 17, 8, 6, 11, 3, 12, 19, 13, 10};
    int toplam=0, n=10;
    float ort;
    cout << "Dizi:"<< endl;
    for(int i=0;i<n; i++){
            cout<< sayilar [i] <<"";
    toplam+= sayilar[i];
    }
    cout<<"n\Dizinin toplami:" << toplam << endl;
    ort= (float) toplam/n;
    cout<<"Dizinin ortalamasi:"<< ort<< endl;

    return 0;
}
ANALİZCİ
#include<iostream>
#include <ctime>
using namespace std;
int main()
{
    int sayi;
    int tahmin= -1;
    int tahmin _sayisi= 0;
    int tahmin_limiti= 3
    bool Ofmyguesses= false;
    srand(time(void));
    sayi= rand ()% 9 + 1;
    cout << "Tahmininizi giriniz:";
    cin >> tahmin;
    tahmin_sayisi++;
}
    if(tahmin == sayi){
            cout << "Tebrik ederim,"<< tahmin_sayisi<<". yahmininiz doğru."<<endl;
    }else{
        cout << "Malesef, 3 hakkinizda da yanlış!" << endl;

        }


    return 0;
}
KODLAYICI
1. OYUN OYUNCU SIRASI:
  1 3 5 7 9
  11 13 15 17 19 
  2 4 6 8 10 
  12 14 16 18 20

  2. OYUN OYNCU SIRASI
  1 3 5 7 9
  11 13 15 17 19 
  2 4 6 8 10 
  12 14 16 18 20
  #include<iostream>
#include <ctime>
using namespace std;
int main()
{


   int mac1 [4][5]= {{1,3,5,7},
                    {{11, 13, 15 ,17, 19 },
                    {{2 ,4 ,6 ,8 ,10 },
                    {{12 ,14 ,16 ,18 ,20}},
                    }
 }
 int mac2 [4][5]={{1,3,5,7},
                    {{11, 13, 15 ,17, 19 },
                    {{2 ,4 ,6 ,8 ,10 },
                    {{12 ,14 ,16 ,18 ,20}},
    bool durum= true;
    int i, n;
    for(i=0; i<4; i++)

        for(n=0; n<5; n++)

        if(mac1[i][n]= mac2 [i][n])

        durum= false
        if(durum)
        cout <<"Siralama ayni";
    else
        cout <<"Siralama farkli";
    return 0;
}





  



