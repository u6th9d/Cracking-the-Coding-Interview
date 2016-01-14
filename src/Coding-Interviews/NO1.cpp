/*********************************************
*
*Author: u6th9d  E-mail: u6th9d@outlook.com
*Copyright (c) 2016-01  All rights reserved
*
**********************************************/

/*********************************************************
	����Ϊ����CMyString����������Ϊ��������Ӹ�ֵ���㺯����
	class CMyString{
	public:
		CMyString(char* pData = nullptr);
		CMyString(const CMyString& str);
		~CMyString(void);
	private:
		char* m_pData;
	};
**********************************************************/

class CMyString{
public:
	CMyString& operator=(CMyString str);

	CMyString(char* pData = nullptr);
	CMyString(const CMyString& str);
	~CMyString(void);
private:
	char* m_pData;
};

/*copy and swap*/
CMyString& CMyString::operator=(CMyString str) {
	using std::swap;
	swap(m_pData, str.m_pData);
	return *this;
}