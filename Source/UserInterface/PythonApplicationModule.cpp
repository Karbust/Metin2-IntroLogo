//Search for:
PyObject* appIsLiveStage(PyObject* poSelf, PyObject* poArgs)
{
...
}

//Add after:

PyObject* appLogoOpen(PyObject* poSelf, PyObject* poArgs)
{
	char* szName;
	if (!PyTuple_GetString(poArgs, 0, &szName))
		return Py_BuildException(); 

	int nIsSuccess = 1; //CPythonApplication::Instance().OnLogoOpen(szName);
	CBandiVideoPlayer::Instance().VideoPlay(szName);

	return Py_BuildValue("i", nIsSuccess);
}

//Add at the end:

LPDIRECT3D8 CPythonApplication::GetDirectx8()
{
	return m_grpDevice.GetDirectx8();
}

LPDIRECT3DDEVICE8 CPythonApplication::GetDevice()
{
	return m_grpDevice.GetDevice();
}