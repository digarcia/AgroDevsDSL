##################################################################################
# Edificio 1
##################################################################################

# Simulacion utilizando el simulador avanzado con tuplas. Sin Humo, ni accidentes
ed1_noSmoke:
	./bin/cd++ -mbuilding1_tupla.ma -l./logs/building1_tupla.log -o./logs/building1_tupla.out -t00:00:02:000
	./helperDraw.py -x 10 -y 10 -z 3 -out png -plot 1 -adv 1 -time 00:00:00:000:0 -log ./logs/building1_tupla.log01

# Simulacion con humo y sin accidentes
ed1_onlySmoke:
	cd++ -mbuilding1_humo.ma -l./logs/building1_humo.log -o./building1_humo.out -t00:00:02:00
	./helperDrawHumo.py -x 10 -y 10 -z 3 -out png -plot 1 -adv 1 -time 00:00:00:500:0 -log ./logs/building1_humo.log01

# Simulacion con humo y accidentes
ed1_acc:
	cd++ -mbuilding1_accidentes.ma -l./logs/building1_accidentes.log -o./logs/building1_accidentes.out -t00:00:02:00
	./helperDrawHumo.py -x 10 -y 10 -z 3  -out png -plot 1 -adv 1 -time 00:00:00:500:0 -log ./logs/building1_accidentes.log01	

# Simulacion mas rapida, con menos movimiento de humo y accidentes
ed1_lessSmoke:
	cd++ -mbuilding1_lessSmoke.ma -l./logs/building1_lessSmoke.log -o./logs/building1_lessSmoke.out -t00:00:02:00
	./helperDrawHumo.py -x 10 -y 10 -z 3 -out png -plot 1 -adv 1 -time 00:00:00:500:0 -log ./logs/building1_lessSmoke.log01	


##################################################################################
# Edificio 2
##################################################################################

# Simulacion de Edificio 2 con humo y accidentes
ed2:
	cd++ -mbuilding2_lowsmoke.ma -l./logs/building2_smoke.log -o./logs/building2_smoke.out -t00:00:02:000
	./helperDrawHumo.py -x 20 -y 16 -z 4 -out png -plot 1 -adv 1 -time 00:00:00:500:0 -log ./logs/building2_smoke.log01


##################################################################################
# Edificio 3
##################################################################################

# Simulacion de Edificio 2 con humo y accidentes
ed3:
	cd++ -mbuilding3_lowsmoke.ma -l./logs/building3_smoke.log -o./logs/building3_smoke.out -t00:00:02:000
	./helperDrawHumo.py -x 20 -y 16 -z 4 -out png -plot 1 -adv 1 -time 00:00:00:500:0 -log ./logs/building3_smoke.log01


##################################################################################
# Edificio 4
##################################################################################

# Simulacion de Edificio 2 con humo y accidentes
ed4:
	cd++ -mbuilding4_lowsmoke.ma -l./logs/building4_smoke.log -o./logs/building4_smoke.out -t00:00:02:000
	./helperDrawHumo.py -x 20 -y 20 -z 5 -out png -plot 1 -adv 1 -time 00:00:00:500:0 -log ./logs/building4_smoke.log01	

	
##################################################################################
# Parsing Logs de VM
##################################################################################
# Parsea Logs Files generados por el simulador de la maquina virtual.
# 	Simulacion del modelo original sin humo ni accidentes. Tampoco utiliza tuplas
vm:
	./helperDraw.py -x 10 -y 10 -z 3 -out png -adv 0 -time 00:00:00:000 -log ./logs/building1_vm.log

vm500:
	./helperDraw.py -x 10 -y 10 -z 3 -out png -adv 0 -time 00:00:00:500 -log ./logs/building1_vm.log

