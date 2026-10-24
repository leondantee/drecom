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

// Function: entry_0033e9f8
// Address: 0x33e9f8 - 0x33ea30
void entry_0033e9f8_0x33e9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033e9f8_0x33e9f8");
#endif

    switch (ctx->pc) {
        case 0x33ea10u: goto label_33ea10;
        default: break;
    }

    ctx->pc = 0x33e9f8u;

    // 0x33e9f8: 0x2e410010  sltiu       $at, $s2, 0x10
    ctx->pc = 0x33e9f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x33e9fc: 0x1420ff06  bnez        $at, . + 4 + (-0xFA << 2)
    ctx->pc = 0x33E9FCu;
    {
        const bool branch_taken_0x33e9fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x33e9fc) {
            ctx->pc = 0x33E618u;
            return;
        }
    }
    ctx->pc = 0x33EA04u;
    // 0x33ea04: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x33ea04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x33ea08: 0xc097a68  jal         func_25E9A0
    ctx->pc = 0x33EA08u;
    SET_GPR_U32(ctx, 31, 0x33EA10u);
    ctx->pc = 0x25E9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E9A0u, 0x33EA08u, 0x33EA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33EA10u;
label_33ea10:
    // 0x33ea10: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x33ea10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x33ea14: 0x8c631330  lw          $v1, 0x1330($v1)
    ctx->pc = 0x33ea14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4912)));
    // 0x33ea18: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x33EA18u;
    {
        const bool branch_taken_0x33ea18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33ea18) {
            ctx->pc = 0x33EA30u;
            return;
        }
    }
    ctx->pc = 0x33EA20u;
    // 0x33ea20: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x33ea20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x33ea24: 0x8c831330  lw          $v1, 0x1330($a0)
    ctx->pc = 0x33ea24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4912)));
    // 0x33ea28: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x33ea28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x33ea2c: 0xac831330  sw          $v1, 0x1330($a0)
    ctx->pc = 0x33ea2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4912), GPR_U32(ctx, 3));
    ctx->pc = 0x33ea30u;
}
