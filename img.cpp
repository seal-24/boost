#include "opencv2/opencv.hpp"
#include <boost/archive/binary_oarchive.hpp>
#include <boost/archive/binary_iarchive.hpp>
#include <fstream>
#include "cvmat_serialization.h"
using namespace std;
void test()
{
   Mat img = imread("/home/xunw/x/img.jpg");
    
  std::ofstream ofs("matrices.bin", std::ios::out | std::ios::binary);

  { // use scope to ensure archive goes out of scope before stream

    boost::archive::binary_oarchive oa(ofs);
    oa << img;
  }

  ofs.close();
  Mat imgOut;
  ifstream inf("matrices.bin",std::ios::binary);
  {
   boost::archive::binary_iarchive ia(inf);
   ia >> imgOut;
  }
  
  imshow("img",imgOut);
  waitKey(0);

}
int main()
{
   test();	
}