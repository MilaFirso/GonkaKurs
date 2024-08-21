#pragma once
#include "Transport.h"

#ifdef GonkaDinamicLab_EXPORTS
#define GonkaDinamicLab_API __declspec(dllexport)
#else
#define GonkaDinamicLab_API __declspec(dllimport)
#endif

namespace TransportOfRace
{
	class GonkaDinamicLab_API AirTransportCarpetPlane : public TransportOfRace::Transport
	{
	public:
		AirTransportCarpetPlane();
	};

	class GonkaDinamicLab_API AirTransportEagle : public TransportOfRace::Transport
	{
	public:
		AirTransportEagle();
	};

	class GonkaDinamicLab_API AirTransportBroomstick : public TransportOfRace::Transport
	{
	public:
		AirTransportBroomstick();
	};
}