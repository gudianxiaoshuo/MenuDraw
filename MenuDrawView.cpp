// mySDISecondView.cpp : implementation of the CMySDISecondView class
//

#include "stdafx.h"
#include "MenuDraw.h"

#include "MenuDrawDoc.h"
#include "MenuDrawView.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMySDISecondView

IMPLEMENT_DYNCREATE(CMySDISecondView, CView)

BEGIN_MESSAGE_MAP(CMySDISecondView, CView)
	//{{AFX_MSG_MAP(CMySDISecondView)
	ON_COMMAND(IDM_GUDIANXIAOSHUO, OnGudianxiaoshuo)
	ON_COMMAND(IDM_KUAILEKETANG, OnKuaileketang)
	ON_COMMAND(IDM_RENXINGDONGTU, OnRenxingdongtu)
	ON_COMMAND(IDM_Rectangle, OnRectangle)
	ON_COMMAND(IDM_TUOYUAN, OnTuoyuan)
	ON_COMMAND(ID_Toolbar_Blue, OnToolbarBlue)
	ON_COMMAND(ID_Toolbar_Green, OnToolbarGreen)
	ON_COMMAND(ID_Toolbar_Red, OnToolbarRed)
	ON_COMMAND(ID_ToolBar_yello, OnToolBaryello)
	ON_COMMAND(ID_LINE, OnLine)
	ON_WM_MOUSEMOVE()
	ON_COMMAND(ID_TRANSPARENT, OnTransparent)
	ON_UPDATE_COMMAND_UI(ID_TRANSPARENT, OnUpdateTransparent)
	ON_COMMAND(IDM_SET, OnSet)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
	ON_COMMAND(ID_NEW_BLUE, &CMySDISecondView::OnNewBlue)
	ON_COMMAND(ID_NEW_GREEN, &CMySDISecondView::OnNewGreen)
	ON_COMMAND(ID_NEW_YELLOW, &CMySDISecondView::OnNewYellow)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMySDISecondView construction/destruction

CMySDISecondView::CMySDISecondView()
{
	// TODO: add construction code here
	pDlg=NULL;
   nShape=0;
   bTransParent=FALSE;
   nRed=0;
   nBlue=0;
   nGreen=222;

   nBold=3;

   m_curRect.SetRect(120,120,200,200);


}

CMySDISecondView::~CMySDISecondView()
{
}

BOOL CMySDISecondView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMySDISecondView drawing

void CMySDISecondView::OnDraw(CDC* pDC)
{
	CMySDISecondDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

    pDC->TextOut(100,50,m_Str);

    CPen pen;
	pen.CreatePen(0,nBold,m_LineColor);

	CPen* pOldPen=pDC->SelectObject(&pen);

	CBrush brush;
	brush.CreateSolidBrush(RGB(nRed,nGreen,nBlue));
	CBrush *pOldBrush=NULL;
	
	if( bTransParent)
	{
      pOldBrush=(CBrush*)pDC->SelectStockObject(NULL_BRUSH);
	}else
	  pOldBrush=pDC->SelectObject(&brush);


	switch(nShape){

	case Rect_DRAW:
		pDC->Rectangle(m_curRect);
		break;

	case Ellipse_DRAW:

		 pDC->Ellipse(m_curRect);
		break;

	case Line_DRAW:
		pDC->MoveTo(m_curRect.TopLeft());
		pDC->LineTo(m_curRect.BottomRight());
		break;

	default:
		pDC->MoveTo(m_curRect.TopLeft());
		pDC->LineTo(m_curRect.BottomRight());

	}



	pDC->SelectObject(pOldPen);
    pDC->SelectObject(pOldBrush);

	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CMySDISecondView printing

BOOL CMySDISecondView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CMySDISecondView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CMySDISecondView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CMySDISecondView diagnostics

#ifdef _DEBUG
void CMySDISecondView::AssertValid() const
{
	CView::AssertValid();
}

void CMySDISecondView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMySDISecondDoc* CMySDISecondView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMySDISecondDoc)));
	return (CMySDISecondDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMySDISecondView message handlers

void CMySDISecondView::OnGudianxiaoshuo() 
{
	// TODO: Add your command handler code here
	
	m_Str="www.gudianxiaoshuo.com";
	Invalidate();
}

void CMySDISecondView::OnKuaileketang() 
{
	// TODO: Add your command handler code here
		m_Str="快乐课堂";
	Invalidate();
}

void CMySDISecondView::OnRenxingdongtu() 
{
	// TODO: Add your command handler code here
	m_Str="任性动图";
	Invalidate();
}

void CMySDISecondView::OnRectangle() 
{
	// TODO: Add your command handler code here


	nShape=Rect_DRAW;
	Invalidate();

}

void CMySDISecondView::OnTuoyuan() 
{
	// TODO: Add your command handler code here
	nShape=Ellipse_DRAW;
	Invalidate();
}

void CMySDISecondView::OnToolbarBlue() 
{
	// TODO: Add your command handler code here

   nRed=0;
   nGreen=0;
   nBlue=255;
   Invalidate();
}

void CMySDISecondView::OnToolbarGreen() 
{
	// TODO: Add your command handler code here
   nRed=0;
   nGreen=255;
   nBlue=0;
   Invalidate();
}

void CMySDISecondView::OnToolbarRed() 
{
	// TODO: Add your command handler code here
   nRed=255;
   nGreen=0;
   nBlue=0;
   Invalidate();
}

void CMySDISecondView::OnToolBaryello() 
{
	// TODO: Add your command handler code here
   nRed=255;
   nGreen=255;
   nBlue=0;
   Invalidate();
}

void CMySDISecondView::OnLine() 
{
	// TODO: Add your command handler code here
	nShape=Line_DRAW;
	Invalidate();
}

void CMySDISecondView::OnMouseMove(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	


  if( nFlags & MK_LBUTTON )
	{
       m_curRect.SetRect(point.x-40,point.y-40,point.x+40,point.y+40);

	   Invalidate();
	}

	CView::OnMouseMove(nFlags, point);
}

void CMySDISecondView::OnTransparent() 
{
	// TODO: Add your command handler code here
	bTransParent=!bTransParent;
	Invalidate();

}


void CMySDISecondView::OnUpdateTransparent(CCmdUI* pCmdUI) 
{
	// TODO: Add your command update UI handler code here
	if(bTransParent)
		pCmdUI->SetCheck(TRUE);
	else
		pCmdUI->SetCheck(FALSE);
}

void CMySDISecondView::OnSet() 
{
	// TODO: Add your command handler code here
	
  // if(pDlg==NULL)
  // {
  //   pDlg=new CSetDlg(this);
	 //pDlg->Create(IDD_DIALOG1);
	 //pDlg->pView=this;
  // }

  // pDlg->ShowWindow(SW_SHOW);

	CSetDlg dlg;
	dlg.m_nBold=nBold;
	dlg.m_LineColor=m_LineColor;
	if(dlg.DoModal()==IDOK)
	{
		nBold=dlg.m_nBold;
		m_LineColor=dlg.m_LineColor;
		Invalidate();
	}

}


void CMySDISecondView::OnNewBlue()
{
	// TODO: 在此添加命令处理程序代码
}


void CMySDISecondView::OnNewGreen()
{
	// TODO: 在此添加命令处理程序代码
}


void CMySDISecondView::OnNewYellow()
{
	// TODO: 在此添加命令处理程序代码
}
