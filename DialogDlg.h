// DialogDlg.h : header file

#include <Graphic3d_GraphicDriver.hxx>
#include <V3d_Viewer.hxx>
#include <WNT_Window.hxx>
#include <V3d_View.hxx>
#include "Dialog.h"

class CDialogDlg : public CDialog
{
private:

	Handle(Graphic3d_GraphicDriver) m_hGraphicDriver;

	Handle(V3d_Viewer) m_hViewer_1;
	Handle(V3d_Viewer) m_hViewer_2;
	Handle(V3d_Viewer) m_hViewer_3;

	Handle(WNT_Window) m_hWNTWindow_1;
	Handle(WNT_Window) m_hWNTWindow_2;
	Handle(WNT_Window) m_hWNTWindow_3;

	Handle(V3d_View) m_hView_1;
	Handle(V3d_View) m_hView_2;
	Handle(V3d_View) m_hView_3;

public:

	CDialogDlg(CWnd* pParent = nullptr);
	virtual BOOL OnInitDialog();

	afx_msg void OnPaint();
	DECLARE_MESSAGE_MAP()
};
