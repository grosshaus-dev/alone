# Do

## [0.0.1] **unreleased**

Version 0.0.1 focuses on creating a minimum viable prototype. This means having a map to play on and all the core mechanics needed to survive indefinitely implemented.

### Do

### Add

- [x] Main menu.
- [x] Pause menu.
- [x] HUD with attribute bars.
  - [x] Health.
  - [x] Energy.
  - [x] Stamina.
  - [x] Stomach.
  - [x] Hydration.
- [x] Test level.
- [x] Player character.
  - [x] Hitbox.
  - [x] Walk.
  - [x] Crouch.
  - [x] Sprint.
  - [x] Jump.
  - [x] Change speed when crawling.
- [x] Three game save slots.
- [x] Attribute values change as they should.
- [x] Info HUD, shows values as text.
- [x] Help menu in game.
- [x] Tell players that they can press h for help.
- [x] Origin picker.
  - [x] Add to menu.
  - [x] Add buff to character on spawn.
- [x] Traits picker.
  - [x] Add to menu.
  - [x] Add buff to character on spawn.
- [x] Death screen.
- [x] Scaled time with in game 'clock'.
  - [x] Day/night cycle.
    - [x] Offset time at spawn to prevent spawning at midnight.
  - [x] Energy decreases based on time passed.
  - [x] Can sleep to gain energy, pass time faster.
  - [x] Minute in game time tick, used to update things like metabolism, etc.
- [x] Interaction system.
  - [x] Interface for all interactive objects.
- [x] Rename info panel to debug panel.
- [x] Add ability to set attribute values in debug menu.
- [ ] Beach spawner.
  - [x] Basic spawner.
  - [x] Way to keep eggs from rolling out of their nest.
  - [x] Way to prevent multiple objects spawning on top of each other.
  - [x] Chance not to spawn anything.
  - [ ] Automatic re-spawning when change from high to low tide.
  - [ ] Way to define an area to spawn in, so that I don't have to place every spawner manually.
    - [ ] Can simply create a volume over the beach, spawning then line traces down and spawns if there's nothing in the way.
- [ ] Create dune grass (interactive), yields grass.
- [x] Create reeds (interactive), yields reed.
- [x] Create non-interactive grass.
- [ ] Replace bindings with event dispatchers for UI.
- [ ] Use built in event anydamage for applying damage and healing (just a - damage).
- [x] Head bobbing. (rafael)
- [x] Breathing sounds when out of stamina.
- [x] Detect if in sun or not. (rafael)
- [ ] Ocean water.
  - [ ] Tides.
- [ ] Ability to toggle numbers for stats while in game.
- [x] Update 3D models.
- [x] Add in-game stats panel.
- [x] Add stats overview to character creation screen.
- [x] Add stats animation.
- [ ] Add fall damage.

### Change

- [x] Use object based system for origin attribute adjustments.
- [x] Subsurface on materials like snail body.
- [ ] Flatten mountain tops so terrain looks more realistic.
- [ ] Make health and death non-deterministic.

### Fix

- [x] Stamina is used when spamming spacebar.
- [x] Last trait picked not being applied.
- [x] Dawn/dusk is too long (may be adjustable in blueprint default settings?).
- [x] Death menu doesn't get mouse focus.
- [x] Movement not working correctly, slowing down after first few steps.
- [x] Update help panel to accurately reflect features in game.

### Remove

- [x] Crawling.

### Backlog
- [ ] Environmental sounds.
- [ ] Footstep sounds depending on floor type.
- [ ] Footprints in sand.
- [ ] Three hearts 'lives' system.
