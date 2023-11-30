KATILIMCI ROZETİ
1)#include<iostream>
using namespace std;
int main()
{
    int dizi1 [5],dizi2 [5], dizi3 [5];
    int i;
    for(i=0; i<5; i++){
        cout << "1. Dizinin" << (i+1) << ". elemanları giriniz:";
     cin >> dizi1[i];
    }
    cout << endl;
    for (i=0; i<5; i++){
            cout  << "2. Dizinin" <<(i+1) << ". elemanları giriniz:";
    cin >> dizi2[i];

    }
    cout << endl;
    for (i=0; i<5; i++){
            dizi3[i]= dizi2[i]+ dizi1[i];
    cout << "3. Dizinin "<<(i+1) << ". elemanları :" << dizi3[i]<< endl;



    }


    }
2)#include<iostream>
using namespace std;
int main()
{
    int sayilar []= {19, 11,21, 13, 15};
    int i, maks, yer, n=5
    cout << "Dizi: " ;
    for(i=0; i< n; i++)
        cout << sayilar[i]<<"";
    maks= sayilar[0];
    yer=0;

    for (i=1; i<n; i++){

        if (maks < sayilar [i]){
                maks = sayilar [i];
        yer= maks;
        }

    }
    cout << "\nDizinin en buyuk elemani" << yer<< ".indisteki"<< maks;
    return 0;

    }

3)#include<iostream>
using namespace std;
int main()
{
    int dizi []= {12, 67, 78, 45, 78, 78, 32, 16, 16, 57};
    int i, j, n =10;
    for(i=0; i<5; i++){
        cout << " Dizi:" ;

    for (i=0; i<n; i++)
            cout << dizi [i] << "";
   cout << "\nEleman:";


    for (i=0; i<n-1; i++)
           if(dizi[i]== dizi [i+1])
            cout << dizi[i]<<"";


    }

4) #include<iostream>
using namespace std;
int main()
{
    int dizi [100];
    int i, boyut, tek=0, cift=0;
    cout << "Dizi boyutunu girin:";
    cin>> boyut;
    cout << "\nDizi elemanlarını girin\n:";
    for(i=0; i<boyut; i++){
        cout << "Elemanları girin dizi["<<i<<"]:";
    cin>> dizi[i];
    }
    for (i=0; i<boyut; i++){

        if (dizi[i]%2==0)
            cift++;
        else
        tek++;

    }
    cout << "\ncift eleman sayisi:" << cift;
    cout<< "\ntek eleman satisi:0 " << tek;
    return 0;
}
5)#include<iostream>
using namespace std;
int main()
{
    int sayilar [100];
    int i, bol5, n=0
    cout << "Dizi boyutunu girin: ";
    cin>> n;
    cout <<"\nDizi elamanlarini girin\n";
    for(i=0; i< n; i++){
        cout << "Elemanlari girin dizi ["<<i<<"]:";
    cin>> sayilar [i];
    }

    for (i=0; i<n; i++){

        if ( sayilar [i]%5==0){
                bol5++;


    }
    cout << "\n5 ile bolunebilen eleman sayisi:" << bol5;
    return 0;
}

