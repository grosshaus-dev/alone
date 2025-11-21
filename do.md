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
- [x] Replace bindings for UI.
- [x] Head bobbing. (Rafael)
- [x] Breathing sounds when out of stamina.
- [x] Detect if in sun or not. (Rafael)
- [x] Ocean water.
- [x] Update 3D models.
- [x] Add in-game stats panel.
- [x] Add stats overview to character creation screen.
- [x] Add stats animation.
- [x] Add fall damage.
- [ ] Add pain sound.
- [x] Add inventory system.
- [x] Three hearts 'lives' system.
- [x] Control to scroll trough inventory with mouse wheel.
- [x] Number keys mapped to inventory slots.
- [x] Chests.
  - [x] Large stationary chest.
  - [x] Medium carryable chest.
  - [x] Small chest, that you can pick up.
- [x] Fire system. (Rafael)
  - [x] Fire can spread.
  - [x] Items to start fire with.
- [x] Add physics.
- [x] Proper test map.
- [ ] Beached wales/dolphins, etc. (Isak)
    - [ ] Can use blubber to make oil. (Isak)
- [ ] Swim system from recordings. (Isak)
    - [ ] Headbobbing while swimming.
    - [ ] Breath, loose breath underwater.
    - [ ] Post-process volume when under water.
- [x] Spawn point system with unlocking additional spawn points as you discover them.
- [x] Notification system, how to notify player of unlocks, etc.
- [ ] RPG style stat points that you can assign when you start. Instead of origins. Effect your stats. Unlock more points the more you level up.
- [x] Campaign picker.
- [x] Can pick spawn region from menu, actualy spawn at one of the regions spawn points.
- [x] Global XP.
    - [x] Gain XP when unlocking a spawn point.
    - [x] Gain XP when unlocking a region.
- [ ] Trait points and trait point unlocks.
- [x] Spyglass.
- [ ] Broken bottle that can be used to start a fire.
- [x] Break bottle when unlocking spawn point.
- [ ] Can carry snail in hand.
    - [ ] Snail should close when in hand, open when placed again.
    - [ ] Shell and cap is kept when eaten.
- [x] Hide UI on button press.
- [x] Tides.
- [ ] Puddles that appear after rain, dissapear again after a while.
- [ ] Wetness for player, get wet when standing in rain.
- [ ] Wetness for fire, rain can extinguish fires.
- [ ] Weather.
- [ ] Climate.


### Change

- [x] Use object based system for origin attribute adjustments.
- [x] Subsurface on materials like snail body.
- [x] Rename files to fit naming conventions.
- [x] Can change number of inventory slots.
- [x] Revert to simple, plane based water.
- [x] Restore Good Hope as starter map.

### Fix

- [x] Stamina is used when spamming spacebar.
- [x] Last trait picked not being applied.
- [x] Dawn/dusk is too long (may be adjustable in blueprint default settings?).
- [x] Death menu doesn't get mouse focus.
- [x] Movement not working correctly, slowing down after first few steps.
- [x] Update help panel to accurately reflect features in game.
- [x] Save amount of hearts left in save game.
- [ ] Stamina can have more than Max.
- [x] Magnifier spawns at ground of Chest.
- [ ] Chest rotates while being carried.

### Remove

- [x] Crawling.

### Backlog

- [ ] Environmental sounds.
- [ ] Footstep sounds depending on floor type.
- [ ] Footprints in sand.
