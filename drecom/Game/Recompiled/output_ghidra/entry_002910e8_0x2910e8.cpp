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

// Function: entry_002910e8
// Address: 0x2910e8 - 0x291120
void entry_002910e8_0x2910e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002910e8_0x2910e8");
#endif

    switch (ctx->pc) {
        case 0x291110u: goto label_291110;
        default: break;
    }

    ctx->pc = 0x2910e8u;

    // 0x2910e8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2910e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2910ec: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2910ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2910f0: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2910F0u;
    {
        const bool branch_taken_0x2910f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2910f0) {
            ctx->pc = 0x2910B4u;
            return;
        }
    }
    ctx->pc = 0x2910F8u;
    // 0x2910f8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2910f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2910fc: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2910fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x291100: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x291100u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x291104: 0x8fa70060  lw          $a3, 0x60($sp)
    ctx->pc = 0x291104u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x291108: 0xc0a4268  jal         func_2909A0
    ctx->pc = 0x291108u;
    SET_GPR_U32(ctx, 31, 0x291110u);
    ctx->pc = 0x2909A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2909A0u, 0x291108u, 0x291110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291110u;
label_291110:
    // 0x291110: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x291110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x291114: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x291114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x291118: 0x8fa60058  lw          $a2, 0x58($sp)
    ctx->pc = 0x291118u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x29111c: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x29111cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    ctx->pc = 0x291120u;
}
