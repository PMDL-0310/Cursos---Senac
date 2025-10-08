package atividade6;

import java.util.ArrayList;
import java.util.List;

public class ServicoDeUsuario {
	private List<String> usuarios;
	
	public ServicoDeUsuario() {
		usuarios = new ArrayList<>();
	}
		
	public void cadastrarUsuario(String nome) {
		if (nome == null || nome.trim().isEmpty()) {
			System.out.println("Nome invalido! Não foi possivel cadastrar.");
			return;
		}
		usuarios.add(nome);
		System.out.println("Usuário '" + nome + "' cadastrado com sucesso!");
	}
	
	public void listarUsuarios() {
		if (usuarios.isEmpty()) {
			System.out.println("Nenhum usuário cadastrado.");
		} else {
			System.out.println("Lista de usuários:");
			for (int i = 0; i < usuarios.size(); i++) {
				System.out.println((i + 1) + ". " + usuarios.get(i));
			}
		}
	}
}
