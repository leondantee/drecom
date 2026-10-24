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

// Function: entry_0017a69c
// Address: 0x17a69c - 0x17a6ac
void entry_0017a69c_0x17a69c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017a69c_0x17a69c");
#endif

    ctx->pc = 0x17a69cu;

    // 0x17a69c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x17a69cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17a6a0: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x17a6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x17a6a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17a6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17a6a8: 0x24501200  addiu       $s0, $v0, 0x1200
    ctx->pc = 0x17a6a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4608));
    ctx->pc = 0x17a6acu;
}
