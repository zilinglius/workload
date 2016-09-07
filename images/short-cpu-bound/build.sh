#!/bin/sh
cp ../../bin/wsc .
sudo docker build -t wsc .
sudo docker rm $(sudo docker ps -a -q)
sudo docker rmi $(sudo docker images -q -f "dangling=true")
sudo docker tag $(sudo docker images wsc -q) zilinglius/workload:short-cpu-bound
sudo docker login
sudo docker push zilinglius/workload:short-cpu-bound
rm wsc
