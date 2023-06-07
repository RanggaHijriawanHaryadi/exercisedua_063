#include <iostream>
using namespace std;

class bidangDatar{
private:
	int x;
public:
	bidangDatar() {
		x = 0;
	}
};
};
class Lingkaran {
private:
	int x;
public:
	int r;
	virtual void input(int r) {
		cout << "masukkan jejari" << endl;
		cin >> r;
		int r(6);
	}
	virtual float Luas(int a) {
		int Luas;
		cout << "masukkan luas lingkaran" << endl;
		cin >> Luas;
		int Luas(113.04);
		return 0;

	}
	virtual float Keliling(int a) {
		int keliling;
		cout << "masukkan keliling" << endl;
		cin >> keliling;
		int keliling(37.68);
		return 0;
	}
	void setX(int a) {
		this->x = a;
	}
	int getX() {
		return x;
	};
};
class Bujursangkar {
private:
	int x;
public:
	int s;
	virtual void input() {
		cout << "masukkan sisi" << endl;
		cin >> s;
		this->x = s;
	}
	virtual float Luas(int a) {
		int Luas;
		cout << "masukkan luas bujursangkar" << endl;
		cin >> Luas;
		int Luas(25);
		this->x = Luas;
		return 0;
	}
	virtual float Keliling(int a) {
		int K;
		cout << "masukkan keliling bujursangkar" << endl;
		cin >> K;
		this->x = K;
		return 0;
	}
	void setX(int a) {
		this->x = a;
	}
	int getX() {
		return x;
	};
};


class Lingkaran:public bidangDatar{};


class Bujursangkar:public bidangDatar{};

int main(){
	bidangDatar();
	Lingkaran();
	Bujursangkar();

}