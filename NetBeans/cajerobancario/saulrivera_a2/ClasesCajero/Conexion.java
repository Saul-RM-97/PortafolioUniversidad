/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.cajerobancario.saulrivera_a2.ClasesCajero;
import java.sql.Connection;
import java.sql.DriverManager;

/**
 *
 * @author sam_c
 */
public class Conexion { //Conexion para la base de datos
    
    public Connection getConnection () { //Metodo para la conexion
    
            Connection con = null;
            String base = "Bancobd";
            String url = "jdbc:mysql://localhost:3306/" + base;
            String user = "root";
            String password = "";
            
            try {
                con = (Connection) DriverManager.getConnection(url,user, password);
            } catch(Exception e) {
                System.err.println("error: " + e);
            }
            
            return con;
    }
}
