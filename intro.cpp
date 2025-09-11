#include <iostream> 
#include <thread>

using namespace std;
int main() 
{
     int time;

     for(time = 10 ; time >= 0 ; time -= 1)
     {
          cout << time << " seconds remaining"<< endl;
          this_thread::sleep_for(std::chrono::seconds(1));

     }
     cout << "TIME IS UP!!" << endl;

     return 0; 
}