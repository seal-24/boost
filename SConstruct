Program('img',"img.cpp",CPPPATH=["/usr/local/include","/home/xunw/workspace/boost","/home/xunw/x/software/boost_1_56_0"],
LIBPATH=["/usr/local/lib",'/home/xunw/x/software/boost_1_56_0/stage/lib'],
LIBS=["opencv_core","opencv_highgui","boost_serialization","pthread"])

SharedLibrary('hello',"hello.cpp",CPPPATH=["/usr/include/python2.7","/usr/lib/python2.7/config","/usr/local/include","/home/xunw/workspace/boost","/home/xunw/x/software/boost_1_56_0"],
LIBPATH=["/usr/local/lib",'/home/xunw/x/software/boost_1_56_0/stage/lib'],
LIBS=["boost_python","boost_serialization","pthread"])

Program('learnAsio',"learnAsio.cpp",CPPPATH="/home/xunw/x/software/boost_1_56_0",LIBPATH="/home/xunw/x/software/boost_1_56_0/stage/lib",LIBS=["boost_system","boost_thread"])
#Program('Master',"Master.cpp",CPPPATH="/home/xunw/x/software/boost_1_56_0",LIBPATH="/home/xunw/x/software/boost_1_56_0/stage/lib",LIBS=["boost_system","boost_thread","rt"])
Program('SHM',"SHM.cpp",CPPPATH="/home/xunw/x/software/boost_1_56_0",LIBPATH="/home/xunw/x/software/boost_1_56_0/stage/lib",LIBS=["boost_system","boost_thread","rt",'pthread'])
Program('server',"Server.cpp",CPPPATH="/home/xunw/x/software/boost_1_56_0",LIBPATH="/home/xunw/x/software/boost_1_56_0/stage/lib",LIBS=["boost_system","boost_thread","rt",'pthread'])
Program('client',"client.cpp",CPPPATH="/home/xunw/x/software/boost_1_56_0",LIBPATH="/home/xunw/x/software/boost_1_56_0/stage/lib",LIBS=["boost_system","boost_thread","rt",'pthread'])