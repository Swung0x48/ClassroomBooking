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
	books(int _t, int _num, string _nam, double _pri, string _aut, string _pubh);  //构造函数
	int get_type();        //得到图书类型
	int get_number( );       //得到图书编号
	string get_name( );      //得到名称
	double get_price( );     //得到价格
	string get_author( );    //得到作者
	string get_pubhouse( );  //得到出版社
//	virtual operator>>( ) = 0;  //TODO: 定义
};

#endif   //BOOKS_H