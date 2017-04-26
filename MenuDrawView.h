// mySDISecondView.h : interface of the CMySDISecondView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MYSDISECONDVIEW_H__5B6AD43C_8BBE_4641_897E_D205EF308C36__INCLUDED_)
#define AFX_MYSDISECONDVIEW_H__5B6AD43C_8BBE_4641_897E_D205EF308C36__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "SetDlg.h"

#define Rect_DRAW  0
#define Ellipse_DRAW 1
#define Line_DRAW  2

class CSetDlg;
class CMySDISecondView : public CView
{
protected: // create from serialization only
	CMySDISecondView();
	DECLARE_DYNCREATE(CMySDISecondView)

// Attributes
public:
	CMySDISecondDoc* GetDocument();

// Operations
public:

	CSetDlg *pDlg;

	CRect m_curRect;

	CString m_Str;

	BOOL bTransParent;

	COLORREF m_LineColor;
	int nBold;
	int nShape;

	BYTE nRed;
    BYTE nGreen;
	BYTE nBlue;



// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMySDISecondView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMySDISecondView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMySDISecondView)
	afx_msg void OnGudianxiaoshuo();
	afx_msg void OnKuaileketang();
	afx_msg void OnRenxingdongtu();
	afx_msg void OnRectangle();
	afx_msg void OnTuoyuan();
	afx_msg void OnToolbarBlue();
	afx_msg void OnToolbarGreen();
	afx_msg void OnToolbarRed();
	afx_msg void OnToolBaryello();
	afx_msg void OnLine();
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnTransparent();
	afx_msg void OnUpdateTransparent(CCmdUI* pCmdUI);
	afx_msg void OnSet();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnNewBlue();
	afx_msg void OnNewGreen();
	afx_msg void OnNewYellow();
};

#ifndef _DEBUG  // debug version in mySDISecondView.cpp
inline CMySDISecondDoc* CMySDISecondView::GetDocument()
   { return (CMySDISecondDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MYSDISECONDVIEW_H__5B6AD43C_8BBE_4641_897E_D205EF308C36__INCLUDED_)
