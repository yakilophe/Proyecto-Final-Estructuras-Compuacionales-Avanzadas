Para que tu página web se lance desde GitHub, necesitas crear un repositorio y configurarlo como **GitHub Pages**. Aquí te explico paso a paso cómo hacerlo:

## 🚀 Guía para Publicar tu Página en GitHub Pages

### **Paso 1: Crear un Repositorio en GitHub**
1. Ve a [github.com](https://github.com) y haz clic en **"New"**
2. Nombra tu repositorio (ej: `grafos-lab` o `algoritmos-grafos`)
3. Selecciona **"Public"** (público)
4. **NO** inicialices con README, .gitignore o licencia
5. Haz clic en **"Create repository"**

### **Paso 2: Configurar Git en tu Computadora**
```bash
# Si no tienes Git instalado, descárgalo de: https://git-scm.com/

# Configurar tu usuario (solo primera vez)
git config --global user.name "Tu Nombre"
git config --global user.email "tu-email@ejemplo.com"
```

### **Paso 3: Subir tu Código a GitHub**

Desde la carpeta donde tienes tu archivo HTML:

```bash
# Inicializar repositorio local
git init

# Agregar todos los archivos
git add .

# Hacer commit inicial
git commit -m "Primer commit: Página web de algoritmos de grafos"

# Conectar con el repositorio remoto (cambia la URL)
git remote add origin https://github.com/TU-USUARIO/NOMBRE-REPOSITORIO.git

# Subir al repositorio
git branch -M main
git push -u origin main
```

### **Paso 4: Activar GitHub Pages**

1. Ve a tu repositorio en GitHub
2. Haz clic en **"Settings"** (Configuraciones)
3. En el menú izquierdo, busca **"Pages"**
4. En **"Source"**, selecciona:
   - Branch: **`main`**
   - Folder: **`/ (root)`**
5. Haz clic en **"Save"**
6. Espera unos minutos (máximo 5-10 minutos)

### **Paso 5: Obtener tu Enlace**

Una vez configurado, tu página estará disponible en:
```
https://TU-USUARIO.github.io/NOMBRE-REPOSITORIO/
```

## 📁 Estructura Recomendada para tu Proyecto

Crea esta estructura de archivos en tu computadora:

```
algoritmos-grafos/
├── index.html          # Tu página web principal (el código que te di)
├── style.css          # Archivo CSS separado (opcional)
├── script.js          # Archivo JavaScript separado (opcional)
├── README.md          # Documentación del proyecto
├── assets/            # Carpeta para imágenes, iconos, etc.
│   ├── screenshot.png
│   └── logo.png
└── .gitignore         # Archivo para ignorar archivos innecesarios
```

## ✨ Código Mejorado para GitHub Pages

Te recomiendo separar el código en archivos para mejor organización. Aquí está tu HTML modificado:

### **index.html**
```html
<!DOCTYPE html>
<html lang="es">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Explorador de Algoritmos de Grafos</title>
    <link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/6.4.0/css/all.min.css">
    <link rel="stylesheet" href="style.css">
    <link rel="icon" href="assets/favicon.ico" type="image/x-icon">
</head>
<body>
    <!-- El contenido de tu página web aquí -->
    <script src="script.js"></script>
</body>
</html>
```

### **style.css** (crea este archivo)
```css
:root {
    --tech-blue: #0a0e29;
    --tech-purple: #6a11cb;
    --tech-pink: #ff2a6d;
    --tech-cyan: #00d4ff;
    --light-bg: #f8f9ff;
    --card-bg: #121633;
    --text-light: #e0e0ff;
    --text-dark: #0a0e29;
}

* {
    margin: 0;
    padding: 0;
    box-sizing: border-box;
    font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
}

body {
    background-color: var(--tech-blue);
    color: var(--text-light);
    line-height: 1.6;
    overflow-x: hidden;
    background-image: 
        radial-gradient(circle at 10% 20%, rgba(106, 17, 203, 0.15) 0%, transparent 20%),
        radial-gradient(circle at 90% 80%, rgba(255, 42, 109, 0.15) 0%, transparent 20%);
}

/* ... (todo el resto del CSS que te proporcioné) ... */
```

### **script.js** (crea este archivo)
```javascript
// Definición de los grafos
const graphs = {
    1: {
        name: "No Dirigido - No Ponderado",
        directed: false,
        weighted: false,
        nodes: 5,
        edges: 12,
        connections: [
            [0, 1], [0, 4], [0, 3],
            [1, 0], [1, 3], [1, 2],
            [2, 1], [2, 3],
            [3, 2], [3, 1], [3, 0],
            [4, 0]
        ]
    },
    // ... (todo el resto del JavaScript que te proporcioné)
};

// ... (todo el resto del código JavaScript)
```

## 🎯 Pasos Finales para la Entrega

### **1. Crea un README.md atractivo**
En el mismo directorio, crea un archivo `README.md` con:

```markdown
# 🚀 Explorador de Algoritmos de Grafos

[![GitHub Pages](https://img.shields.io/badge/GitHub%20Pages-Live-brightgreen)](https://TU-USUARIO.github.io/NOMBRE-REPOSITORIO/)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](LICENSE)

## 🌐 Demo en Vivo
**¡Prueba la aplicación aquí!** 👉 [https://TU-USUARIO.github.io/NOMBRE-REPOSITORIO/](https://TU-USUARIO.github.io/NOMBRE-REPOSITORIO/)

## 📖 Descripción
Interfaz web interactiva para visualizar algoritmos de grafos en tiempo real.

## 🛠️ Tecnologías Utilizadas
- HTML5, CSS3, JavaScript (ES6+)
- Font Awesome para iconos
- GitHub Pages para hosting

## 🚀 Cómo Ejecutar Localmente
```bash
# Clonar el repositorio
git clone https://github.com/TU-USUARIO/NOMBRE-REPOSITORIO.git

# Abrir el archivo
cd NOMBRE-REPOSITORIO
open index.html
```

## 📞 Contacto
Para cualquier pregunta o sugerencia, abre un issue en GitHub.
```

### **2. Añade un archivo .gitignore**
Crea un archivo llamado `.gitignore` con:
```
# Sistema
.DS_Store
Thumbs.db

# Editor
.vscode/
.idea/
*.swp
*.swo

# Node.js
node_modules/
npm-debug.log*
```

### **3. Sube todo a GitHub**
```bash
# Añadir todos los archivos
git add .

# Hacer commit
git commit -m "Agregar página web completa con CSS y JS separados"

# Subir cambios
git push origin main
```

### **4. Verifica que funcione**
1. Ve a: `https://TU-USUARIO.github.io/NOMBRE-REPOSITORIO/`
2. Si ves tu página, ¡funciona!
3. Si no carga, espera unos minutos y recarga

## 🔧 Solución de Problemas Comunes

### **Problema: La página no se actualiza**
```bash
# Forzar actualización en GitHub Pages
git commit --allow-empty -m "Trigger GitHub Pages rebuild"
git push
```

### **Problema: CSS/JS no carga**
- Verifica que las rutas en `index.html` sean correctas
- Asegúrate de que los archivos estén en el repositorio

### **Problema: Error 404**
- Espera 10-15 minutos después del primer push
- Verifica que GitHub Pages esté activado en Settings → Pages

## 📱 Bonus: Agregar un Favicon

Crea un icono rápido con [Favicon.io](https://favicon.io/) y añádelo:

1. Descarga un favicon.ico
2. Ponlo en la carpeta `assets/`
3. Añade en tu HTML:
```html
<link rel="icon" href="assets/favicon.ico" type="image/x-icon">
```

## 🎉 ¡Listo para Entregar!

**Para tu entrega del proyecto, incluye:**

1. ✅ **Link de GitHub Pages** en el README
2. ✅ **Link del repositorio** completo
3. ✅ **Capturas de pantalla** de la página funcionando
4. ✅ **Evidencia** de que todos los integrantes hicieron commits

**En el PDF del proyecto incluye:**
- El link a la página web funcionando
- Capturas del código funcionando en GitHub Pages
- Explicación de cómo se configuró GitHub Pages

¡Tu página web estará disponible para cualquiera con el link y podrás mostrarla en tu defensa del proyecto! 🚀
