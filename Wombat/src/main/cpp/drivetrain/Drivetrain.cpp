#include "drivetrain/Drivetrain.h"

using namespace wom;

Drivetrain::Drivetrain(DrivetrainConfig *config): _config(config) {}
Drivetrain::~Drivetrain() {}

DrivetrainConfig *Drivetrain::GetConfig() { return _config; } 
DrivetrainState Drivetrain::GetState() { return _state; }

void Drivetrain::SetState(DrivetrainState state) { _state = state; }

void Drivetrain::OnStart() {
  std::cout << "Starting Tank" << std::endl;
}
