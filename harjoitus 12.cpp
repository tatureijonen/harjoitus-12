/* 
TATU REIJONEN - IIO14S2

Harjoitus 12 (Palautus vko 44)

Tee ohjelma, joka kysyy k�ytt�j�lt� kokonaisluvun v�lilt� 1 - 9 ja
tulostaa vastauksen perusteella seuraavan kuvion(jos vastaus on 6) :

1
22
333
4444
55555
666666

Jokainen numero tulee tulostaa toistorakenten avulla erikseen lauseella :
cout << rivinro;
*/

#include <iostream>
using namespace std;
void main()

{

	int luku;
	int rivi = 1;
	int sarake;
	
	cout << "Anna kokonaisluku valilta 1-9";
	cin >> luku;
	
	if (luku < 10 && luku > 0)
	{



		while (rivi <= luku)
		{
			for (sarake = 1; sarake <= rivi; sarake++)
				cout << rivi;
			rivi++;
			cout << endl;
		}

	}
	else
		cout << "Ohjelmaa ei voida suorittaa";



	
}


