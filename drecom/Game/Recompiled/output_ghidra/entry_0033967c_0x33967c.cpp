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

// Function: entry_0033967c
// Address: 0x33967c - 0x3396bc
void entry_0033967c_0x33967c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033967c_0x33967c");
#endif

    switch (ctx->pc) {
        case 0x3396b0u: goto label_3396b0;
        default: break;
    }

    ctx->pc = 0x33967cu;

    // 0x33967c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x33967cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339680: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x339680u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x339684: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x339684u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x339688: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x339688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x33968c: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x33968cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x339690: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x339690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x339694: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x339694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x339698: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x339698u;
    {
        const bool branch_taken_0x339698 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x339698) {
            ctx->pc = 0x3396BCu;
            return;
        }
    }
    ctx->pc = 0x3396A0u;
    // 0x3396a0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3396a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x3396a4: 0x24442550  addiu       $a0, $v0, 0x2550
    ctx->pc = 0x3396a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9552));
    // 0x3396a8: 0xc046760  jal         func_119D80
    ctx->pc = 0x3396A8u;
    SET_GPR_U32(ctx, 31, 0x3396B0u);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x3396B0u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x3396B0u) { return; }
    ctx->pc = 0x3396B0u;
label_3396b0:
    // 0x3396b0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3396b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3396b4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x3396B4u;
    {
        const bool branch_taken_0x3396b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3396b4) {
            ctx->pc = 0x33973Cu;
            return;
        }
    }
    ctx->pc = 0x3396BCu;
}
