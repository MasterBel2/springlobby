/*
 * exception.h
 *
 *  Created on: 11 ���� 2015 �.
 *      Author: ������
 */

#ifndef SRC_EXCEPTION_H_
#define SRC_EXCEPTION_H_

#include <wx/string.h>

class Exception {
public:
	Exception();
	Exception(const wxString& reason);
	virtual ~Exception();

	wxString Reason() const;

private:
	wxString reason;
};

#endif /* SRC_EXCEPTION_H_ */
