# Wind Turbine Simulation

This program simulates a wind turbine with a graphical representation using C++ and the Qt framework.

## Building and Running

1. Firstly user should have Qt installed on the system.
2. Open the project in Visual Studio Code.
3. Build the project.
4. Run the executable.

## Pseudocode :

 # class WindTurbine:
    method __init__():
        # Design the Graphical Interface
        self.create_layout()
        self.initialize_components()

        # Read Speed Setting from .txt File
        self.start_timer_for_speed_update()

        # Initialize speed
        self.update_speed()

    private method create_layout():
        self.layout = VerticalLayout()
        self.turbine_image = Label()
        self.turbine_image.set_pixmap(Image(":/images/windturbine.png"))
        self.layout.add_widget(self.turbine_image)
        self.speed_slider = Slider(Qt.Horizontal)
        self.speed_slider.set_minimum(1)
        self.speed_slider.set_maximum(10)
        self.layout.add_widget(self.speed_slider)
        set_layout(self.layout)

    private method initialize_components():
        # Nothing specific to initialize in this case

    private method start_timer_for_speed_update():
        self.timer = Timer()
        self.timer.connect(timeout, self.update_speed)
        self.timer.start(5000)  # Every 5 seconds

    private method update_speed():
        file = File("speed.txt")
        if not file.open(ReadOnly | Text):
            return

        stream = TextStream(file)
        speed = stream.read_line().to_int()
        file.close()

        # Update speed slider
        self.speed_slider.set_value(speed)

function main():
    app = QApplication()

    # Design the Graphical Interface
    wind_turbine = WindTurbine()
    wind_turbine.show()

    return app.exec()

## ---------------------------------------------------##

## Usage

- Adjust the speed setting by editing the `.txt` file.
- The wind turbine's rotation speed will be updated accordingly.

## Dependencies

- Qt framework

