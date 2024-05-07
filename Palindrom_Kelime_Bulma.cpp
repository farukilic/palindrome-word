#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main() {
	setlocale(LC_ALL, "Turkish");
	string kelime;
	cout << "Bir kelime giriniz:";
	cin >> kelime;
	vector<char> harfler;
	harfler = {};
	//Aşağıda harfler vector'üne aldığımız kelimenin harflerini tek tek ekliyoruz.
	for (char harf : kelime) {
		harfler.push_back(harf);
	}
	//Aşağıda tek tek kelimenin harflerini ayrı ayrı yazdırıyoruz.
	for (int i = 0; i < harfler.size(); i++) {
		cout << harfler[i] << " ";

	}
	//Aşağıda kelime'yi ters çevirip yeni string oluşturuyoruz.(ters_string)
	string ters_kelime;

	for (int i = kelime.size() - 1; i >= 0; --i) {
		ters_kelime += kelime[i];
	}
	//Aşağıda kelime ve ters_kelime'yi karşılarştırıyoruz.
	bool Palindrom = kelime == ters_kelime;
	if (Palindrom) {
		cout << "Kelime palindromdur." << endl;
	}
	else {
		cout << "Kelime palindrom değildir!" << endl;
	}
	return 0;


}