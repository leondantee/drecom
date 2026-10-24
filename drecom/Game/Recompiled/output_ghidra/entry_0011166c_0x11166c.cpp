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

// Function: entry_0011166c
// Address: 0x11166c - 0x111680
void entry_0011166c_0x11166c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011166c_0x11166c");
#endif

    ctx->pc = 0x11166cu;

    // 0x11166c: 0x642823  subu        $a1, $v1, $a0
    ctx->pc = 0x11166cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x111670: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x111670u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x111674: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x111674u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x111678: 0x873804  sllv        $a3, $a3, $a0
    ctx->pc = 0x111678u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
    // 0x11167c: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x11167cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
    ctx->pc = 0x111680u;
}
