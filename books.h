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
	books(int _t, int _num, string _nam, double _pri, string _aut, string _pubh);  //���캯��
	int get_type();        //�õ�ͼ������
	int get_number( );       //�õ�ͼ����
	string get_name( );      //�õ�����
	double get_price( );     //�õ��۸�
	string get_author( );    //�õ�����
	string get_pubhouse( );  //�õ�������
//	virtual operator>>( ) = 0;  //TODO: ����
};

#endif   //BOOKS_H