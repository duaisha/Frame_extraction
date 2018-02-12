"../driver_assistance_project/Talking_phone_data/1.mp4"

#!/bin/bash
clear

for i in {1..12}
do
echo $i

./test2 "../driver_assistance_project/Talking_phone_data/$i"".mp4" "$i"

done

echo All done
