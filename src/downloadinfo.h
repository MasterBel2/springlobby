/*
 * downloadinfo.h
 *
 *  Created on: 12 ���� 2015 �.
 *      Author: ������
 */

#ifndef SRC_DOWNLOADINFO_H_
#define SRC_DOWNLOADINFO_H_

#include <wx/string.h>

class IDownload;

class DownloadInfo {
public:
	DownloadInfo(IDownload* download);
	virtual ~DownloadInfo();

	IDownload* GetIDownload() const;
	void DownloadFinished();
	wxString GetName() const;
	bool IsFinished() const;
	int GetSize() const;
	int GetProgressPercent() const;
	void UpdateInfo();

private:
	IDownload* iDownload;
	wxString downloadName;
	bool finishedFlag;
	int totalSize;
	int downloadedSize;
};

#endif /* SRC_DOWNLOADINFO_H_ */
