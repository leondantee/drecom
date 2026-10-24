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

// Function: entry_0025e2c0
// Address: 0x25e2c0 - 0x25e318
void entry_0025e2c0_0x25e2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025e2c0_0x25e2c0");
#endif

    switch (ctx->pc) {
        case 0x25e310u: goto label_25e310;
        default: break;
    }

    ctx->pc = 0x25e2c0u;

    // 0x25e2c0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x25e2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25e2c4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x25e2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25e2c8: 0x8c4204b0  lw          $v0, 0x4B0($v0)
    ctx->pc = 0x25e2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1200)));
    // 0x25e2cc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x25E2CCu;
    {
        const bool branch_taken_0x25e2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e2cc) {
            ctx->pc = 0x25E318u;
            return;
        }
    }
    ctx->pc = 0x25E2D4u;
    // 0x25e2d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25e2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x25e2d8: 0xa7a200da  sh          $v0, 0xDA($sp)
    ctx->pc = 0x25e2d8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 218), (uint16_t)GPR_U32(ctx, 2));
    // 0x25e2dc: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x25e2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25e2e0: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x25e2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25e2e4: 0x8c8504b0  lw          $a1, 0x4B0($a0)
    ctx->pc = 0x25e2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1200)));
    // 0x25e2e8: 0xafa500dc  sw          $a1, 0xDC($sp)
    ctx->pc = 0x25e2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 5));
    // 0x25e2ec: 0x123040  sll         $a2, $s2, 1
    ctx->pc = 0x25e2ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x25e2f0: 0xd21021  addu        $v0, $a2, $s2
    ctx->pc = 0x25e2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x25e2f4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x25e2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x25e2f8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x25e2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25e2fc: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x25e2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x25e300: 0x26250110  addiu       $a1, $s1, 0x110
    ctx->pc = 0x25e300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
    // 0x25e304: 0x244607e8  addiu       $a2, $v0, 0x7E8
    ctx->pc = 0x25e304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2024));
    // 0x25e308: 0xc098ba0  jal         func_262E80
    ctx->pc = 0x25E308u;
    SET_GPR_U32(ctx, 31, 0x25E310u);
    ctx->pc = 0x262E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E80u, 0x25E308u, 0x25E310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E310u;
label_25e310:
    // 0x25e310: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x25E310u;
    {
        const bool branch_taken_0x25e310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e310) {
            ctx->pc = 0x25E330u;
            return;
        }
    }
    ctx->pc = 0x25E318u;
}
