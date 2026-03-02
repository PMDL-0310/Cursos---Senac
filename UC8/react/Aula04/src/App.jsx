import { useEffect, useState } from "react";
import "./App.css";

function App() {
  const [formData, setFormData] = useState(() => {
    const savedData = localStorage.getItem("formData");
    return savedData ? JSON.parse(savedData) : { nome: "", email: "", telefone: "" };
  });

  useEffect(() => {
    localStorage.setItem("formData", JSON.stringify(formData));
  }, [formData]);

  const handleChange = (e) => {
    const { name, value } = e.target;
    setFormData({ ...formData, [name]: value });
  };
  
  const handleSubmit = (e) => {
    e.preventDefault();
    console.log("Check-in realizado com sucesso!");
    console.log(formData);
  };

  return (
    <div className="container">
      <form className="form" onSubmit={handleSubmit}>
        <h2>Check-in Mobile</h2>
        <input type="text" name="nome" placeholder="Nome Completo" value={formData.nome} onChange={handleChange} required/>
        <input type="email" name="email" placeholder="Email" value={formData.email} onChange={handleChange} required/>
        <input type="tel" name="telefone" placeholder="Telefone" value={formData.telefone} onChange={handleChange} required/>
        <button type="submit">Realizar Check-in</button>
      </form>
    </div>
  );
}

export default App;