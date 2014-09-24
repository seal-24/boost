#include <iostream>
#include <boost/asio.hpp>
#include <boost/thread/thread.hpp>
#include <boost/bind.hpp>
#include <iostream>
#include <boost/date_time/posix_time/posix_time.hpp>
using namespace boost;
using namespace std;
void print(const boost::system::error_code& /*e*/)
{
    std::cout << "Hello, world! ";
}


void printHello(int i ){

cout << "hello " << i <<  endl;


}

void test_asio_work()  
{  
    boost::asio::io_service ios;  
    // 增加一个work对象  
    boost::asio::io_service::work work(ios);  
  
    cout << "ios before";  
    ios.post(bind(printHello,1));
    // 当没有任务时，ios.run()也不会马上返回  
    ios.run();  
    cout << "ios end";  
}  

void printer(const boost::system::error_code & e ,boost::asio::deadline_timer * t)
  {
    cout << t->expires_at() << endl;
    t->expires_at(t->expires_at() + boost::posix_time::seconds(1));
    t->async_wait(bind(printer,boost::asio::placeholders::error,t));
 
  }


void test(){
boost::asio::io_service io;
boost::asio::deadline_timer t(io,boost::posix_time::seconds(1));
t.async_wait(bind(printer,boost::asio::placeholders::error,&t));

io.run();


}
int main()
{


test();
//    test_asio_work();
    // asio::io_service io;
    // boost::asio::io_service::work work(io);
    // io.post(bind(printHello,1));
    // // asio::deadline_timer t(io, boost::posix_time::seconds(5));
    // // t.async_wait(print);
    // thread thr(bind(&boost::asio::io_service::run,&io));
    // //thread thr(io.run());
    // cout << "hello " << endl;
    // io.post(bind(printHello,2));
    return 0;
}