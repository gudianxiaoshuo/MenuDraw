// mySDISecondDoc.cpp : implementation of the CMySDISecondDoc class
//

#include "stdafx.h"
#include "MenuDraw.h"

#include "MenuDrawDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMySDISecondDoc

IMPLEMENT_DYNCREATE(CMySDISecondDoc, CDocument)

BEGIN_MESSAGE_MAP(CMySDISecondDoc, CDocument)
	//{{AFX_MSG_MAP(CMySDISecondDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMySDISecondDoc construction/destruction

CMySDISecondDoc::CMySDISecondDoc()
{
	// TODO: add one-time construction code here

}

CMySDISecondDoc::~CMySDISecondDoc()
{
}

BOOL CMySDISecondDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMySDISecondDoc serialization

void CMySDISecondDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CMySDISecondDoc diagnostics

#ifdef _DEBUG
void CMySDISecondDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMySDISecondDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMySDISecondDoc commands
