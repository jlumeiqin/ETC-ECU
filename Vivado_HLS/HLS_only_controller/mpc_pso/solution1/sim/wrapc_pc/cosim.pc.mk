# ==============================================================
# File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
# Version: 2014.4
# Copyright (C) 2014 Xilinx Inc. All rights reserved.
# 
# ==============================================================

__SIM_FPO__ = 1

__SIM_OPENCV__ = 1

__SIM_FFT__ = 1

__SIM_FIR__ = 1

TARGET := cosim.pc.exe

AUTOPILOT_ROOT := D:/Xilinx/Vivado_HLS/2014.4
AUTOPILOT_MACH := win32
IFLAG +=     
ifdef COSIM_M32
  AUTOPILOT_MACH := lnx32
  IFLAG += -m32
endif
ifdef AP_GCC_M32
  AUTOPILOT_MACH := Linux_x86
  IFLAG += -m32
endif
ifndef AP_GCC_PATH
  AP_GCC_PATH := D:/Xilinx/Vivado_HLS/2014.4/msys/bin
endif
AUTOPILOT_TOOL := ${AUTOPILOT_ROOT}/${AUTOPILOT_MACH}/tools
AUTOPILOT_TECH := ${AUTOPILOT_ROOT}/common/technology


IFLAG += -I "${AUTOPILOT_TOOL}/systemc/include"
IFLAG += -I "${AUTOPILOT_ROOT}/include"
IFLAG += -I "${AUTOPILOT_ROOT}/include/ap_sysc"
IFLAG += -I "${AUTOPILOT_TECH}/generic/SystemC"
IFLAG += -I "${AUTOPILOT_TECH}/generic/SystemC/AESL_FP_comp"
IFLAG += -I "${AUTOPILOT_TECH}/generic/SystemC/AESL_comp"
IFLAG += -I "${AUTOPILOT_TOOL}/auto_cc/include"
IFLAG += -D__SIM_FPO__

IFLAG += -D__SIM_OPENCV__

IFLAG += -D__SIM_FFT__

IFLAG += -D__SIM_FIR__

LFLAG += -L "${AUTOPILOT_ROOT}/${AUTOPILOT_MACH}/tools/systemc/lib" -lsystemc -lpthread
IFLAG += -D__RTL_SIMULATION__
LFLAG += -Wl,--enable-auto-import 



include ./Makefile.rules

all: $(TARGET)



$(ObjDir)/mpc_test.cpp_pre.cpp.tb.o: mpc_test.cpp_pre.cpp.tb.cpp $(ObjDir)/.dir
	$(Echo) "   Compiling mpc_test.cpp_pre.cpp.tb.cpp" $(AVE_DIR_DLOG)
	$(Verb)  gcc -fno-builtin-isinf -fno-builtin-isnan -c $(IFLAG) $(DFLAG)  $< -o $@ ; \

$(ObjDir)/mpc.cpp_pre.cpp.tb.o: mpc.cpp_pre.cpp.tb.cpp $(ObjDir)/.dir
	$(Echo) "   Compiling mpc.cpp_pre.cpp.tb.cpp" $(AVE_DIR_DLOG)
	$(Verb)  gcc -fno-builtin-isinf -fno-builtin-isnan -c $(IFLAG) $(DFLAG)  $< -o $@ ; \
