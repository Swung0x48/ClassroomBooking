#ifndef BOOKS_H
#define BOOKS_H

class books {
private:
	int _type = 0;       //ͼ������
	int _number;     //ͼ����
	string _name;    //����
	double _price;   //�۸�
	string _author;  //����
	string _pubhouse;  //������
	 
public:
	books( int number, string name, double price, string author, string pubhouse);  //���캯��
	int GetType() { 	return _type;  }
	int GetNumber() {  return _number;  }
	string GetName() { 	return _name;  }
	double GetPrice() { 	return _price;  }
	string GetAuthor() { 	return _author;  }
	string GetPubhouse() {  return _pubhouse;  }
//	virtual operator>>( ) = 0;  //TODO: ����
};

#endif   //BOOKS_H