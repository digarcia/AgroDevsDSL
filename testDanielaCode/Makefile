##################################################################################
# Pruebas modelos CellDevs
##################################################################################

SIMU_BIN = $(CURDIR)/cd++

# Simulacion utilizando el simulador avanzado con tuplas. Modelo normal.
forestFire:
	./bin/cd++ -mForestFire.ma -l./logs/ForestFire.log -o./logs/ForestFire.out -t00:00:02:000

#	./helperDraw.py -x 10 -y 10 -z 3 -out png -plot 1 -adv 1 -time 00:00:00:000:0 -log ./logs/building1_tupla.log01

forestFireMultiValue:
	./bin/cd++ -mForestFireMultiValue.ma -l./logs/ForestFireMultiValue.log -o./logs/ForestFireMultiValue.out -t00:00:02:000

twoStepPrototype:
	./bin/cd++ -mTwoStepPrototype.ma -l./logs/TwoStepPrototype.log -o./logs/TwoStepPrototype.out -t00:00:00:400


languajeTest:
	./bin/cd++ -mTwoStepPrototype-languajeTest.ma -l./logs/TwoStepPrototype-languajeTest.log -o./logs/TwoStepPrototype-languajeTest.out -t00:00:00:400

prototypeSyntaxDemo:
	./bin/cd++ -mTwoStepPrototype-syntaxDemo.ma -l./logs/TwoStepPrototype-syntaxDemo.log -o./logs/TwoStepPrototype-syntaxDemo.out -t00:00:00:400


