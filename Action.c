Action()
{
//	lr_start_transaction("Data Push")
	
	lrs_create_socket("socket0", "TCP", "LocalHost=0", "RemoteHost=10.12.108.27:9999", LrsLastArg);
	lrs_send("socket0", "buf0", LrsLastArg);
	lrs_close_socket("socket0");
	
	
	
	return 0;
}
