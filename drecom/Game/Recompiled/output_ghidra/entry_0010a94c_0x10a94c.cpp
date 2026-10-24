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

// Function: entry_0010a94c
// Address: 0x10a94c - 0x10a954
void entry_0010a94c_0x10a94c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010a94c_0x10a94c");
#endif

    ctx->pc = 0x10a94cu;

    // 0x10a94c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x10a94cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a950: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x10a950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x10a954u;
}
