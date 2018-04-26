#include <iostream>
#include <map>
#include <string>
#include <utility>

void printRanking(std::map<int, std::pair<std::string, int>> rank)
{
	std::map<int, std::pair<std::string, int>>::iterator it;

	for (it = rank.begin(); it != rank.end(); it++)
	{
		std::cout << "En la posicion " << it->first << " tenemos a " << it->second.first << " con " << it->second.second << " puntos" << std::endl;
	}
}

void addPlayers(std::map<int, std::pair<std::string, int>>& rank)
{
	int num = 0;

	std::cout << "Quantos usuarios quieres anadir?:" << std::endl;
	std::cin >> num;
	std::cout << std::endl;

	for (int i = 1; i < num + 1; i++)
	{
		std::pair < std::string, int> alias;

		std::cout << "Pon el nombre de usuario sus puntos de la posicion " << i << ":" << std::endl;

		std::cin >> alias.first;
		std::cout << std::endl;
		std::cin >> alias.second;
		std::cout << std::endl;

		rank[i] = { alias.first, alias.second };
	}
}

int main()
{
	typedef std::pair<std::string, int> par;

	std::map<int, par> ranking;

	addPlayers(ranking);
	printRanking(ranking);

	system("pause");
	return 0;

}
