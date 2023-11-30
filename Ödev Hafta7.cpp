Ek görev
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
    int z,x,y,a=5;
    cout << "Dizi:";
    for(z=0; z< a; z++)
        cout << sayilar[z]<<"";
    x = sayilar[0];
    y=0;

    for (z=1; z<a; z++){

        if (x < sayilar [z]){
                x = sayilar [z];
        y= z;
        }

    }
    cout << x<< "ve" << y;

    }
3)

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
