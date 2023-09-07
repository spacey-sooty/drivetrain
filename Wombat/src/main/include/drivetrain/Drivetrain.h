#pragma once

#include "behaviour/HasBehaviour.h"
#include "Gearbox.h"

namespace wom {
  struct DrivetrainConfig {};

  enum DrivetrainState {};

  class Drivetrain : public behaviour::HasBehaviour {
  public:
    Drivetrain(DrivetrainState *state);
    ~Drivetrain();

    DrivetrainConfig &GetConfig();
    DrivetrainState GetState();

    void SetState(DrivetrainState state);

  protected:

  private:
    DrivetrainConfig *_config;
    DrivetrainState _state;
  };
}

