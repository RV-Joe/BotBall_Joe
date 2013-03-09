int main()
{
	
create_connect();
create_drive_straight(343);
sleep(1);
create_spin_CW(195.3);
sleep(1);
create_drive_straight(355.6);
sleep(1);
create_spin_CW(195.3);
sleep(1);
if(digital(10)){
	create_drive_straight(-300);
	sleep(10);
}
else{
	create_drive_straight(300);
}
//nap time
}
