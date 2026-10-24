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

// Function: entry_0035739c
// Address: 0x35739c - 0x3573b0
void entry_0035739c_0x35739c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035739c_0x35739c");
#endif

    ctx->pc = 0x35739cu;

    // 0x35739c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x35739cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3573a0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x3573a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3573a4: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x3573a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3573a8: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x3573a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x3573ac: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x3573acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x3573b0u;
}
