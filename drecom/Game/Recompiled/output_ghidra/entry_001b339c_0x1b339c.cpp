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

// Function: entry_001b339c
// Address: 0x1b339c - 0x1b33c4
void entry_001b339c_0x1b339c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b339c_0x1b339c");
#endif

    switch (ctx->pc) {
        case 0x1b33bcu: goto label_1b33bc;
        default: break;
    }

    ctx->pc = 0x1b339cu;

    // 0x1b339c: 0x12163c  dsll32      $v0, $s2, 24
    ctx->pc = 0x1b339cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 24));
    // 0x1b33a0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1b33a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1b33a4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1b33a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b33a8: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x1b33a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1b33ac: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x1b33acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b33b0: 0x26041200  addiu       $a0, $s0, 0x1200
    ctx->pc = 0x1b33b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4608));
    // 0x1b33b4: 0xc040c9e  jal         func_103278
    ctx->pc = 0x1B33B4u;
    SET_GPR_U32(ctx, 31, 0x1B33BCu);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x1B33BCu;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B33BCu) { return; }
    ctx->pc = 0x1B33BCu;
label_1b33bc:
    // 0x1b33bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B33BCu;
    {
        const bool branch_taken_0x1b33bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b33bc) {
            ctx->pc = 0x1B33D8u;
            return;
        }
    }
    ctx->pc = 0x1B33C4u;
}
