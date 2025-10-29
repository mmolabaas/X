#include <iostream>
#include <string>
using namespace std ;

class student {	
    //protected:    	
	private:
		int id = 0;
		int mark = 0;
		string name = "";
		
	
	public:	
	 	void setdata (int i, int m, string n) {
		    this->id = i ;
			this->mark = m;
			this-> name = n ;
        }
	 	void showinfo () {
			cout << "name: " << name << endl ;
			cout << "id: " << id << endl ;
			cout << "mark: " << mark << endl ;
		}
};

int main (){
	student s1, s2;
	s1.setdata(23, 90, "Ali");
	s2.setdata(30, 89, "Abbas");
	

	s1.showinfo();
	s2.showinfo();
	
	return 0;
}