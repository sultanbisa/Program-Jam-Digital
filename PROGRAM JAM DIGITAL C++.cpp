#include <iostream>
#include <ctime>
#include <thread>
#include <chrono>
#include <iomanip>

using namespace std;

int main() {
	time_t sekarang;
	tm* waktu;
	
	cout<<"================="<<endl;
	cout<<"     PROGRAM JAM DIGITAL     "<<endl;
	cout<<"================="<<endl;
	
	while (true) {
		time(&sekarang);
		waktu = localtime(&sekarang);
		
		cout<<"\rWaktu: "
		<<setfill('0')
		<<setw(2) << waktu->tm_hour << ":"
		<<setw(2) << waktu->tm_min  << ":"
		<<setw(2) << waktu->tm_sec 
		<<flush;
		
		this_thread::sleep_for(chrono::seconds(1));
	}
	return 0;
}
