class Building;
class NonStrategic: Building {
	class DestructionEffects;
};    
class HouseBase: NonStrategic {};    
class House: HouseBase {
	class DestructionEffects: DestructionEffects {
		class Smoke1 {
			type="HouseDestructionSmoke3";
		};
		class Smoke2: Smoke1 {
			type="HouseDestructionSmoke4";
		};
		class Smoke3: Smoke1 {
			type="HouseDestrSmokeLong";
		};
	};
};