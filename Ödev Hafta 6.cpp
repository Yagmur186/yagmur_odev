ANALİZCİ:
#include<iostream>    Tahminim:0  Doğru cevap(çıktı): 0

using namespace std;

int main()
{

 for (int i = 0; i>10; i++)

cout << "merhaba" << endl;


}

KODLAYICI 1:
#include<iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{


 int sayi1, sayi2;
 srand(time(0));
 sayi1 = rand();
 sayi2 = rand();
 if(sayi1>sayi2)
    cout << sayi1;
 else
    cout << sayi2;
}
KODLAYICI 2:
#include<iostream>

using namespace std;

int main()
{


 for(int numara=5; numara<25;numara++)
    if (numara%3 == 0)
     cout << numara <<endl;
}

