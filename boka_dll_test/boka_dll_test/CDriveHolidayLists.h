// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "C:\\Program Files (x86)\\�����Ž����������Գ���\\FCDrive8800.Dll" no_namespace
// CDriveHolidayLists wrapper class

class CDriveHolidayLists : public COleDispatchDriver
{
public:
	CDriveHolidayLists(){} // Calls COleDispatchDriver default constructor
	CDriveHolidayLists(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CDriveHolidayLists(const CDriveHolidayLists& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// _DriveHolidayLists methods
public:
	LPDISPATCH Add(BSTR * sKey)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_PBSTR ;
		InvokeHelper(0x60030001, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, sKey);
		return result;
	}
	LPDISPATCH get_Item(VARIANT * vntIndexKey)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_PVARIANT ;
		InvokeHelper(0x0, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&result, parms, vntIndexKey);
		return result;
	}
	long get_Count()
	{
		long result;
		InvokeHelper(0x68030000, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
		return result;
	}
	void Remove(VARIANT * vntIndexKey)
	{
		static BYTE parms[] = VTS_PVARIANT ;
		InvokeHelper(0x60030002, DISPATCH_METHOD, VT_EMPTY, NULL, parms, vntIndexKey);
	}
	LPUNKNOWN get_NewEnum()
	{
		LPUNKNOWN result;
		InvokeHelper(0xfffffffc, DISPATCH_PROPERTYGET, VT_UNKNOWN, (void*)&result, NULL);
		return result;
	}

	// _DriveHolidayLists properties
public:

};