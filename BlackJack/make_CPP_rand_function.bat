@echo off
cls


set /p HighNum=enter highest number possible: 
set /p LowNum=enter lowest number possible: 




echo #include ^<stdlib.h^>>get_rand.cpp
echo #include ^<time.h^>>>get_rand.cpp
echo #include ^<stdio.h^>>>get_rand.cpp


echo int GetRand();>>get_rand.cpp

	
echo.>>get_rand.cpp
echo.>>get_rand.cpp
echo int GetRand()>>get_rand.cpp
echo {>>get_rand.cpp
echo 	int num = 0;>>get_rand.cpp
echo 	srand(time(NULL));>>get_rand.cpp
echo 	num = %LowNum% + rand() %% (%HighNum% - %LowNum% + 1);>>get_rand.cpp
echo 	return num;>>get_rand.cpp
echo } // end of GetRand()>>get_rand.cpp


cls

echo done
pause