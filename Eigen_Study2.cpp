#include <eigen3/Eigen/Core>
#include<ctime>
#include <iostream>

typedef Eigen::Matrix<long long, Eigen::Dynamic, Eigen::Dynamic> Matrix;
class Eigen_Study2
{
private:
    /* data */
    int r, c;
    int order;
    //Value Store
    
public:
    Matrix* val;
    Eigen_Study2(int r , int c);
   // Eigen_Study2& operator=(const Eigen_Study2 &a);
    Eigen_Study2 operator=(const Eigen_Study2 &a);
    ~Eigen_Study2();
};

Eigen_Study2::Eigen_Study2(int r, int c)
{
   this->r = r;
    this->c = c;
    order = 0;
    val =  new Matrix(r, c);
    val->setConstant(4);
}

// Eigen_Study2& Eigen_Study2::operator=(const Eigen_Study2 &a)
// {
//     order = a.order;
//     val->resize(r, c);
//     delete val;
//     val = new Matrix(r, c);
//     *val = *a.val;
//     val->setConstant(2);
//     return *this;
// }

Eigen_Study2 Eigen_Study2::operator=(const Eigen_Study2 &a)
{
    order = a.order;
    val->resize(r, c);
    delete val;
    val = new Matrix(r, c);
    *val = *a.val;
    val->setConstant(2);
    std::cout << 123 << std::endl;
    return *this;
}

Eigen_Study2::~Eigen_Study2()
{
}
int main() {
    Eigen_Study2 tmp(2, 3);
    Eigen_Study2 tmp1(3, 4);
    Eigen_Study2 tmp3 = tmp1;
    std::cout << (*tmp3.val)(0,0) << std::endl;
}
