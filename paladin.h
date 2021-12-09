//paladin
#include <iostream>
#include <ctime>
using namespace std;
class paladin {
private:
	string name;
	int hp;
	int damage;
	int armor;
	int critical;
public:
	paladin(string  fname, int fhp, int fdamage, int farmor, int fcritical) {
		name = fname;
		hp = fhp;
		damage = fdamage;
		armor = farmor;
		critical = fcritical;
	}
	~paladin() {
		cout << "paladin destroyed\n";
	}
	string getname() { return name; }
	int gethp() { return hp; }
	int getdamage() { return damage; }
	int getarmor() { return armor; }
	int getcritical() { return critical; }
	void setname(string fname) { name = fname; }
	void sethp(int fhp) { hp = fhp; }
	void setdamage(int fdamage) { damage = fdamage; }
	void  setarmor(int farmor) { armor = farmor; }
	void setcritical(int fcritical) { critical = fcritical; }
	void printpaladin() {
		cout << "paladin" << ' ' << name << ' ' << "has" << ' ' << hp << ' ' << "hp\n";
	}
};
