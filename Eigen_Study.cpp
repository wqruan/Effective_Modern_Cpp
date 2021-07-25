#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Dense>
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

    auto end=std::clock();		//程序结束用时
	double endtime=(double)(end-start)/CLOCKS_PER_SEC;
	std::cout<<"Total time:"<<endtime<<std::endl;//s为单位
	std::cout<<"Total time:"<<endtime*1000<<"ms"<<std::endl;	//ms为单位


    MatrixXd tmp5(5, 5);
    tmp5.setConstant(3);
    tmp5 = -tmp5;
    tmp5 = (tmp5.array()+ 1).matrix();
    
    MatrixXd tmp6(5, 5);
    int m=0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            tmp6(i,j) = m;
            m++;
        }
        
    }


    int i=0;
    int j= 5;
    MatrixXd tmp7 = tmp6.middleRows(i,j);
    tmp7.array()(1) = 10;
    tmp7.row(0) = tmp6.row(3);
    tmp7.transposeInPlace();
    std::cout << tmp7.rows() << std::endl;
    std::cout << tmp7(2, 0) << std::endl;
}