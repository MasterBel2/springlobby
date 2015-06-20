/*
 * IconsCollection.h
 *
 *  Created on: 20 ���� 2015 �.
 *      Author: ������
 */

#ifndef SRC_GUI_ICONSCOLLECTION_H_
#define SRC_GUI_ICONSCOLLECTION_H_

class wxIcon;

class IconsCollection {
private:
	IconsCollection();
	virtual ~IconsCollection();

public:
	static IconsCollection* Instance();
	static void Release();

public:
	wxIcon& IconExists();
	wxIcon& IconNExists();

private:
	static IconsCollection* m_Instance;
	wxIcon* iconExists;
	wxIcon* iconNExists;
};

#endif /* SRC_GUI_ICONSCOLLECTION_H_ */
