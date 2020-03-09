char *data[10]分配了长度为10的指针组，存放的是地址
而初始化char *data[10] = {"Fortran","Basic","pascal","C","C++"};
相当于data[0] = "Fortran";第0个地址指向静态区，内容只读，所以出错
data[1],data[2],...相同

char data[10][20]直接分配10个连续的char[20]
可以看作
typedef char String[20];//20个字符组成一个单元
String data[10];//分配10个单元，初始化情况和char data[10]或char data[]相同，只是char改为String

lz说的char a[][10]是以char[10]为单元，单元数量待定，和char *a[10]完全不同