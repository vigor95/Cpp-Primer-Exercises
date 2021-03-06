#include "Sales_data.h"

Sales_data Sales_data::add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

std::istream& Sales_data::read(std::istream &is, Sales_data &item){
    is >> item.bookNo >> item.units_sold >> item.sellingprice >> item.saleprice;
    return is;
}

std::ostream& Sales_data::print(std::ostream &os, const Sales_data &item){
    os << item.isbn() << " " << item.units_sold << " " << item.sellingprice << " " << item.saleprice << " " << item.discount;
    return os;
}

Sales_data::Sales_data(const std::string &book, const unsigned num, const double sellp, const double salep){
    bookNo = book;
    units_sold = num;
    sellingprice = sellp;
    saleprice = salep;
    if(sellingprice)
        discount = saleprice / sellingprice;
}

Sales_data::Sales_data(std::istream &is){
    is >> *this;
}
