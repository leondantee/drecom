#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0010db5c
// Address: 0x10db5c - 0x10db60
void entry_0010db5c_0x10db5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010db5c_0x10db5c");
#endif

    ctx->pc = 0x10db5cu;

    // 0x10db5c: 0x26303e80  addiu       $s0, $s1, 0x3E80
    ctx->pc = 0x10db5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16000));
    ctx->pc = 0x10db60u;
}
