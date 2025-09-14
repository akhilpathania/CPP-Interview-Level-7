#include <iostream>
#include <thread>
using namespace std;

void AsyncExecutor(std::function<void(int)> callback){
    std::this_thread::sleep_for(std::chrono::seconds(2));
    int result = 42; // Simulated result
    callback(result);
}
int main(){

    int counter = 0;
    auto lambda = [&](int re){
        cout<<"Lambda called with value: "<<re<<endl;
        counter = re;
    };
    cout<<"Before async call, counter: "<<counter<<endl;
    AsyncExecutor(lambda);
    cout<<"After async call, counter: "<<counter<<endl;
    return 0;
}