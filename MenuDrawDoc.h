// mySDISecondDoc.h : interface of the CMySDISecondDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MYSDISECONDDOC_H__D8B42181_23D0_4144_952D_7DA3D253C6AA__INCLUDED_)
#define AFX_MYSDISECONDDOC_H__D8B42181_23D0_4144_952D_7DA3D253C6AA__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMySDISecondDoc : public CDocument
{
protected: // create from serialization only
	CMySDISecondDoc();
	DECLARE_DYNCREATE(CMySDISecondDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMySDISecondDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMySDISecondDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMySDISecondDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYSDISECONDDOC_H__D8B42181_23D0_4144_952D_7DA3D253C6AA__INCLUDED_)
