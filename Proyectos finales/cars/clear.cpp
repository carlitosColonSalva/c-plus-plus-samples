void clear() {
  
	char cur_system = get_system();
	if (cur_system == 'w')
		{ system("cls"); }
	else
		{ system("clear"); }}
// end of clear()