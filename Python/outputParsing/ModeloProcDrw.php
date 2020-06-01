<?php  if ( ! defined('BASEPATH')) exit('No direct script access allowed');
class Archivos {


	function procesa_drw($id_test, $datos){
			//.....
			$puertos = $this->object->archivos_model->_puertos();
			for ($i=0; $i<count($puertos); $i++) {
				$archivo			= "agro_".$puertos[$i]['puerto'].".drw";
//log_message('error', "archivo=".$archivo."=");
				$ruta_archivo 		= $carpeta_test.'/'.$archivo;
				$fp 				= fopen($ruta_archivo, "r");
	
				if ($fp !== FALSE) {
					while(!feof($fp)) {
						$linea = fgets($fp);
						
						if (substr($linea,0,4) == 'Line') {
							// parsea tiempo
							$tiempo = substr($linea, -13, 12);
							
							// descarta encabezado
							$linea = fgets($fp);
							$linea = fgets($fp);
							
							for ($fila =0; $fila<$filas; $fila++) {
								$linea = fgets($fp);
								
								$inicio			= strpos($linea, '|');
								$fin			= strrpos($linea, '|');
								$total			= strlen($linea) - $inicio - (strlen($linea) - $fin) - 1;
								$linea 			= substr($linea, $inicio+1, $total);
								$datos_columnas	= $this->obtiene_datos($linea);
								if (count($datos_columnas) == $columnas) {
									for ($columna =0; $columna<$columnas; $columna++) {
										if ($procesar) {
											$test_contenido[] = array(
																'id_test' 	=> $id_test,
																'id_puerto' => $puertos[$i]['id_puerto'],
																'fila' 		=> $fila,
																'columna' 	=> $columna,
																'tiempo' 	=> $tiempo,
																'valor' 	=> $datos_columnas[$columna],
															);	
									
											// parte la carga por commit
											if (count($test_contenido) > 1000) {
												$procesar = $this->object->archivos_model->_guardar_contenido($test_contenido, $id_test);
												$test_contenido = array();
											}
										}
									}
								}
							}					
	
							// descarta fin
							$linea = fgets($fp);
						}
					}
				} else {
					return FALSE;
				}
				
				fclose($fp);
			}
		}

	function obtiene_datos($linea) {
		$arreglo_datos 	= array();
		$vueltas		= 0;
		
   		while (strlen($linea) >0) {
	   		$linea 				= trim($linea);
			$espacio 			= strpos($linea, ' ');
			
			if ($espacio === FALSE) {
				// no hay espacios
				$arreglo_datos[] 	= $linea;
				$linea 				= null;
			} else {
				$arreglo_datos[] 	= substr($linea, 0, $espacio);
				$linea 				= substr($linea, $espacio+1, strlen($linea));
			}
		}
		
		return $arreglo_datos;
	}
}