#include <iostream>
	using namespace std;
	int main()
	{
		int a[1000000];
		int n;
		cin >> n;
		for (int i=0; i<n; i++)
		cin >> a[i];
		for (int i=0; i<n-2; i++){
			for (int j=i+1; j<n-1; j++){
				for (int h=j+1; h<n; h++){
					if(a[i]+a[j]+a[h]==0)
					cout << "(" << a[i] << "," << a[j] << "," << a[h] << ")" << endl;
				}
				
			}
		}
		return 0;
	}

 

