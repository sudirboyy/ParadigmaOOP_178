#pragma once
#ifndef MANUSIA_H
#define MANUSIA_H
#include <iostream>;
#include "jantung.h"
using namespace std;

class manusia {
public:
	string nama;
	jantung varJantung;

	manusia(string pName) :nama(pName) {
		cout << nama << "hidup\n";
	}
	~manusia() {
		cout << nama << "mati\n";
	}
};
#endif