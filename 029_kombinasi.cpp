#include <iostream>
using namespace std;
void printAllKLengthRec(char set[], string prefix,
                                    int n, int k)
{
    if (k == 0)
    {
        cout << (prefix) << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        string newPrefix;
        newPrefix = prefix + set[i];
        printAllKLengthRec(set, newPrefix, n, k - 1);
    }
}
void printAllKLength(char set[], int k,int n)
{
    printAllKLengthRec(set, "", n, k);
}

int main()
{
    char set1[] = {'a', 'b','c','d','e','f','g','h', 'i','j','k','l','m','n','o', 'p','q','r','s','t','u','v','w','x','y','z'};

    int N;
    cout << "jumlah karakter:" <<' ';
    while(cin >> N){
        if(N != -1){
        printAllKLength(set1,N, N)    ;
        cout << "jumlah karakter:" <<' ';
        }
        else if(N>26){
            break;
        }
        else{
            break;
        }

    }
	return 0; 
}
