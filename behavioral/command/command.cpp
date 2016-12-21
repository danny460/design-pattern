#include <iostream>

using namepace std;

class Command{
	public:
		virtual ~Command(){};
		virtual void execute(GameActor& Player) = 0;
};

class InputHandler{
	private:
		Command* buttonUp;		
		Command* buttonDown;	
		Command* buttonLeft;
		Command* buttonRight;
	public:
		virtual Command* handleInput(){
			if(isPressed(UP)) return buttonUp ;
			if(isPressed(DOWN)) return buttonDown ;			
			if(isPressed(LEFT)) return buttonLeft ;
			if(isPressed(RIGHT)) return buttonRight ;		
			return NULL; //NULL Object
		};
};

class JumpCommand : public Command {
	public:
		virtual void execute(){
			//JumpCommand
		};
};

class CrouchCommand : public Command {
	public: 
		virtual void execute(){
			//CrouchCommand
		};
};

class MoveLeftCommand : public Command {
	public: 
		virtual void execute(){
			//MoveLeftCommand
		};
};

class MoveRightCommand : public Command {
	public: 
		virtual void execute(){
			//MoveRightCommand
		};
};

int main(){
	//
}
