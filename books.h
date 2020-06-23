#ifndef BOOKS_H
#define BOOKS_H

class books {
private:
	int _type = 0;       //图书类型
	int _number;     //图书编号
	string _name;    //名称
	double _price;   //价格
	string _author;  //作者
	string _pubhouse;  //出版社
	 
public:
	books( int number, string name, double price, string author, string pubhouse);  //构造函数
	int GetType() { 	return _type;  }
	int GetNumber() {  return _number;  }
	string GetName() { 	return _name;  }
	double GetPrice() { 	return _price;  }
	string GetAuthor() { 	return _author;  }
	string GetPubhouse() {  return _pubhouse;  }
//	virtual operator>>( ) = 0;  //TODO: 定义
};

#endif   //BOOKS_H