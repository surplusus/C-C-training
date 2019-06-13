#include "dma.h"
#include <cstring>

baseDMA::baseDMA(const char * l, int r)
{
	label = new char[std::strlen(l) + 1];
	std::strncpy(label, l, strlen(l)+1);
	rating = r;
}

baseDMA::baseDMA(const baseDMA & rs)
{
	label = new char[std::strlen(rs.label) + 1];
	std::strncpy(label, rs.label,strlen(rs.label)+1);
	rating = rs.rating;
}

baseDMA::~baseDMA()
{
	delete[] label;
}

baseDMA & baseDMA::operator=(const baseDMA & rs)
{
	if (this == &rs)
		return *this;
	delete[] label;
	label = new char[std::strlen(rs.label) + 1];
	std::strncpy(label, rs.label, strlen(rs.label) + 1);
	rating = rs.rating;
	return *this;
}

std::ostream & operator<<(std::ostream & os, const baseDMA & rs)
{
	os << "상표 : " << rs.label << std::endl;
	os << "등급 : " << rs.rating<< std::endl;
	return os;
}

std::ostream & operator<<(std::ostream & os, const lacksDMA & rs)
{
	os << (const baseDMA &)rs;		// baseDMA에 있는 operator<<를 부르기위해 형변환(casting)한다
	os << "색상 : " << rs.color << std::endl;
	return os;
}

std::ostream & operator<<(std::ostream & os, const hasDMA & rs)
{
	os << (const baseDMA &)rs;		// baseDMA에 있는 operator<<를 부르기위해 형변환(casting)한다
	os << "스타일 : " << rs.style << std::endl;
	return os;
}
lacksDMA::lacksDMA(const char * c, const char * l, int r) : baseDMA(l,r)
{
	std::strncpy(color, c, 39);
	color[39] = '\0';
}

lacksDMA::lacksDMA(const char * c, const baseDMA & rs) : baseDMA(rs)
{
	std::strncpy(color, c, COL_LEN-1);
	color[COL_LEN - 1] = '\0';
}

hasDMA::hasDMA(const char * s, const char * l, int r) : baseDMA(l, r)
{
	style = new char[std::strlen(s)+1];
	std::strncpy(style, s, strlen(s)+1);
}

hasDMA::hasDMA(const char * s, const baseDMA & rs) : baseDMA(rs)
{
	style = new char[std::strlen(s) + 1];
	std::strncpy(style, s, strlen(s)+1);
}

hasDMA::hasDMA(const hasDMA & hs)
{
	style = new char[std::strlen(hs.style) + 1];
	std::strncpy(style, hs.style, strlen(hs.style)+1);

}

hasDMA::~hasDMA()
{
	delete[] style;
}

hasDMA & hasDMA::operator=(const hasDMA & rs)
{
	if (this == &rs)
		return *this;
	baseDMA::operator=(rs);		// 기초클래스 부분을 복사한다
	delete[] style;				// 새로운 스타일을 준비
	style = new char[std::strlen(rs.style) + 1];
	std::strncpy(style, rs.style, strlen(rs.style)+1);
	return *this;
}
