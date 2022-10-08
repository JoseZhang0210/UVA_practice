//11827 - Maximum GCD
#include<iostream>
#include<sstream>
using namespace std;

int gcd( int a, int b )
{
	if( b > a )
		return gcd( b, a );
	if( a == 0 )
		return b;
	else if( b == 0 )
		return a;
	else 
	{
		a %= b;
		return gcd( b, a );
	}	
}

int main()
{
	string inp;
	int n, maxgcd, temp;
	cin >> n;
	cin.ignore( 1000, '\n' );
	while( n-- )
	{
		maxgcd = 0;
		int ary[ 100 ] = { 0 };
		
		getline( cin, inp );
		stringstream ss(inp);
		int t = 0;
		while( ss >> temp )
		{
			ary[ t++ ] = temp;
		}


		for( int i = 0; i < t; i++ )
			for( int j = i + 1; j < t; j++ )
			{
				temp = gcd( ary[ i ], ary[ j ] );
				if( temp > maxgcd )
					maxgcd = temp;
			}
		cout << maxgcd << "\n";

	}
	return 0;
}