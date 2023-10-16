# Developer Documentation

Write the docs, just in case.

## Gameplay

### Time

- **Scale**: 2 seconds real time = 1 minute game time.  
- **Epoc**: Midnight on starting day. Actual start time is offset by 6-7 hours to start player at dawn. This means a new game starts 6-7 hours past the epoc.  
- **Time point**: integer that represents the minutes in game time since the epoc.
- **TimePointDelta**: when present, this represents the in game minutes elapsed since the last tick. Used for timers that fetch the time point at their own rate. Ensures that they stay in sync.

In-game time is tracked in `BP_GameTime`, it contains the master tick (every one game time minute) for tracking time. The tick needs to be started when starting a new game, loading a save game or unpausing. All time dependent features have to use the time point in this blueprint. Time should not be separately tracked. Timers that need a tick other than one in game minute should fetch the current time point at the interval they are required to update at.

Also, it is advised to not create separate timers for ticks that run at different durations. For example, the five in game minutes tick also contains the one in game hour tick. With every five minute tick an integer is incremented, once it reaches 12 the one hour tick runs, the integer is reset and the cycle starts over. This is to ensure that things happen in a predictable order, e.g., when the hour tick runs it saves the game, it runs after the five minute tick that updates all attribute values. This way the game is always saved after the attributes are updated and as the last action of the five minute tick, since it may take a while to save. This prevents things like saving from delaying attribute updates and keeps the game running as intended.

## Player Character

### Attributes

0 = health
1 = Energy
2 = Stamina
3 = Stomach
4 = Hydration

For attributes that have a constant decay rate the `AttributeRate` represents the decay per in game minute. When an attribute is updated it should fetch the `TimePointDelta` and multiply it with the `AttrubuteRate`.

### Actions

#### Sleep

Sleeping sets energy and stamina to full and passes the time that was needed for energy to recover fully.

## Fonts & Icons

Use icons whenever possible and a fitting [Material Symbols](https://fonts.google.com/icons?query=sym&icon.platform=web&icon.set=Material+Symbols) icon exists.

Material Symbol settings
- `Rounded`
- `Fill: 0`
- `Weight: 700`
- `Grade: 0`
- `Optical size: 48px`

Download as PNG (remove suffix and keep only the base name) then add to project in `Game/UI/Icons`.