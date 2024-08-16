#pragma once
#include "Transport.h"

//#ifdef GonkaDinamicLab_EXPORTS
//#define GonkaDinamicLab_API __declspec(dllexport)
//#else
//#define GonkaDinamicLab_API __declspec(dllimport)
//#endif

namespace TransportOfRace
{
	class /*GonkaDinamicLab_API*/ GroundTransportCamel : public TransportOfRace::Transport
	{
	public:
		GroundTransportCamel();
	};

	class /*GonkaDinamicLab_API*/ GroundTransportCamelFast : public TransportOfRace::Transport
	{
	public:
		GroundTransportCamelFast();
	};

	class /*GonkaDinamicLab_API*/ GroundTransportCentaur : public TransportOfRace::GroundTransportCamel
	{
	public:
		GroundTransportCentaur();
	};

	class /*GonkaDinamicLab_API*/ GroundTransportAllterrainBoots : public TransportOfRace::GroundTransportCamel
	{
	public:
		GroundTransportAllterrainBoots();
	};
}