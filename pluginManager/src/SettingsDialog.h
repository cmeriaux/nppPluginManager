#ifndef _SETTINGSDIALOG_H
#define _SETTINGSDIALOG_H

struct NppData;



class SettingsDialog
{

public:
	SettingsDialog() {};
	~SettingsDialog() {};    
    
	void doModal(NppData *nppData, HWND parent);
   	
    

protected :
	

private:
	
	static BOOL CALLBACK dlgProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);
	BOOL CALLBACK run_dlgProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);

	void initialiseOptions();
	void setOptions();

	NppData *_nppData;
	HWND   _hSelf;
};



#endif // _SETTINGSDIALOG_H