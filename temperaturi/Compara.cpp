#include "Compara.h"
#include <iostream>
#include <vector>

int theClosest()
{
	std::cout << "Introduceti numarul de temperaturi:\n";
	int numarT = 0;
	std::cin >> numarT;
	std::cout << "Introduceti temperaturile:\n";
	std::vector <int> stocare;
	std::vector <int> par;
	std::vector <int> impar;
	int temp = 0;
	for(int i=0;i< numarT ; i++)
	{
		std::cin >> temp;
		stocare.push_back(temp);
	}
	for (int k = 0; k < numarT; k++)
	{
		if (stocare.at(k) == 0)
		{
			return stocare.at(k);
			break;
		}
		else
		{
			if (stocare.at(k) > 0)
				par.push_back(stocare.at(k));
			else
				impar.push_back(stocare.at(k));
		}
	}
	int nrImpar = 0;
	int nrPar = 0;
	if(impar.size()>0)
	 nrImpar = impar.at(0);
	if(par.size()>0)
	 nrPar = par.at(0);
	for(int z=1;z<impar.size();z++)
	{
		if (nrImpar < impar.at(z))
			nrImpar = impar.at(z);
	}
	for (int z = 1; z < par.size(); z++)
	{
		if (nrPar > par.at(z))
			nrPar = par.at(z);
	}
	if (impar.size() > 0 && par.size() > 0) {
		if (nrImpar + nrPar == 0)
			return nrPar;
		if (nrImpar + nrPar > 0)
			return nrImpar;
		else
			return nrPar;
	}
	if (impar.size() == 0)
		return nrPar;
	if (par.size() == 0)
		return nrImpar;
}
