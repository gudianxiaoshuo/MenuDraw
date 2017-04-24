// mySDISecond.h : main header file for the MYSDISECOND application
//

#if !defined(AFX_MYSDISECOND_H__7582CA98_4D4F_4997_A8D8_D16D10AB12B8__INCLUDED_)
#define AFX_MYSDISECOND_H__7582CA98_4D4F_4997_A8D8_D16D10AB12B8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMySDISecondApp:
// See mySDISecond.cpp for the implementation of this class
//

class CMySDISecondApp : public CWinApp
{
public:
	CMySDISecondApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMySDISecondApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMySDISecondApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYSDISECOND_H__7582CA98_4D4F_4997_A8D8_D16D10AB12B8__INCLUDED_)
