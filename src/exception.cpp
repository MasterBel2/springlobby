/*
 * exception.cpp
 *
 *  Created on: 11 ���� 2015 �.
 *      Author: ������
 */

#include "exception.h"

Exception::Exception() {
	// TODO Auto-generated constructor stub

}

Exception::Exception(const wxString& reason) {
	this->reason = reason;
}

Exception::~Exception() {
	// TODO Auto-generated destructor stub
}

wxString Exception::Reason() const {
	return reason;
}
