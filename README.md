# Proyecto-Final-Estructuras-Compuacionales-Avanzadas
Implementación de algoritmos fundamentales para el procesamiento y análisis de grafos. Este proyecto incluye una variedad de algoritmos clásicos con análisis de complejidad computacional y ejemplos prácticos de aplicación.
import matplotlib.pyplot as plt
import matplotlib.animation as animation
from matplotlib.animation import PillowWriter

# Al final de tu clase KruskalAnimation, añade este método:
def save_as_gif(self, filename="kruskal_animation.gif", fps=2):
    """
    Guarda la animación como archivo GIF.
    
    Parámetros:
    filename: Nombre del archivo GIF
    fps: Cuadros por segundo
    """
    # Número total de frames
    total_frames = len(self.sorted_edges) + 2
    
    # Crear la animación
    ani = animation.FuncAnimation(self.fig, self.animate_step, 
                                 frames=total_frames, 
                                 interval=1000//fps, blit=False, repeat=False)
    
    # Guardar como GIF
    writer = PillowWriter(fps=fps)
    ani.save(filename, writer=writer)
    print(f"Animación guardada como {filename}")

# Uso:
kruskal_anim = KruskalAnimation(example_edges)
kruskal_anim.save_as_gif("demo.gif", fps=1)  # 1 frame por segundo para ver mejor
