CXX = gcc
CXXFLAGS += -g -Wall -Wextra
NGX_ROOT = /cygdrive/d/C_project/nginx
TARGETS = ngx_queue_t_test
TARGETS_C_FILE = $(TARGETS).c
CLEANUP = rm -f *.exe *.o  
all: $(TARGETS)
clean: 
	$(CLEANUP)
CORE_INCS = -I. \
	-I$(NGX_ROOT)/src/core \
	-I$(NGX_ROOT)/src/event \
	-I$(NGX_ROOT)/src/event/modules \
	-I$(NGX_ROOT)/src/os/unix \
	-I$(NGX_ROOT)/objs
NGX_QUEUE = $(NGX_ROOT)/objs/src/core/ngx_queue.o
NGX_ARRAY = $(NGX_ROOT)/objs/src/core/ngx_array.o
NGX_PALLOC = $(NGX_ROOT)/objs/src/core/ngx_palloc.o
NGX_LOG = $(NGX_ROOT)/objs/src/core/ngx_log.o
$(TARGETS): $(TARGETS_C_FILE)
	$(CXX) $(CXXFLAGS) $(CORE_INCS) $(NGX_QUEUE) $^ -o $@

ngx_array_t_test: ngx_array_t_test.c
	$(CXX) $(CXXFLAGS) $(CORE_INCS) $^ -o $@