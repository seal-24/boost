#include <boost/interprocess/managed_shared_memory.hpp>
#include <boost/interprocess/mapped_region.hpp>
#include <cstring>
#include <iostream>
using namespace boost::interprocess;
using namespace std;
int main(){
 try{
 shared_memory_object shm(create_only,"hello",read_write);
 shm.truncate(256);
 mapped_region mmap(shm,read_write);
 std::strcpy(static_cast<char*>(mmap.get_address()),"hello shared mem");
}catch(interprocess_exception &e){

	cout << e.what() << endl;
}


return 0;

}