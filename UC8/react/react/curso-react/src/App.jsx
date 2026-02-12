import { useState, useEffect } from 'react'
import './App.css'

function App() {
  const [tarefas, setTarefas] = useState(() => {
    const tarefasSalvas = localStorage.getItem('lista_tarefas')
    return tarefasSalvas ? JSON.parse(tarefasSalvas) : []
  })
  
  const [inputTarefa, setInputTarefa] = useState("")

  useEffect(() => {
    localStorage.setItem('lista_tarefas', JSON.stringify(tarefas))
  }, [tarefas])

  const adicionarTarefa = (e) => {
    e.preventDefault()
    if (inputTarefa.trim() === "") return
    setTarefas([...tarefas, inputTarefa])
    setInputTarefa("")
  }

  const removerTarefa = (indexParaRemover) => {
    const novasTarefas = tarefas.filter((_, index) => index !== indexParaRemover)
    setTarefas(novasTarefas)
  }
  return (
    <div className="App">
      <h1>Gerenciador de Tarefas v2.0</h1>
      <form onSubmit={adicionarTarefa}>
        <input 
          type="text"
          placeholder="Digite uma nova tarefa"
          value={inputTarefa}
          onChange={(e) => setInputTarefa(e.target.value)}/>
          <button type="submit">Adicionar Tarefa</button>
      </form>
      <ul>
        {tarefas.map((tarefa, index) => (
          <li key={index}>
            {tarefa} 
            <button onClick={() => removerTarefa(index)}>Remover</button>
          </li>
        ))}
      </ul>
      {tarefas.length === 0 &&(
        <button className="btn-limpar" onClick={() => setTarefas([])}>Limpar Lista</button>
      )}
    </div>
  )
  
}

export default App