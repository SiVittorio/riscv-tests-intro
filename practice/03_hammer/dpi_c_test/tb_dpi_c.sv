module tb_dpi_c;

    import "DPI-C" function void print(string msg);

    initial begin
        print("Hello world!");
        $finish();
    end

endmodule
