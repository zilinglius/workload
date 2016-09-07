#!/bin/sh
cp ../../bin/wsg .
sudo docker build -t wsg .
#rm wsg
sudo docker rm $(sudo docker ps -a -q)
sudo docker rmi $(sudo docker images -q -f "dangling=true")
sudo docker tag $(sudo docker images wsg -q) zilinglius/workload:short-general
sudo docker login
sudo docker push zilinglius/workload:short-general
