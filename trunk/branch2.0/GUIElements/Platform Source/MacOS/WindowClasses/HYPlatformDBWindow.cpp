/*	MacOS Portions of the DB Window class		Sergei L. Kosakovsky Pond, Fall 2005.*/#include "HYDBWindow.h"//__________________________________________________________________bool 		_HYDBWindow::_ProcessMenuSelection (long msel){	long  		menuChoice = msel&0x0000ffff;	_HYTable*   table = (_HYTable*)GetObject(0);		HiliteMenu(0);	InvalMenuBar();		switch (msel/0xffff)	{		case 129: // file menu		{			if (menuChoice==8) // print			{				_SimpleList columns (table->horizontalSpaces.lLength,0,1);				table->_PrintTable(columns,(_HYTable*)GetObject(1));				return true;			}		}	}	return _HYTWindow::_ProcessMenuSelection(msel);}//EOF