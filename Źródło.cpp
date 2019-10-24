#include <iostream>

int main()
{
	double poczatkowy=100;
	double dafne=poczatkowy, cleo=poczatkowy;
	int lata = 0;
	double dafne_p = 0.1, cleo_p = 0.05;
	while (cleo <= dafne)
	{
		lata++;
		dafne = dafne + (dafne_p*poczatkowy);
		cleo = cleo*(1 + cleo_p);
		//std::cout << "Dafne: " << dafne << ", Cleo: " << cleo << std::endl;
	}
	std::cout << "cleo zarobi wiecej po " << lata << "latach, a jej kapital bedzie wynosil " << cleo << "zl. kapidal Dafne wynosi " << dafne;
	std::cin.get();

	return 0;
}