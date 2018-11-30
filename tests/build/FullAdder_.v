module corebit_and (
  input in0,
  input in1,
  output out
);
  assign out = in0 & in1;

endmodule  // corebit_and

module corebit_or (
  input in0,
  input in1,
  output out
);
  assign out = in0 | in1;

endmodule  // corebit_or

module corebit_xor (
  input in0,
  input in1,
  output out
);
  assign out = in0 ^ in1;

endmodule  // corebit_xor

module FullAdder_ (
  input  a,
  input  b,
  input  cin,
  output  cout,
  output  out
);


  wire  inst0__in0;
  wire  inst0__in1;
  wire  inst0__out;
  corebit_xor inst0(
    .in0(inst0__in0),
    .in1(inst0__in1),
    .out(inst0__out)
  );

  wire  inst1__in0;
  wire  inst1__in1;
  wire  inst1__out;
  corebit_xor inst1(
    .in0(inst1__in0),
    .in1(inst1__in1),
    .out(inst1__out)
  );

  wire  inst2__in0;
  wire  inst2__in1;
  wire  inst2__out;
  corebit_and inst2(
    .in0(inst2__in0),
    .in1(inst2__in1),
    .out(inst2__out)
  );

  wire  inst3__in0;
  wire  inst3__in1;
  wire  inst3__out;
  corebit_and inst3(
    .in0(inst3__in0),
    .in1(inst3__in1),
    .out(inst3__out)
  );

  wire  inst4__in0;
  wire  inst4__in1;
  wire  inst4__out;
  corebit_or inst4(
    .in0(inst4__in0),
    .in1(inst4__in1),
    .out(inst4__out)
  );

  wire  inst5__in0;
  wire  inst5__in1;
  wire  inst5__out;
  corebit_and inst5(
    .in0(inst5__in0),
    .in1(inst5__in1),
    .out(inst5__out)
  );

  wire  inst6__in0;
  wire  inst6__in1;
  wire  inst6__out;
  corebit_or inst6(
    .in0(inst6__in0),
    .in1(inst6__in1),
    .out(inst6__out)
  );

  assign inst0__in0 = a;

  assign inst0__in1 = b;

  assign inst1__in0 = inst0__out;

  assign inst1__in1 = cin;

  assign out = inst1__out;

  assign inst2__in0 = a;

  assign inst2__in1 = b;

  assign inst4__in0 = inst2__out;

  assign inst3__in0 = b;

  assign inst3__in1 = cin;

  assign inst4__in1 = inst3__out;

  assign inst6__in0 = inst4__out;

  assign inst5__in0 = a;

  assign inst5__in1 = cin;

  assign inst6__in1 = inst5__out;

  assign cout = inst6__out;


endmodule  // FullAdder_

