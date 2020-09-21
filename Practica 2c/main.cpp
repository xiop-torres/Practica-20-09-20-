#include <iostream>

using namespace std;

long long es_primo(long long n)
{
	if (n % 2 == 0)
		return 0;		//ya que es par por lo tanto no es primo
	for (long long i = 3; i <= ((n / 2) + 1); i =i+2)	//sin pares,ignora los pares
	{
		if (n % i == 0)
			return 0;	//no primo
	}
	return 1;
}
long long encontrar_primo(long long n)
{
	long long factor = 0;
	for(long long i = 3; i <= n; i= i+ 2)
	{
		if (n % i == 0)
		{
			if (es_primo(i))
			{
				factor = i;
				cout << factor << endl;

			}
		}
	}
	return factor;
}
int main()
{
    long long x = 600851475143;
	cout << encontrar_primo(x);
    return 0;
}
