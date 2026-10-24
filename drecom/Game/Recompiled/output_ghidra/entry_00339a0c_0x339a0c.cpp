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

// Function: entry_00339a0c
// Address: 0x339a0c - 0x339a4c
void entry_00339a0c_0x339a0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00339a0c_0x339a0c");
#endif

    switch (ctx->pc) {
        case 0x339a40u: goto label_339a40;
        default: break;
    }

    ctx->pc = 0x339a0cu;

    // 0x339a0c: 0x3c010089  lui         $at, 0x89
    ctx->pc = 0x339a0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)137 << 16));
    // 0x339a10: 0x8c225438  lw          $v0, 0x5438($at)
    ctx->pc = 0x339a10u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x895438u));
    // 0x339a14: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x339a14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x339a18: 0x3c020089  lui         $v0, 0x89
    ctx->pc = 0x339a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)137 << 16));
    // 0x339a1c: 0x24425330  addiu       $v0, $v0, 0x5330
    ctx->pc = 0x339a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21296));
    // 0x339a20: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x339a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x339a24: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x339a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x339a28: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x339A28u;
    {
        const bool branch_taken_0x339a28 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x339a28) {
            ctx->pc = 0x339A4Cu;
            return;
        }
    }
    ctx->pc = 0x339A30u;
    // 0x339a30: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x339a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x339a34: 0x24442610  addiu       $a0, $v0, 0x2610
    ctx->pc = 0x339a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9744));
    // 0x339a38: 0xc046760  jal         func_119D80
    ctx->pc = 0x339A38u;
    SET_GPR_U32(ctx, 31, 0x339A40u);
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x339A40u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x339A40u) { return; }
    ctx->pc = 0x339A40u;
label_339a40:
    // 0x339a40: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x339a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x339a44: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x339A44u;
    {
        const bool branch_taken_0x339a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x339a44) {
            ctx->pc = 0x339AC0u;
            return;
        }
    }
    ctx->pc = 0x339A4Cu;
}
