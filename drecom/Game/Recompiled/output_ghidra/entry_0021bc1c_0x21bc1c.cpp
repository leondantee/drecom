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

// Function: entry_0021bc1c
// Address: 0x21bc1c - 0x21bc58
void entry_0021bc1c_0x21bc1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021bc1c_0x21bc1c");
#endif

    switch (ctx->pc) {
        case 0x21bc40u: goto label_21bc40;
        case 0x21bc4cu: goto label_21bc4c;
        default: break;
    }

    ctx->pc = 0x21bc1cu;

    // 0x21bc1c: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x21bc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21bc20: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x21BC20u;
    {
        const bool branch_taken_0x21bc20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21bc20) {
            ctx->pc = 0x21BC58u;
            return;
        }
    }
    ctx->pc = 0x21BC28u;
    // 0x21bc28: 0x24040409  addiu       $a0, $zero, 0x409
    ctx->pc = 0x21bc28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
    // 0x21bc2c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x21bc2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21bc30: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x21bc30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x21bc34: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x21bc34u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21bc38: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x21BC38u;
    SET_GPR_U32(ctx, 31, 0x21BC40u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x21BC38u, 0x21BC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BC40u;
label_21bc40:
    // 0x21bc40: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x21bc40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21bc44: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x21BC44u;
    SET_GPR_U32(ctx, 31, 0x21BC4Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x21BC44u, 0x21BC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21BC4Cu;
label_21bc4c:
    // 0x21bc4c: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x21bc4cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21bc50: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x21BC50u;
    {
        const bool branch_taken_0x21bc50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21bc50) {
            ctx->pc = 0x21BCB0u;
            return;
        }
    }
    ctx->pc = 0x21BC58u;
}
