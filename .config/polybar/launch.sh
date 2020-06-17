#!/usr/bin/env bash

# Terminate already running bar instances
killall -q polybar

# Wait until the processes have been shut down
while pgrep -u $UID -x polybar >/dev/null; do sleep 1; done

# Launch polybar (named spacebar in my case!)
polybar spacebar &
#If you want to launch a second bar:
#polybar barname &

echo "Bars launched..."
