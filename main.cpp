// 
// MAIN_CPP
//
#include "Controller.cpp"

int main(){
	Controller* controller = new Controller();
	
	controller->start();
	 
	controller->~Controller();
}
