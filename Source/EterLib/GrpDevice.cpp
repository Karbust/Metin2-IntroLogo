//Search for:
CGraphicDevice::EDeviceState CGraphicDevice::GetDeviceState()
{
...
}

//Add after:
LPDIRECT3D8 CGraphicDevice::GetDirectx8()
{
	return ms_lpd3d;
}

LPDIRECT3DDEVICE8 CGraphicDevice::GetDevice()
{
	return ms_lpd3dDevice;
}