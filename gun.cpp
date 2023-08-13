#include <iostream>
using namespace std;

class Gun {
	private:
 	   int ammo;
 	   int maxAmmo;

	public:
	    Gun(int maxAmmo) {
	        this->ammo = maxAmmo;
 	       this->maxAmmo = maxAmmo;
  	  }

   	 void shoot() {
     	   if (ammo > 0) {
     	       ammo--;
    	        cout << "Bang" << endl;
  	      } else {
   	         cout << "Out of ammo." << endl;
   	     }
  	  }

  	  void reload() {
   	     ammo = maxAmmo;
   	     cout << "Reloading." << endl;
   	 }
	};



	int main() {

   	 Gun gun(6);

     for (int i = 0; i < 10; i++) {
        gun.shoot(); // 6 Bang 4 Out of ammo.
    }

   	 //gun.shoot(); // "Out of ammo."
   	 gun.reload(); // "Reloading."
   	 gun.shoot(); // "Bang"
   	 return 0;

}