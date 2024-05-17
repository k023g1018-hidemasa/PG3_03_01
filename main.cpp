
#include <stdio.h>
#include<stdlib.h>
#include <iostream>//こいつ資料になかった
#include<list>


int main() {
	//std::list<変数型>変数名
	std::list<const char*>lst{"Tokyo","Kanda","Akihabara","Okachimacchi","Ueno","Uguisudani"
		,"Nippori","Tabata","Komagome","Komagome","Sugamo","Otsuka","Ikebukuro"
		,"Mejiro","Takadanobaba","Shin-Okubo","Sinjuku","Yoyogi","Harajuku","Shibuya","Ebisu" ,"Meguro"
	    ,"Gotanda","Osaki","Shinagawa","Takanawa-Gateway","Tamachi","Hamamatsucho","Simbashi","Yurakucho"};//こっちは要素が3つ数字は123

	//要素の参照はforでauto型のitrを作りlstのbegin(最初)から
	// itrからlistのend(最後)までitrは次の配列(りすと)に]
	//なんで＞＝じゃなく！＝なの？

	std::list<const char*>::iterator itr;
	printf_s("1970年\n");
	for (auto itr = lst.begin(); itr != lst.end(); ++itr) {
		//coutはiostreamをincして
		std::cout << *itr << "\n";
	}
	printf_s("\n2019年\n");
	for (auto itr = lst.begin(); itr != lst.end(); ++itr) {
		//coutはiostreamをincして
		if (*itr == "Tabata") {
			itr = lst.insert(itr, "Nishi-Nippori");
			std::cout << *itr << "\n";//ここに入れて表示してると田畑が引っかからない
			++itr;//ここで田畑に変更
		}
		std::cout << *itr << "\n";//後は普通に
	}
	printf_s("\n2022年\n");
	for (auto itr = lst.begin(); itr != lst.end(); ++itr) {
		//coutはiostreamをincして
		if (*itr == "Tamati") {
			itr = lst.insert(itr, "Takanawa-Gateway");
			std::cout << *itr << "\n";///ここに入れて表示してると田畑が引っかからない
			++itr;//ここで田畑に変更
		}
		
		std::cout << *itr << "\n";
	}




	return 0;
}