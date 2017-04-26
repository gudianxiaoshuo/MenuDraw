// SetDlg.cpp : implementation file
//

#include "stdafx.h"
#include "menudraw.h"
//#include "SetDlg.h"



#include "MenuDrawDoc.h"
#include "MenuDrawView.h"
#include "SetDlg.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSetDlg dialog

//#include "MenuDrawView.h"

CSetDlg::CSetDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CSetDlg::IDD, pParent)
	, m_nBold(0)
{
	//{{AFX_DATA_INIT(CSetDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	//pView=(CMenuDrawView* )pParent;
}


void CSetDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CSetDlg)
	// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
	DDX_Text(pDX, IDC_EDIT1, m_nBold);
	//DDX_Text(pDX, IDC_MFCCOLORBUTTON1, m_LineColor);
	DDX_Control(pDX, IDC_MFCCOLORBUTTON1, m_ColorBtn);
}


BEGIN_MESSAGE_MAP(CSetDlg, CDialog)
	//{{AFX_MSG_MAP(CSetDlg)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDC_BUTTON1, &CSetDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDOK, &CSetDlg::OnBnClickedOk)
	ON_BN_CLICKED(IDC_MFCCOLORBUTTON1, &CSetDlg::OnBnClickedMfccolorbutton1)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSetDlg message handlers


void CSetDlg::OnBnClickedButton1()
{
	// TODO: 在此添加控件通知处理程序代码

	if(pView)
	{

		
	}
}


void CSetDlg::OnBnClickedOk()
{
	// TODO: 在此添加控件通知处理程序代码

	CDialog::OnOK();
}


void CSetDlg::OnBnClickedMfccolorbutton1()
{
	// TODO: 在此添加控件通知处理程序代码


	m_LineColor=m_ColorBtn.GetColor();

}


BOOL CSetDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// TODO:  在此添加额外的初始化
    m_ColorBtn.EnableAutomaticButton(_T("目前"), m_LineColor);   
    //m_ColorBtn.SetColor(m_SelectedColor);  
    m_ColorBtn.EnableOtherButton(_T("其余颜色"));   
    m_ColorBtn.SetColor((COLORREF)-1);   
    m_ColorBtn.SetColumnsNumber(5);    


	return TRUE;  // return TRUE unless you set the focus to a control
	// 异常: OCX 属性页应返回 FALSE
}
