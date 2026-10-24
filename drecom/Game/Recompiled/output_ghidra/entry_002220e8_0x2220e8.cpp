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

// Function: entry_002220e8
// Address: 0x2220e8 - 0x222118
void entry_002220e8_0x2220e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002220e8_0x2220e8");
#endif

    switch (ctx->pc) {
        case 0x222110u: goto label_222110;
        default: break;
    }

    ctx->pc = 0x2220e8u;

    // 0x2220e8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2220e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2220ec: 0x24451330  addiu       $a1, $v0, 0x1330
    ctx->pc = 0x2220ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2220f0: 0x8ca20030  lw          $v0, 0x30($a1)
    ctx->pc = 0x2220f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2220f4: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2220f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2220f8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2220F8u;
    {
        const bool branch_taken_0x2220f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2220f8) {
            ctx->pc = 0x222118u;
            return;
        }
    }
    ctx->pc = 0x222100u;
    // 0x222100: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x222100u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x222104: 0x24c410b0  addiu       $a0, $a2, 0x10B0
    ctx->pc = 0x222104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4272));
    // 0x222108: 0xc0624b4  jal         func_1892D0
    ctx->pc = 0x222108u;
    SET_GPR_U32(ctx, 31, 0x222110u);
    ctx->pc = 0x1892D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1892D0u, 0x222108u, 0x222110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222110u;
label_222110:
    // 0x222110: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x222110u;
    {
        const bool branch_taken_0x222110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x222110) {
            ctx->pc = 0x222128u;
            return;
        }
    }
    ctx->pc = 0x222118u;
}
