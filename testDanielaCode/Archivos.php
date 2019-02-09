<?php  if ( ! defined('BASEPATH')) exit('No direct script access allowed');
class Archivos {

	/**
	 * Funciones para el manejo de los archivos
	 * generados en el sistema
	*/

	/* Rutas fuentes */
	private $_ruta_fuentes_vistas	= 'fuentes/';

	/* Rutas de salida */
	private $_ruta_tablas			= './archivos/tablas/';
	private $_ruta_parametros		= './archivos/parametros/';
	private $_ruta_eventos			= './archivos/eventos/';
	private $_ruta_ejecuciones		= './archivos/ejecuciones/';
	private $_ruta_fuentes			= './archivos/fuentes/';

	/* saltos  de linea */
	private $_salto_mac 			= "\r"; 	// Carriage Return: Mac
	private $_salto_unix 			= "\n"; 	// Line Feed: Unix
	private $_salto_win 			= "\r\n"; 	// Carriage Return and Line Feed: Windows
	
	function Archivos()
	{
		$this->object =& get_instance();

		$this->object->load->model('library/archivos_model');
	}

	/****************************************
	* TABLAS                                *
	****************************************/

	/*************************************************************
	* Genera archivo TABLAS.INC                                  *
	* RETORNO: TRUE / FALSE                                      *
	* Parametros                                                 *
	* id_tabla                                                   *
	* datos  => array                                            *
	*   precios 		=> array(id_lu, precio)                  *
	*   costos 			=> array(id_lu, id_mgm, costo)           *
	*   rindes 			=> array(id_lu, id_mgm, id_amb, rinde)   *
	*   emergias 		=> array(id_lu, id_mgm, id_amb, emergia) *
	*   ajuste_ue_amb 	=> array(id_amb, valor)                  *
	*   ajuste_ue_ent	=> array(id_mgm_ent, id_mgm, valor)      *
	*   wc_maximos		=> array(id_mgm, valor)                  *
	*************************************************************/
	function procesa_archivo_tabla($id_tabla, $datos){
		$ultimo_manejo 		= $this->object->archivos_model->_ultimo_manejo($id_tabla);			
		$ultimo_ambiente 	= $this->object->archivos_model->_ultimo_ambiente($id_tabla);			

		// prepara datos archivo
		// precios
		$datos_precios	= $datos['precios'];
		$precios 		= array();
		for ($i=0; $i < count($datos_precios); $i++) {
			$precios[] = array(
									"precio_lu_id"		=> $datos_precios[$i][0],
									"precio_precio"		=> $datos_precios[$i][1],							
								);
		}

		// costos
		$datos_costos 	= $datos['costos'];
		$total			= count($datos_costos);
		$costos 		= array();
		$indice_costos	= 0;
		for ($i=0; $i < $total; $i++) {
			$id_lu = $datos_costos[$i][0];
			$costos[$indice_costos]["costo_lu_id"] = $id_lu;
			
			// manejos
			$contenido_costos_mgm_amb = array();
			while (
				$i < $total &&
				$id_lu == $datos_costos[$i][0]
			){
				$id_mgm = $datos_costos[$i][1];
				$id_amb = $datos_costos[$i][2];
				
				$signo = '+';
				if (
					$id_mgm == $ultimo_manejo &&
					$id_amb == $ultimo_ambiente
				) {
					// ultimo
					$signo = '';				
				}
				
				$contenido_costos_mgm_amb[] = array (
												"costo_mgm_id" 	=> $id_mgm,
												"costo_amb_id" 	=> $id_amb,
												"costo_costo" 	=> $datos_costos[$i][3],
												"costo_signo" 	=> $signo,
				);
				
				$i = $i + 1;
				
			}
			$costos[$indice_costos]["contenido_costos_mgm_amb"] = $contenido_costos_mgm_amb;

			$indice_costos = $indice_costos + 1;
			// para que al entrar al for no saltee uno
			$i = $i - 1;
		}

		// rindes
		$datos_rindes 	= $datos['rindes'];
		$total			= count($datos_rindes);
		$rindes 		= array();
		$indice_rindes	= 0;
		for ($i=0; $i < $total; $i++) {
			$id_lu = $datos_rindes[$i][0];
			$rindes[$indice_rindes]["rinde_lu_id"] = $id_lu;
			
			// manejos
			$contenido_rindes_mgm_amb = array();
			while (
				$i < $total &&
				$id_lu == $datos_rindes[$i][0]
			){
				$id_mgm = $datos_rindes[$i][1];
				$id_amb = $datos_rindes[$i][2];
				
				$signo = '+';
				if (
					$id_mgm == $ultimo_manejo &&
					$id_amb == $ultimo_ambiente
				) {
					// ultimo
					$signo = '';				
				}
				
				$contenido_rindes_mgm_amb[] = array (
												"rinde_mgm_id" 	=> $id_mgm,
												"rinde_amb_id" 	=> $id_amb,
												"rinde_rinde" 	=> $datos_rindes[$i][3],
												"rinde_signo" 	=> $signo,
				);
				
				$i = $i + 1;
				
			}
			$rindes[$indice_rindes]["contenido_rindes_mgm_amb"] = $contenido_rindes_mgm_amb;

			$indice_rindes = $indice_rindes + 1;
			// para que al entrar al for no saltee uno
			$i = $i - 1;
		}

		// emergias
		$datos_emergias		= $datos['emergias'];
		$total				= count($datos_emergias);
		$emergias 			= array();
		$indice_emergias	= 0;
		for ($i=0; $i < $total; $i++) {
			$id_lu = $datos_emergias[$i][0];
			$emergias[$indice_emergias]["emergia_lu_id"] = $id_lu;
			
			// manejos
			$contenido_emergias_mgm_amb = array();
			while (
				$i < $total &&
				$id_lu == $datos_emergias[$i][0]
			){
				$id_mgm = $datos_emergias[$i][1];
				$id_amb = $datos_emergias[$i][2];
				
				$signo = '+';
				if (
					$id_mgm == $ultimo_manejo &&
					$id_amb == $ultimo_ambiente
				) {
					// ultimo
					$signo = '';				
				}
				
				$contenido_emergias_mgm_amb[] = array (
												"emergia_mgm_id" 	=> $id_mgm,
												"emergia_amb_id" 	=> $id_amb,
												"emergia_emergia" 	=> $datos_emergias[$i][3],
												"emergia_signo" 	=> $signo,
				);
				
				$i = $i + 1;
				
			}
			$emergias[$indice_emergias]["contenido_emergias_mgm_amb"] = $contenido_emergias_mgm_amb;

			$indice_emergias = $indice_emergias + 1;
			// para que al entrar al for no saltee uno
			$i = $i - 1;
		}

		// ajuste ue por ambiente
		$datos_ajuste_ue_amb	= $datos['ajuste_ue_amb'];
		$total					= count($datos_ajuste_ue_amb);
		$ajuste_ue_amb 			= array();
		for ($i=0; $i < $total; $i++) {
			$signo = '+';
			if ($i == ($total-1)) {
				// ultimo
				$signo = '';				
			}
							
			$ajuste_ue_amb[] = array(
									"ajuste_ambiente_amb_id"	=> $datos_ajuste_ue_amb[$i][0],
									"ajuste_ambiente_valor"		=> $datos_ajuste_ue_amb[$i][1],							
									"ajuste_ambiente_signo"		=> $signo,
								);
		}

		// ajuste ue por entorno
		// array(id_mgm_ent, id_mgm, valor)
		$datos_ajuste_ue_ent	= $datos['ajuste_ue_ent'];
		$total					= count($datos_ajuste_ue_ent);
		$ajuste_entorno_vecino 	= array();
		$manejos_id				= array();
		for ($i=0; $i < $total; $i++) {
			$signo = '+';
			if ($i == ($total-1)) {
				// ultimo
				$signo = '';				
			}
						
			// obtiene manejos para los individuales
			if(!in_array($datos_ajuste_ue_ent[$i][1], $manejos_id)) {
				$manejos_id[] = $datos_ajuste_ue_ent[$i][1];
			}
			
			$ajuste_entorno_vecino[] = array(
									"mgmv_v_mgm_id"		=> $datos_ajuste_ue_ent[$i][0],
									"mgmv_mgm_id"		=> $datos_ajuste_ue_ent[$i][1],							
									"mgmv_valor"		=> $datos_ajuste_ue_ent[$i][2],							
									"mgmv_signo"		=> $signo,
								);
		}

		$ajuste_entorno			= array();		
		for ($i=0; $i < count($manejos_id); $i++) {
			$ajuste_entorno_mgm_id = $manejos_id[$i];
			
			$contenido_ajuste_entorno_mgmv = array();
			for ($j=0; $j < $total; $j++) {
				$signo = '+';
				if ($datos_ajuste_ue_ent[$j][1] == $ajuste_entorno_mgm_id) {
					$contenido_ajuste_entorno_mgmv[] = array(
															"ajuste_entorno_mgmv_id"	=> $datos_ajuste_ue_ent[$j][0],
															"ajuste_entorno_valor"		=> $datos_ajuste_ue_ent[$j][2],							
															"ajuste_entorno_signo"		=> $signo,
										);
				}
			}
			$cantidad_contenido = count($contenido_ajuste_entorno_mgmv);
			$contenido_ajuste_entorno_mgmv[$cantidad_contenido-1]['ajuste_entorno_signo'] = '';
				
			$ajuste_entorno[] = array(
											"ajuste_entorno_mgm_id"				=> $ajuste_entorno_mgm_id,
											"contenido_ajuste_entorno_mgmv"		=> $contenido_ajuste_entorno_mgmv,
									);
		}

		// rangos wc
		$datos_wc_maximos	= $datos['wc_maximos'];
		$wc_maximos 		= array();
		for ($i=0; $i < count($datos_wc_maximos); $i++) {
			$wc_maximos[] = array(
									"wc_maximo_mgm_id"	=> $datos_wc_maximos[$i][0],
									"wc_maximo_valor"	=> $datos_wc_maximos[$i][1],							
								);
		}
		
		$datos_plantilla = array (
						"precios" 					=> $precios,
						"costos" 					=> $costos,
						"rindes" 					=> $rindes,
						"emergias" 					=> $emergias,
						"ajuste_ue_amb"			 	=> $ajuste_ue_amb,
						"ajuste_entorno_vecino" 	=> $ajuste_entorno_vecino,
						"ajuste_entorno" 			=> $ajuste_entorno,
						"wc_maximos" 				=> $wc_maximos,
				);
		
		return $this->_genera_archivo_tabla($id_tabla, $datos_plantilla);
	}

	/****************************************
	* Genera archivo TABLAS.INC desde base  *
	* RETORNO: TRUE / FALSE                 *
	* Parametros                            *
	* id_tabla                              *
	****************************************/
	function procesa_archivo_tabla_db($id_tabla){
		$ultimo_manejo 		= $this->object->archivos_model->_ultimo_manejo($id_tabla);			
		$ultimo_ambiente 	= $this->object->archivos_model->_ultimo_ambiente($id_tabla);			

		// borra anterior
		$carpeta 	= $this->_ruta_tablas;
		$archivo 	= $this->object->archivos_model->_archivo_por_tabla($id_tabla);			
		if (!is_null($archivo)) {
			$borra_archivo	= @unlink($carpeta.$archivo);
		}

		// prepara datos archivo
		// precios
		$datos_precios	= $this->object->archivos_model->_precios_por_tabla($id_tabla);			
		$precios 		= array();
		for ($i=0; $i < count($datos_precios); $i++) {
			$precios[] = array(
										"precio_lu_id"		=> $datos_precios[$i]['id_land_use'],
										"precio_precio"		=> $datos_precios[$i]['precio'],							
								);
		}
		
		// costos
		$datos_costos	= $this->object->archivos_model->_costos_por_tabla($id_tabla);			
		$total			= count($datos_costos);
		$costos 		= array();
		$indice_costos	= 0;
		for ($i=0; $i < $total; $i++) {
			$id_lu = $datos_costos[$i]['id_land_use'];
			$costos[$indice_costos]["costo_lu_id"] = $id_lu;
			
			// manejos
			$contenido_costos_mgm_amb = array();
			while (
				$i < $total &&
				$id_lu == $datos_costos[$i]['id_land_use']
			){
				$id_mgm = $datos_costos[$i]['id_manejo'];
				$id_amb = $datos_costos[$i]['id_ambiente'];
				
				$signo = '+';
				if (
					$id_mgm == $ultimo_manejo &&
					$id_amb == $ultimo_ambiente
				) {
					// ultimo
					$signo = '';				
				}
				
				$contenido_costos_mgm_amb[] = array (
												"costo_mgm_id" 	=> $id_mgm,
												"costo_amb_id" 	=> $id_amb,
												"costo_costo" 	=> $datos_costos[$i]['costo'],
												"costo_signo" 	=> $signo,
				);
				
				$i = $i + 1;
				
			}
			$costos[$indice_costos]["contenido_costos_mgm_amb"] = $contenido_costos_mgm_amb;

			$indice_costos = $indice_costos + 1;
			// para que al entrar al for no saltee uno
			$i = $i - 1;
		}

		// rindes
		$datos_rindes 	= $this->object->archivos_model->_rindes_por_tabla($id_tabla);	
		$total			= count($datos_rindes);
		$rindes 		= array();
		$indice_rindes	= 0;
		for ($i=0; $i < $total; $i++) {
			$id_lu = $datos_rindes[$i]['id_land_use'];
			$rindes[$indice_rindes]["rinde_lu_id"] = $id_lu;
			
			// manejos
			$contenido_rindes_mgm_amb = array();
			while (
				$i < $total &&
				$id_lu == $datos_rindes[$i]['id_land_use']
			){
				$id_mgm = $datos_rindes[$i]['id_manejo'];
				$id_amb = $datos_rindes[$i]['id_ambiente'];
				
				$signo = '+';
				if (
					$id_mgm == $ultimo_manejo &&
					$id_amb == $ultimo_ambiente
				) {
					// ultimo
					$signo = '';				
				}
				
				$contenido_rindes_mgm_amb[] = array (
												"rinde_mgm_id" 	=> $id_mgm,
												"rinde_amb_id" 	=> $id_amb,
												"rinde_rinde" 	=> $datos_rindes[$i]['rinde'],
												"rinde_signo" 	=> $signo,
				);
				
				$i = $i + 1;
				
			}
			$rindes[$indice_rindes]["contenido_rindes_mgm_amb"] = $contenido_rindes_mgm_amb;

			$indice_rindes = $indice_rindes + 1;
			// para que al entrar al for no saltee uno
			$i = $i - 1;
		}

		// emergias
		$datos_emergias 	= $this->object->archivos_model->_emergias_por_tabla($id_tabla);	
		$total				= count($datos_emergias);
		$emergias 			= array();
		$indice_emergias	= 0;
		for ($i=0; $i < $total; $i++) {
			$id_lu = $datos_emergias[$i]['id_land_use'];
			$emergias[$indice_emergias]["emergia_lu_id"] = $id_lu;
			
			// manejos
			$contenido_emergias_mgm_amb = array();
			while (
				$i < $total &&
				$id_lu == $datos_emergias[$i]['id_land_use']
			){
				$id_mgm = $datos_emergias[$i]['id_manejo'];
				$id_amb = $datos_emergias[$i]['id_ambiente'];
				
				$signo = '+';
				if (
					$id_mgm == $ultimo_manejo &&
					$id_amb == $ultimo_ambiente
				) {
					// ultimo
					$signo = '';				
				}
				
				$contenido_emergias_mgm_amb[] = array (
												"emergia_mgm_id" 	=> $id_mgm,
												"emergia_amb_id" 	=> $id_amb,
												"emergia_emergia" 	=> $datos_emergias[$i]['emergia'],
												"emergia_signo" 	=> $signo,
				);
				
				$i = $i + 1;
				
			}
			$emergias[$indice_emergias]["contenido_emergias_mgm_amb"] = $contenido_emergias_mgm_amb;

			$indice_emergias = $indice_emergias + 1;
			// para que al entrar al for no saltee uno
			$i = $i - 1;
		}
		
		// ajuste ue por ambiente
		$datos_ajuste_ue_amb	= $this->object->archivos_model->_ajuste_ambiente_por_tabla($id_tabla);			
		$ajuste_ue_amb 			= array();
		for ($i=0; $i < count($datos_ajuste_ue_amb); $i++) {
			$signo = '+';
			if ($i == (count($datos_ajuste_ue_amb)-1)) {
				// ultimo
				$signo = '';				
			}

			$ajuste_ue_amb[] = array(
										"ajuste_ambiente_amb_id"	=> $datos_ajuste_ue_amb[$i]['id_ambiente'],
										"ajuste_ambiente_valor"		=> $datos_ajuste_ue_amb[$i]['valor'],							
										"ajuste_ambiente_signo"		=> $signo,							
								);
		}

		// ajuste ue por entorno
		$datos_ajuste_ue_ent 	= $this->object->archivos_model->_ajuste_entorno_por_tabla($id_tabla);	
		$total					= count($datos_ajuste_ue_ent);
		$ajuste_entorno_vecino 	= array();
		$manejos_id				= array();
		for ($i=0; $i < $total; $i++) {
			$signo = '+';
			if ($i == ($total-1)) {
				// ultimo
				$signo = '';				
			}
						
			// obtiene manejos para los individuales
			if(!in_array($datos_ajuste_ue_ent[$i]['id_manejo'], $manejos_id)) {
				$manejos_id[] = $datos_ajuste_ue_ent[$i]['id_manejo'];
			}
			
			$ajuste_entorno_vecino[] = array(
									"mgmv_v_mgm_id"		=> $datos_ajuste_ue_ent[$i]['id_manejo_entorno'],
									"mgmv_mgm_id"		=> $datos_ajuste_ue_ent[$i]['id_manejo'],							
									"mgmv_valor"		=> $datos_ajuste_ue_ent[$i]['valor'],							
									"mgmv_signo"		=> $signo,
								);
		}

		$ajuste_entorno			= array();		
		for ($i=0; $i < count($manejos_id); $i++) {
			$ajuste_entorno_mgm_id = $manejos_id[$i];
			
			$contenido_ajuste_entorno_mgmv = array();
			for ($j=0; $j < $total; $j++) {
				$signo = '+';
				if ($datos_ajuste_ue_ent[$j]['id_manejo'] == $ajuste_entorno_mgm_id) {
					$contenido_ajuste_entorno_mgmv[] = array(
															"ajuste_entorno_mgmv_id"	=> $datos_ajuste_ue_ent[$j]['id_manejo_entorno'],
															"ajuste_entorno_valor"		=> $datos_ajuste_ue_ent[$j]['valor'],							
															"ajuste_entorno_signo"		=> $signo,
										);
				}
			}
			$cantidad_contenido = count($contenido_ajuste_entorno_mgmv);
			$contenido_ajuste_entorno_mgmv[$cantidad_contenido-1]['ajuste_entorno_signo'] = '';
				
			$ajuste_entorno[] = array(
											"ajuste_entorno_mgm_id"				=> $ajuste_entorno_mgm_id,
											"contenido_ajuste_entorno_mgmv"		=> $contenido_ajuste_entorno_mgmv,
									);
		}

		// rangos wc
		$datos_wc_maximos	= $this->object->archivos_model->_wc_maximos_por_tabla($id_tabla);	
		$wc_maximos 		= array();
		for ($i=0; $i < count($datos_wc_maximos); $i++) {
			$wc_maximos[] = array(
									"wc_maximo_mgm_id"	=> $datos_wc_maximos[$i]['id_manejo'],
									"wc_maximo_valor"	=> $datos_wc_maximos[$i]['valor'],							
								);
		}
		
		$datos_plantilla = array (
						"precios"				 	=> $precios,
						"costos" 					=> $costos,
						"rindes" 					=> $rindes,
						"emergias"				 	=> $emergias,
						"ajuste_ue_amb" 			=> $ajuste_ue_amb,
						"ajuste_entorno_vecino" 	=> $ajuste_entorno_vecino,
						"ajuste_entorno"		 	=> $ajuste_entorno,
						"wc_maximos" 				=> $wc_maximos,
				);
		
		return $this->_genera_archivo_tabla($id_tabla, $datos_plantilla);
	}

	function _genera_archivo_tabla($id_tabla, $datos){
		$carpeta 	= $this->_ruta_tablas;

		$archivo		= $id_tabla.".inc";
		$ruta_archivo 	= $carpeta.$archivo;

		// datos archivo
		$datos_plantilla = array (
						"contenido_precios"	 				=> $datos['precios'],
						"contenido_costos" 					=> $datos['costos'],
						"contenido_rindes" 					=> $datos['rindes'],
						"contenido_emergias" 				=> $datos['emergias'],
						"contenido_ajuste_ambiente" 		=> $datos['ajuste_ue_amb'],
						"contenido_ajuste_entorno" 			=> $datos['ajuste_entorno'],
						"contenido_ajuste_entorno_vecino"	=> $datos['ajuste_entorno_vecino'],
						"contenido_wc_maximo" 				=> $datos['wc_maximos'],
				);
		$contenido_archivo = $this->object->parser->parse($this->_ruta_fuentes_vistas.'tablas.inc', $datos_plantilla, true);
		$contenido_archivo = str_replace($this->_salto_win, $this->_salto_unix, $contenido_archivo);
		
		// genera archivo
		$fp 		= fopen($ruta_archivo, "w");
		$respuesta 	= fwrite ($fp, $contenido_archivo);
	
		fclose($fp);

		if ($respuesta === FALSE){
			return FALSE;
		}
		
		// guarda archivo
		$actualiza = $this->object->archivos_model->_actualiza_archivo($id_tabla, $archivo);
		if (!$actualiza) {
			return FALSE;
		}

		return TRUE;	
	}

	/****************************************
	* Genera archivo TABLAS.INC desde base  *
	* RETORNO: TRUE / FALSE                 *
	* Parametros                            *
	* id_tabla                              *
	****************************************/
	function borra_archivo_tabla($id_tabla){
		$borra_archivo = TRUE;
		
		$carpeta 	= $this->_ruta_tablas;
		$archivo 	= $this->object->archivos_model->_archivo_por_tabla($id_tabla);			
		if (!is_null($archivo)) {
			$borra_archivo	= @unlink($carpeta.$archivo);
		}
		
		return $borra_archivo;
	}
	
	/****************************************
	* PARAMETROS                            *
	****************************************/

	/******************************************************
	* Genera archivos AGRO.MA                             *
	* PARAMETROS.INC                                      *
	* AGRO.VAL                                            *
	* RETORNO: TRUE / FALSE                               *
	* Parametros                                          *
	* id_parametro                                        *
	* datos  => array                                     *
	*   puertos => array(fila, columna, id_puerto, valor) *
	******************************************************/
	function procesa_archivo_parametro($id_parametro, $datos){
		$genera = TRUE;
		
		// archivo modelo
		if ($genera) {
			$datos_filas	= $datos['filas'];
			$datos_columnas	= $datos['columnas'];
			
			$datos_plantilla = array (
							"filas" 	=> $datos_filas,
							"columnas" 	=> $datos_columnas,
					);
			
			$genera = $this->_genera_archivo_modelo($id_parametro, $datos_plantilla);
		}
		
		// archivo parametros
		if ($genera) {
			$datos_puertos		= $datos['puertos'];
			$total				= count($datos_puertos);
			$contenido_celdas	= array();
			$indice_celdas		= 0;
			$indice				= -1;
			for ($i=0; $i < $total; $i++) {
				$fila 		= $datos_puertos[$i][0];
				$columna 	= $datos_puertos[$i][1];

				$contenido_celdas[$indice_celdas]["indice"] = $indice;
				
				// puertos
				$puertos 	= array();
				while (
					$i < $total &&
					$fila == $datos_puertos[$i][0] &&
					$columna == $datos_puertos[$i][1]
				){
					// misma fila y columna
					$nombre_puerto 	= $this->object->archivos_model->_datos_puerto_por_id($datos_puertos[$i][2]);	
						
					$puertos[] = array (
										"puerto" 	=> $nombre_puerto,
										"valor" 	=> $datos_puertos[$i][3],
					);
						
					$i = $i + 1;
				}
				$contenido_celdas[$indice_celdas]["puertos"] = $puertos;
	
				$indice 		= $indice - 1;
				$indice_celdas	= $indice_celdas + 1;
				// para que al entrar al for no saltee uno
				$i = $i - 1;
			}

			$datos_plantilla = array (
							"contenido_celdas" 	=> $contenido_celdas,
					);

			$genera = $this->_genera_archivo_parametros($id_parametro, $datos_plantilla);
		}

		// archivo valores
		if ($genera) {
			$datos_puertos		= $datos['puertos'];
			$total				= count($datos_puertos);
			$contenido_celdas	= array();
			$indice_celdas		= 0;
			$indice				= -1;
			for ($i=0; $i < $total; $i++) {
				$fila 		= $datos_puertos[$i][0];
				$columna 	= $datos_puertos[$i][1];

				$contenido_celdas[$indice_celdas]["fila"] 		= $fila;
				$contenido_celdas[$indice_celdas]["columna"] 	= $columna;
				$contenido_celdas[$indice_celdas]["indice"] 	= $indice;
				
				// puertos
				while (
					$i < $total &&
					$fila == $datos_puertos[$i][0] &&
					$columna == $datos_puertos[$i][1]
				){
					// misma fila y columna
					$i = $i + 1;
				}
	
				$indice 		= $indice - 1;
				$indice_celdas	= $indice_celdas + 1;
				// para que al entrar al for no saltee uno
				$i = $i - 1;
			}

			$datos_plantilla = array (
							"contenido_celdas" 	=> $contenido_celdas,
					);

			$genera = $this->_genera_archivo_valores($id_parametro, $datos_plantilla);
		}
		
		return $genera;
	}

	/****************************************
	* Genera archivos AGRO.MA               *
	* PARAMETROS.INC                        *
	* AGRO.VAL                              *
	* RETORNO: TRUE / FALSE                 *
	* Parametros                            *
	* id_parametro                          *
	****************************************/
	function procesa_archivo_parametro_db($id_parametro){
		$genera = TRUE;

		$datos_parametro 	= $this->object->archivos_model->_datos_por_parametro($id_parametro);			

		if (count($datos_parametro) > 0) {
			// borra anterior
			$carpeta 		= $this->_ruta_parametros;
			$archivo_ma 	= $datos_parametro[0]['archivo_ma'];
			$archivo_inc 	= $datos_parametro[0]['archivo_inc'];
			$archivo_val 	= $datos_parametro[0]['archivo_val'];
			
			if (!is_null($archivo_ma)) {
				$borra_archivo	= @unlink($carpeta.$archivo_ma);
			}
			if (!is_null($archivo_inc)) {
				$borra_archivo	= @unlink($carpeta.$archivo_inc);
			}
			if (!is_null($archivo_val)) {
				$borra_archivo	= @unlink($carpeta.$archivo_val);
			}

			// archivo modelo
			if ($genera) {
				// prepara datos archivo
				$datos_filas 		= $datos_parametro[0]['filas'];
				$datos_columnas 	= $datos_parametro[0]['columnas'];
	
				$datos_plantilla = array (
								"filas" 	=> $datos_filas,
								"columnas" 	=> $datos_columnas,
						);
						
				$genera = $this->_genera_archivo_modelo($id_parametro, $datos_plantilla);
			}

			// archivo parametros
			if ($genera) {
				$datos_puertos		= $this->object->archivos_model->_puertos_por_parametro($id_parametro);	
				$total				= count($datos_puertos);
				$contenido_celdas	= array();
				$indice_celdas		= 0;
				$indice				= -1;
				for ($i=0; $i < $total; $i++) {
					$fila 		= $datos_puertos[$i]['fila'];
					$columna 	= $datos_puertos[$i]['columna'];
	
					$contenido_celdas[$indice_celdas]["indice"] = $indice;
					
					// puertos
					$puertos 	= array();
					while (
						$i < $total &&
						$fila == $datos_puertos[$i]['fila'] &&
						$columna == $datos_puertos[$i]['columna']
					){
						// misma fila y columna
						$puertos[] = array (
											"puerto" 	=> $datos_puertos[$i]['puerto'],
											"valor" 	=> $datos_puertos[$i]['valor'],
						);
							
						$i = $i + 1;
					}
					$contenido_celdas[$indice_celdas]["puertos"] = $puertos;
		
					$indice 		= $indice - 1;
					$indice_celdas	= $indice_celdas + 1;
					// para que al entrar al for no saltee uno
					$i = $i - 1;
				}
	
				$datos_plantilla = array (
								"contenido_celdas" 	=> $contenido_celdas,
						);
	
				$genera = $this->_genera_archivo_parametros($id_parametro, $datos_plantilla);
			}

			// archivo valores
			if ($genera) {
				$datos_puertos		= $this->object->archivos_model->_puertos_por_parametro($id_parametro);	
				$total				= count($datos_puertos);
				$contenido_celdas	= array();
				$indice_celdas		= 0;
				$indice				= -1;
				for ($i=0; $i < $total; $i++) {
					$fila 		= $datos_puertos[$i]['fila'];
					$columna 	= $datos_puertos[$i]['columna'];
	
					$contenido_celdas[$indice_celdas]["fila"] 		= $fila;
					$contenido_celdas[$indice_celdas]["columna"] 	= $columna;
					$contenido_celdas[$indice_celdas]["indice"] 	= $indice;
					
					// puertos
					while (
						$i < $total &&
						$fila == $datos_puertos[$i]['fila'] &&
						$columna == $datos_puertos[$i]['columna']
					){
						// misma fila y columna
						$i = $i + 1;
					}
		
					$indice 		= $indice - 1;
					$indice_celdas	= $indice_celdas + 1;
					// para que al entrar al for no saltee uno
					$i = $i - 1;
				}
	
				$datos_plantilla = array (
								"contenido_celdas" 	=> $contenido_celdas,
						);
	
				$genera = $this->_genera_archivo_valores($id_parametro, $datos_plantilla);
			}
		}

		return $genera;
	}

	function _genera_archivo_modelo($id_parametro, $datos){
		$carpeta 	= $this->_ruta_parametros;

		$archivo		= $id_parametro.".ma";
		$ruta_archivo 	= $carpeta.$archivo;

		// datos archivo
		$contenido_archivo = $this->object->parser->parse($this->_ruta_fuentes_vistas.'agro.ma', $datos, true);
		$contenido_archivo = str_replace($this->_salto_win, $this->_salto_unix, $contenido_archivo);
		
		// genera archivo
		$fp 		= fopen($ruta_archivo, "w");
		$respuesta 	= fwrite ($fp, $contenido_archivo);
	
		fclose($fp);

		if ($respuesta === FALSE){
			log_message('error', "libreria Archivos - _genera_archivo_modelo id_parametro".$id_parametro);
			return FALSE;
		}
		
		// guarda archivo
		$actualiza = $this->object->archivos_model->_actualiza_archivo_modelo($id_parametro, $archivo);
		if (!$actualiza) {
			log_message('error', "libreria Archivos - _genera_archivo_modelo => no actualiza archivo en BD, id_parametro".$id_parametro);
			return FALSE;
		}

		return TRUE;	
	}

	function _genera_archivo_parametros($id_parametro, $datos){
		$carpeta 	= $this->_ruta_parametros;

		$archivo		= $id_parametro.".inc";
		$ruta_archivo 	= $carpeta.$archivo;

		// datos archivo
		$contenido_archivo = $this->object->parser->parse($this->_ruta_fuentes_vistas.'inicializacion.inc', $datos, true);
		$contenido_archivo = str_replace($this->_salto_win, $this->_salto_unix, $contenido_archivo);
	
		// genera archivo
		$fp 		= fopen($ruta_archivo, "w");
		$respuesta 	= fwrite ($fp, $contenido_archivo);
	
		fclose($fp);

		if ($respuesta === FALSE){
			log_message('error', "libreria Archivos - _genera_archivo_parametros id_parametro".$id_parametro);
			return FALSE;
		}
		
		// guarda archivo
		$actualiza = $this->object->archivos_model->_actualiza_archivo_prametros($id_parametro, $archivo);
		if (!$actualiza) {
			log_message('error', "libreria Archivos - _genera_archivo_parametros => no actualiza archivo en BD, id_parametro".$id_parametro);
			return FALSE;
		}

		return TRUE;	
	}

	function _genera_archivo_valores($id_parametro, $datos){
		$carpeta 	= $this->_ruta_parametros;

		$archivo		= $id_parametro.".val";
		$ruta_archivo 	= $carpeta.$archivo;

		// datos archivo
		$contenido_archivo = $this->object->parser->parse($this->_ruta_fuentes_vistas.'agro.val', $datos, true);
		$contenido_archivo = str_replace($this->_salto_win, $this->_salto_unix, $contenido_archivo);
		
		// genera archivo
		$fp 		= fopen($ruta_archivo, "w");
		$respuesta 	= fwrite ($fp, $contenido_archivo);
	
		fclose($fp);

		if ($respuesta === FALSE){
			log_message('error', "libreria Archivos - _genera_archivo_valores id_parametro".$id_parametro);
			return FALSE;
		}
		
		// guarda archivo
		$actualiza = $this->object->archivos_model->_actualiza_archivo_valores($id_parametro, $archivo);
		if (!$actualiza) {
			log_message('error', "libreria Archivos - _genera_archivo_valores => no actualiza archivo en BD, id_parametro".$id_parametro);
			return FALSE;
		}

		return TRUE;	
	}

	/****************************************
	* Genera archivo TABLAS.INC desde base  *
	* RETORNO: TRUE / FALSE                 *
	* Parametros                            *
	* id_tabla                              *
	****************************************/
	function borra_archivo_parametro($id_parametro){
		$borra_archivo = TRUE;
		
		$carpeta 	= $this->_ruta_parametros;
		$datos_parametro 	= $this->object->archivos_model->_datos_por_parametro($id_parametro);			
		if (count($datos_parametro) > 0) {
			$archivo_ma 	= $datos_parametro[0]['archivo_ma'];
			$archivo_inc 	= $datos_parametro[0]['archivo_inc'];
			$archivo_val 	= $datos_parametro[0]['archivo_val'];

			if (!is_null($archivo_ma)) {
				$borra_archivo	= $borra_archivo && @unlink($carpeta.$archivo_ma);
			}
			if (!is_null($archivo_inc)) {
				$borra_archivo	= $borra_archivo && @unlink($carpeta.$archivo_inc);
			}
			if (!is_null($archivo_val)) {
				$borra_archivo	= $borra_archivo && @unlink($carpeta.$archivo_val);
			}
		}
		
		return $borra_archivo;
	}

	/****************************************
	* EVENTOS                               *
	****************************************/

	/******************************************************
	* Genera archivo agro.EV                              *
	* RETORNO: TRUE / FALSE                               *
	* Parametros                                          *
	* id_evento	                                          *
	* datos  => array                                     *
	*   tiempos 	=> array(tiempo)                      *
	*   tiempos_rta => array(tiempo)                      *
	*   valores 	=> array(valor)                       *
	******************************************************/
	function procesa_archivo_evento($id_evento, $datos){
		$genera = TRUE;
		
		$datos_tiempos		= $datos['tiempos'];
		$datos_tiempos_rta	= $datos['tiempos_rta'];
		$datos_valores		= $datos['valores'];
		$contenido_eventos	= array();
		foreach($datos_tiempos as $clave => $tiempo) {
			$valor 		= $datos_valores[$clave];
			$tiempo_rta = $datos_tiempos_rta[$clave];

			$contenido_eventos[] = array(
										'tiempo' 		=> $tiempo,
										'tiempo_rta' 	=> $tiempo_rta,
										'valor' 		=> $valor,
								);
		}
			
		$datos_plantilla = array (
						"contenido_eventos" 	=> $contenido_eventos,
				);
		
		$genera = $this->_genera_archivo_eventos($id_evento, $datos_plantilla);
		
		return $genera;
	}

	/****************************************
	* Genera archivos AGRO.EV               *
	* RETORNO: TRUE / FALSE                 *
	* Parametros                            *
	* id_evento                          *
	****************************************/
	function procesa_archivo_evento_db($id_evento){
		$genera = TRUE;

		// borra anterior
		$carpeta 	= $this->_ruta_eventos;
		$archivo 	= $this->object->archivos_model->_archivo_por_evento($id_evento);			
		if (!is_null($archivo)) {
			$borra_archivo	= @unlink($carpeta.$archivo);
		}

		$datos_evento = $this->object->archivos_model->_valores_por_evento($id_evento);			
/*		
		$contenido_eventos	= array();
		for ($i=0; $i<count($datos_evento); $i++) {
			$valor 		= $datos_valores[$clave];
			$tiempo_rta = $datos_tiempos_rta[$clave];

			$contenido_eventos[] = array(
										'tiempo' 		=> $datos_evento[$i]['tiempo'],
										'tiempo_rta' 	=> $datos_evento[$i]['tiempo_rta'],
										'valor' 		=> $datos_evento[$i]['valor'],
								);
		}
*/			
		$datos_plantilla = array (
						"contenido_eventos" 	=> $datos_evento,
				);
		
		$genera = $this->_genera_archivo_eventos($id_evento, $datos_plantilla);
		
		return $genera;

	}

	function _genera_archivo_eventos($id_evento, $datos){
		$carpeta 	= $this->_ruta_eventos;

		$archivo		= $id_evento.".ev";
		$ruta_archivo 	= $carpeta.$archivo;

		// datos archivo
		$contenido_archivo = $this->object->parser->parse($this->_ruta_fuentes_vistas.'agro.ev', $datos, true);
		$contenido_archivo = str_replace($this->_salto_win, $this->_salto_unix, $contenido_archivo);
		
		// genera archivo
		$fp 		= fopen($ruta_archivo, "w");
		$respuesta 	= fwrite ($fp, $contenido_archivo);
	
		fclose($fp);

		if ($respuesta === FALSE){
			return FALSE;
		}
		
		// guarda archivo
		$actualiza = $this->object->archivos_model->_actualiza_archivo_eventos($id_evento);
		if (!$actualiza) {
			return FALSE;
		}

		return TRUE;	
	}

	/****************************************
	* Genera archivo TABLAS.INC desde base  *
	* RETORNO: TRUE / FALSE                 *
	* Parametros                            *
	* id_tabla                              *
	****************************************/
	function borra_archivo_eventos($id_evento){
		$borra_archivo = TRUE;
		
		$carpeta 	= $this->_ruta_eventos;
		$archivo 	= $this->object->archivos_model->_archivo_por_evento($id_evento);			
		if (!is_null($archivo)) {
			$borra_archivo	= @unlink($carpeta.$archivo);
		}
		
		return $borra_archivo;
	}

	/****************************************
	* PROCESAR                              *
	****************************************/

	/******************************************************
	* Prepara carpeta para ejecucion y ejecutable RUN     *
	* Parametros                                          *
	* id_test                                             *
	* datos  => array                                     *
	*   id_tabla                                          *
	*   id_parametro                                      *
	*   id_evento                                         *
	******************************************************/
	function preparar_test($id_test, $datos){
		$procesar = TRUE;

		// prepara carpeta
		$carpeta_test 	= $this->_ruta_ejecuciones.$id_test;
		if (!is_dir($carpeta_test)) {
			// se crea
		   mkdir($carpeta_test, 0777, true);
		} else {
			// borra contenido anterior
			$handle = opendir($carpeta_test);
			while ($file = readdir($handle)) {
 				if (is_file($carpeta_test."/".$file)) {
  					@unlink($carpeta_test."/".$file);
				}
 			}
		}				
		
		// busca archivos
		// tabla
		$carpeta 	= $this->_ruta_tablas;
		$archivo 	= $this->object->archivos_model->_archivo_por_tabla($datos['id_tabla']);			
		if (!is_null($archivo)){
			$ruta_original 	= $carpeta.$archivo;
			$ruta_destino 	= $carpeta_test.'/tablas.inc';
			$procesar = $procesar && copy($ruta_original, $ruta_destino);
		}
		// parametros
		$carpeta 			= $this->_ruta_parametros;
		$datos_parametro 	= $this->object->archivos_model->_datos_por_parametro($datos['id_parametro']);			
		if (count($datos_parametro) > 0) {
			// borra anterior
			$archivo_ma 	= $datos_parametro[0]['archivo_ma'];
			$archivo_inc 	= $datos_parametro[0]['archivo_inc'];
			$archivo_val 	= $datos_parametro[0]['archivo_val'];

			if (!is_null($archivo_ma)){
				$ruta_original 	= $carpeta.$archivo_ma;
				$ruta_destino 	= $carpeta_test.'/agro.ma';
				$procesar = $procesar && copy($ruta_original, $ruta_destino);
			}
			if (!is_null($archivo_inc)){
				$ruta_original 	= $carpeta.$archivo_inc;
				$ruta_destino 	= $carpeta_test.'/inicializacion.inc';
				$procesar = $procesar && copy($ruta_original, $ruta_destino);
			}
			if (!is_null($archivo_val)){
				$ruta_original 	= $carpeta.$archivo_val;
				$ruta_destino 	= $carpeta_test.'/agro.val';
				$procesar = $procesar && copy($ruta_original, $ruta_destino);
			}
		}
		
		// eventos
		$carpeta 	= $this->_ruta_eventos;
		$archivo 	= $this->object->archivos_model->_archivo_por_evento($datos['id_evento']);			
		if (!is_null($archivo)){
			$ruta_original 	= $carpeta.$archivo;
			$ruta_destino 	= $carpeta_test.'/agro.ev';
			$procesar = $procesar && copy($ruta_original, $ruta_destino);
		}
		
		// prepara archivos restantes
		$datos_plantilla = array (
									"hay_manejo_adaptativo" 	=> $datos['mgm_adaptativo'],
		);
		$procesar = $procesar && $this->_genera_archivo_extra($id_test, $datos_plantilla);
		// prepara archivos restantes fin
		
		// prepara y copia ejecutable
		$cantidad_eventos 	= $this->object->archivos_model->_cantidad_por_evento($datos['id_evento']);			
		if (strlen($cantidad_eventos) <2) {
			$cantidad_eventos = '0'.$cantidad_eventos;
		}

		$simulador_ruta = $this->object->config->item('simulador_ruta');
		
		$datos_plantilla = array (
						"cantidad_eventos" 	=> $cantidad_eventos,
						"id_test"		 	=> $id_test,
						"simulador_ruta"	=> $simulador_ruta,
				);

		$genera = $this->_genera_archivo_ejecutable($datos_plantilla, $carpeta_test);
		$procesar = $procesar && $genera;
		
		return $procesar;
	}

	function _genera_archivo_extra($id_test, $datos){
		$carpeta 		= $this->_ruta_ejecuciones.$id_test;
		$archivo		= 'parametros.inc';
		$ruta_archivo 	= $carpeta.'/'.$archivo;

		// datos archivo
		$contenido_archivo = $this->object->parser->parse($this->_ruta_fuentes_vistas.$archivo, $datos, true);
		$contenido_archivo = str_replace($this->_salto_win, $this->_salto_unix, $contenido_archivo);
		
		// genera archivo
		$fp 		= fopen($ruta_archivo, "w");
		$respuesta 	= fwrite ($fp, $contenido_archivo);
	
		fclose($fp);

		if ($respuesta === FALSE){
			return FALSE;
		}
		
		return TRUE;	
	}

	function _genera_archivo_ejecutable($datos, $carpeta){
		$archivo		= "run";
		$ruta_archivo 	= $carpeta.'/'.$archivo;

		// datos archivo
		$datos_plantilla = array (
						"cantidad_eventos"	 	=> $datos['cantidad_eventos'],
						"id_test"	 			=> $datos['id_test'],
						"simulador_ruta"		=> $datos['simulador_ruta'],
				);
		$contenido_archivo = $this->object->parser->parse($this->_ruta_fuentes_vistas.'run.tpl', $datos_plantilla, true);
		$contenido_archivo = str_replace($this->_salto_win, $this->_salto_unix, $contenido_archivo);
		
		// genera archivo
		$fp 		= fopen($ruta_archivo, "w");
		$respuesta 	= fwrite ($fp, $contenido_archivo);
	
		fclose($fp);
		
		// ejecutable
		$permisos_ejecutable = @chmod($ruta_archivo, 0755);
		$respuesta = $respuesta && $permisos_ejecutable;

		if ($respuesta == FALSE){
			return FALSE;
		}

		return TRUE;	
	}

	/******************************************************
	* Ejecuta RUN                                         *
	* Parametros                                          *
	* id_test                                             *
	******************************************************/
	function ejecuta_test($id_test){
//log_message('debug', "ejecuta_test=".$id_test."=");
		$carpeta_test 	= $this->_ruta_ejecuciones.$id_test;
//log_message('debug', "carpeta_test=".$carpeta_test."=");
		$carpeta_actual	= getcwd();

//		$comando		= $carpeta_test."/run 2>&1";
//		$comando		= "/home/daniela/sed/tesis/web/archivos/ejecuciones/".$id_test."/run 2>&1";
//		$comando		= "./run > /dev/null 2>&1 & echo $!";
		$comando		= "cd ".$carpeta_test." && ./run && cd ".$carpeta_actual." > /dev/null 2>&1 & echo $!";

		@exec($comando, $op);
        $pid = (int)$op[0];

       	if ($pid != "") {
			return TRUE;
		}

		return FALSE;
	}
		
	/******************************************************
	* Prepara carpeta para ejecucion y ejecutable RUN     *
	* Parametros                                          *
	* id_test                                             *
	* datos  => array                                     *
	*   id_tabla                                          *
	*   id_parametro                                      *
	*   id_test                                           *
	******************************************************/
	function procesa_drw($id_test, $datos){
//log_message('error', "procesa_drw id_test=".$id_test."=");
		$procesar = TRUE;

		$datos_parametro = $this->object->archivos_model->_datos_por_parametro($datos['id_parametro']);
		if (count($datos_parametro) > 0) {
			$filas 		= $datos_parametro[0]['filas'];
			$columnas 	= $datos_parametro[0]['columnas'];
		}

		// borra contenido
		$borra_test_contenido = $this->object->archivos_model->_borra_test_contenido($id_test);
		if (!$borra_test_contenido) {
			$procesar = FALSE;
		} else {
			$carpeta_test 	= $this->_ruta_ejecuciones.$id_test;
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

		// remanente final
		if ($procesar) {
			if (count($test_contenido) > 0) {
				$procesar = $this->object->archivos_model->_guardar_contenido($test_contenido, $id_test);
			}
		}
		
		return $procesar;
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

	/****************************************
	* Genera archivo TABLAS.INC desde base  *
	* RETORNO: TRUE / FALSE                 *
	* Parametros                            *
	* id_tabla                              *
	****************************************/
	function borra_archivo_test($id_test){
		$borra			 	= FALSE;
		$borra_archivo 		= TRUE;
		$entro				= FALSE;
		
		$carpeta_test 	= $this->_ruta_ejecuciones.$id_test;
		if (is_dir($carpeta_test)) {
			$handle = opendir($carpeta_test);
			while ($file = readdir($handle)) {
 				if (is_file($carpeta_test."/".$file)) {
  					$borra_archivo	= $borra_archivo && @unlink($carpeta_test."/".$file);
				}
				$entro = TRUE;
 			}
		}
		if ($borra_archivo && $entro) {				
			$borra	= @rmdir($carpeta_test);
		}
		
		return $borra;
	}
	
}

// END funciones class

/* End of file archivos.php */