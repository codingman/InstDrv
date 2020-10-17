#pragma once

class SysManager {
public:
	SysManager(CString sysPath, CString serviceName, CString displayName) :_sysPath(sysPath),
		_serviceName(serviceName), _displayName(displayName) {
	}
	bool Install() const;
	bool Run() const;
	bool Stop() const;
	bool Remove() const;
	SC_HANDLE GetServiceHandle() const;
private:
	CString _sysPath;
	CString _serviceName;
	CString _displayName;
};