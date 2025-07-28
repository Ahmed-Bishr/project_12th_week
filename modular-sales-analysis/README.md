# Modular Sales Analysis

This project is a modular C application designed for retail sales analysis. It allows users to enter sales data, calculate total sales, and perform various analyses on the sales data.

## Project Structure

The project is organized into the following directories and files:

```
modular-sales-analysis
├── src
│   ├── main.c          # Entry point of the application
│   ├── ui.c            # User interface functions implementation
│   ├── ui.h            # User interface functions declarations
│   ├── sales.c         # Sales data handling functions implementation
│   ├── sales.h         # Sales data handling functions declarations
│   ├── utils.c         # Utility functions implementation
│   └── utils.h         # Utility functions declarations
├── Makefile             # Build instructions
└── README.md            # Project documentation
```

## Features

- Enter sales data for multiple branches and months.
- Calculate total sales.
- Analyze branch percentage share.
- Identify the peak sales month.
- Sort branches by sales in a specific month.
- Sort months by sales in a specific branch.

## Building the Project

To build the project, navigate to the project directory and run the following command:

```
make
```

This will compile the source files and create an executable named `sales_analysis`.

## Running the Application

After building the project, you can run the application using the following command:

```
./sales_analysis
```

Follow the on-screen instructions to interact with the application.

## Contributing

Contributions to the project are welcome. Please feel free to submit a pull request or open an issue for any suggestions or improvements.

## License

This project is open-source and available under the MIT License.