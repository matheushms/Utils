#include <iostream>
#include <thread>
#include <fstream>
#include <string>
using namespace std;
using namespace std;
#define MUTEX_FILE "mutex.txt"

void safeData(char *arg);
void lock();
int main(int argc, char *argv[]){
	lock();
	return 0;
}


void lock(){	
	fstream inFile;
	int x;
	inFile.open(MUTEX_FILE,ios_base::in);
	if(!inFile){
		inFile.open(MUTEX_FILE);
		inFile << 0;
		
	}
	inFile >> x;
	inFile<< x+1;
	inFile.close();

}

/*
void safeData(char * arg ){
	mtx.lock();
	std::cout<< "aqui babão "<< arg << "\n";
	while(1);
	mtx.unlock();
	
}*/
