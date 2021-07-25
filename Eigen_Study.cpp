#include <eigen3/Eigen/Core>
#include<ctime>
#include <iostream>

int main() {
    typedef Eigen::Matrix<long long, Eigen::Dynamic, Eigen::Dynamic> MatrixXd;  
    MatrixXd tmp;
    tmp.resize(128,784);
    MatrixXd tmp1(128, 128) ;
    for (int i = 0; i < 128; i++) {
        for (int j=0; j<128; j++) {
            tmp(i, j) = 5;
             tmp1(i, j) = 5;
            
        }
    }
    // for (int i = 0; i < 784; i++) {
    //     for (int j=0; j<1; j++) {
           
    //     }
    // }
    
    auto start = std::clock();
    tmp = tmp1;
    std::cout << tmp.cols() << std::endl;
    auto end=std::clock();		//程序结束用时
	double endtime=(double)(end-start)/CLOCKS_PER_SEC;
	std::cout<<"Total time:"<<endtime<<std::endl;//s为单位
	std::cout<<"Total time:"<<endtime*1000<<"ms"<<std::endl;	//ms为单位
}