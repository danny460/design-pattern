#include <iostream>

using namepace std;

class Command{
	public:
		virtual ~Command(){};
		virtual void execute() = 0;
};

class InputHandler{
	public:
		virtual void handleInput();
};

class JumpCommand : public Command {
	public:
		virtual void execute()
};
//CrouchCommand
//MoveLeftCommand
//MoveRightCommand

int main(){
	//
}