#include <iostream>

void getMonthInfo(int month, int& days, std::string& monthName) {
	switch (month)
	{
	case 1: {

		days = 31;
		monthName = "������";
		break;
	}
	case 2: {

		days = 28;
		monthName = "�������";
		break;
	}
	case 3: {

		days = 31;
		monthName = "����  ";
		break;
	}
	case 4: {

		days = 30;
		monthName = "������  ";
		break;
	}
	case 5: {

		days = 31;
		monthName = "���  ";
		break;
	}
	case 6: {

		days = 30;
		monthName = "����  ";
		break;
	}
	case 7: {

		days = 31;
		monthName = "����  ";
		break;
	}
	case 8: {

		days = 31;
		monthName = "������ ";
		break;
	}
	case 9: {

		days = 30;
		monthName = "��������   ";
		break;
	}
	case 10: {

		days = 30;
		monthName = "�������   ";
		break;
	}
	case 11: {

		days = 30;
		monthName = "������  ";
		break;
	}
	case 12: {

		days = 31;
		monthName = "�������  ";
		break;
	}
	default:
		break;
	}

}