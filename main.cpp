
#include <stdio.h>
#include<stdlib.h>
#include <iostream>//���������ɂȂ�����
#include<list>


int main() {
	//std::list<�ϐ��^>�ϐ���
	std::list<const char*>lst{"Tokyo","Kanda","Akihabara","Okachimacchi","Ueno","Uguisudani"
		,"Nippori","Tabata","Komagome","Komagome","Sugamo","Otsuka","Ikebukuro"
		,"Mejiro","Takadanobaba","Shin-Okubo","Sinjuku","Yoyogi","Harajuku","Shibuya","Ebisu" ,"Meguro"
	    ,"Gotanda","Osaki","Shinagawa","Takanawa-Gateway","Tamachi","Hamamatsucho","Simbashi","Yurakucho"};//�������͗v�f��3������123

	//�v�f�̎Q�Ƃ�for��auto�^��itr�����lst��begin(�ŏ�)����
	// itr����list��end(�Ō�)�܂�itr�͎��̔z��(�肷��)��]
	//�Ȃ�Ł�������Ȃ��I���Ȃ́H

	std::list<const char*>::iterator itr;
	printf_s("1970�N\n");
	for (auto itr = lst.begin(); itr != lst.end(); ++itr) {
		//cout��iostream��inc����
		std::cout << *itr << "\n";
	}
	printf_s("\n2019�N\n");
	for (auto itr = lst.begin(); itr != lst.end(); ++itr) {
		//cout��iostream��inc����
		if (*itr == "Tabata") {
			itr = lst.insert(itr, "Nishi-Nippori");
			std::cout << *itr << "\n";//�����ɓ���ĕ\�����Ă�Ɠc��������������Ȃ�
			++itr;//�����œc���ɕύX
		}
		std::cout << *itr << "\n";//��͕��ʂ�
	}
	printf_s("\n2022�N\n");
	for (auto itr = lst.begin(); itr != lst.end(); ++itr) {
		//cout��iostream��inc����
		if (*itr == "Tamati") {
			itr = lst.insert(itr, "Takanawa-Gateway");
			std::cout << *itr << "\n";///�����ɓ���ĕ\�����Ă�Ɠc��������������Ȃ�
			++itr;//�����œc���ɕύX
		}
		
		std::cout << *itr << "\n";
	}




	return 0;
}