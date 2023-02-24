#include <iostream>

#define MINI_QUIZ_TASK
//#define CALC_TASK

void main() {
#ifdef MINI_QUIZ_TASK
	/*
													 ==== KNOWN ERRORS ====

											   - Не работает защита от ввода букв.

														   Подробнее:
								При вводе буквы, программа закрывается, посчитав все ответы неверными.
			  Но: При вводе цифры вне диапазона от 1 до 4, переходит на следующий вопрос, посчитав ответ неверным (тут все норм).

						   UPD: строки кода отвечающие за защиту от букв вырезаны для чистоты кода.
	*/
	int answer;
	int count_of_correct_answers = 0;
	int count_of_incorrect_answers = 0;
	//char symbol = 0;  

	std::cout << " \t============ Hello and welcome to the mini quiz! ============" << std::endl;
	std::cout << " \tChoose the correct answer by pressing the corresponding number." << std::endl;
	std::cout << "\n\t.....okAAAAAAAaaaayyyyyy let's gooooooooo!" << std::endl;
	std::cout << " \n\t\t\t==== 1st question. ====" << std::endl;
	std::cout << " \nThe letter \"F\" in the English alphabet is...?" << std::endl;
	std::cout << " [1] - 4th\n [2] - 7th\n [3] - 6th\n [4] - probably it's 3.40282e^+38th but i'm not sure.." << std::endl; std::cin >> answer;

	if (answer == 3) // || answer != symbol) здесь могла бы быть моя защита от букв..
	{
		std::cout << "\t\t\tCorrect!!" << std::endl;
		count_of_correct_answers++;
	}
	else
	{
		std::cout << " Wrong answer!  it's 6th letter of alphabet." << std::endl;
		count_of_incorrect_answers++;
	}
	std::cout << " \n\t\t==== 2nd question. ====" << std::endl;
	std::cout << " How many toes does a cat usually have on all his paws?" << std::endl;
	std::cout << " \n [1] - 10\n [2] - 18\n [3] - 20\n [4] - woof!" << std::endl; std::cin >> answer;
	if (answer == 2 || answer == 3)
	{
		std::cout << "\t\t\t Correct! \n\t\t\t Fun fact:\n There's two correct aswers, usualy they have 18 toes, but some cats have 20. " << std::endl;
		count_of_correct_answers++;
	}
	else
	{
		std::cout << " Wrong answer. It's 18 or 20. And definitely not \"woof\":D" << std::endl;
		count_of_incorrect_answers++;
	}
	std::cout << " \n\t\t==== 3rd question. ====" << std::endl;
	std::cout << " \nHow to pronounce the \"C#\"?" << std::endl;
	std::cout << " \n [1] - C-hashtag\n [2] - C-shark\n [3] - SIIIIIIIIIIuuuuuu\n [4] - C-sharp" << std::endl; std::cin >> answer;
	if (answer == 4)
	{
		std::cout << "\t\t\tCorrect!" << std::endl;
		count_of_correct_answers++;
	}
	else if (answer == 3)
	{
		std::cout << " :D meme: https:\//youtu.be/0acgpCo6HFc \n Memes are memes, but the answer is \"C-sharp\"" << std::endl;
		count_of_incorrect_answers++;
	}
	else
	{
		std::cout << "Wrong answer. It's \"C-sharp\"" << std::endl;
		count_of_incorrect_answers++;
	}
	std::cout << " \n\t\t==== 4th question. ====" << std::endl;
	std::cout << " \nWhat the largest object in the Solar System?" << std::endl;
	std::cout << " \n [1] - Jupiter\n [2] - Pluto;\n [3] - Nicki Minaj's butt...\n [4] - Don't bite me with the 3rd answer option. It's the Sun;" << std::endl; std::cin >> answer;
	if (answer == 4)
	{
		std::cout << "\t\t\tCorrect!:D" << std::endl;
		count_of_correct_answers++;
	}
	else if (answer == 3)
	{
		std::cout << "\t\t\tClose enough, but it's Sun:D" << std::endl;
		count_of_incorrect_answers++;
	}
	else
	{
		std::cout << "\t\t\tWrong answer. It's Sun." << std::endl;
		count_of_incorrect_answers++;
	}
	std::cout << " \n\t\t==== 5th question. ====" << std::endl;
	std::cout << " \nThe capital city of California state is..." << std::endl;
	std::cout << " \n [1] - Los Angeles\n [2] - San Francisco\n [3] - Sacramento\n [4] - San Diego" << std::endl; std::cin >> answer;
	if (answer == 3)
	{
		std::cout << "\t\t\tCorrect!" << std::endl;
		count_of_correct_answers++;
	}
	else
	{
		std::cout << " Nope, it's Sacramento.\n Don't worry, there are a lot of people who think it's LA:)" << std::endl;
		count_of_incorrect_answers++;
	}
	std::cout << "\n -----------------------------------------------------------\n" << std::endl;
	std::cout << " Alright, here's your results:" << std::endl;
	std::cout << "\n Correct answers: " << count_of_correct_answers << std::endl;
	std::cout << "\n Incorrect answers: " << count_of_incorrect_answers << std::endl;
	std::cout << "\n\t\t  ==== That's all, byee! ====" << std::endl;
#endif // Mini quiz task

#ifdef CALC_TASK
	/*                                              ==== KNOWN ERRORS ====

							  - Не совсем корректно работает защита от ввода букв вместо цифр.

														  Подробнее:
			   При первом проходе цикла, все работает как надо, (при вводе буквы вместо цифры выдает ошибку ввода и прога закрывается).
			   Однако, при повторе цикла (после try again = Y) ошибка дает сбой и отправляет цикл в луп.
			   Решение понимаю, нужен еще один оператор "break;" но куда именно прописать пока не понял...
	*/
	double operand_a;
	double operand_b;
	char operation;
	char choice;

	std::cout << "\t\t-----------------------------------------------------" << std::endl;
	std::cout << "\t\t|   Hi! Welcome to the simpliest calculator ever!   |" << std::endl;
	std::cout << "\t\t-----------------------------------------------------" << std::endl;
	std::cout << "\n\t\t\tIn this programm you can use: \n \t\t   Two numbers and one arithmetic operator like:" << std::endl;
	std::cout << "\t\"+\" (addition), \"-\" (subtraction),\"*\" (multiplication), \"/\" (division)." << std::endl;
	std::cout << "\n\t\t       ------------------------------------       " << std::endl;
	std::cout << "\n\t\t\t     Tap \"Y\" if you ready." << std::endl; std::cin >> choice;
	if (choice == 'Y' || choice == 'y') {
		do {
			std::cout << "\n   So, what we gonna do? (enter your expression and tap the \"Enter\" to get result)." << std::endl; std::cin >> operand_a >> operation >> operand_b;

			if (operation == '+')
			{
				std::cout << operand_a << " + " << operand_b << " = " << operand_a + operand_b << std::endl;
			}
			else if (operation == '-')
			{
				std::cout << operand_a << " - " << operand_b << " = " << operand_a - operand_b << std::endl;
			}
			else if (operation == '*')
			{
				std::cout << operand_a << " * " << operand_b << " = " << operand_a * operand_b << std::endl;
			}
			else if (operation == '/')
			{
				std::cout << operand_a << " / " << operand_b << " = " << operand_a / operand_b << std::endl;
			}
			else
			{
				std::cout << "\n\t\t\t\t   KERNEL PANIC.\n\t\t\t    (not really, just an error.)" << std::endl;
				std::cout << "\n\t\t   tip: Don't use letters next time;)\n\t\t    " << std::endl;
				break;
			}
			std::cout << "\n\t\t\t Wanna try again? \"Y\" - yes!" << std::endl; std::cin >> choice;
		} while (choice == 'Y' || choice == 'y');
	}
	std::cout << "\t\t\t  ==--==--== Bye!! ==--==--==" << std::endl;

#endif // Simple calculator task
}