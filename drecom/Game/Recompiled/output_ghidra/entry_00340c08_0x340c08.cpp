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

// Function: entry_00340c08
// Address: 0x340c08 - 0x340c58
void entry_00340c08_0x340c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00340c08_0x340c08");
#endif

    switch (ctx->pc) {
        case 0x340c24u: goto label_340c24;
        case 0x340c30u: goto label_340c30;
        default: break;
    }

    ctx->pc = 0x340c08u;

    // 0x340c08: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x340c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x340c0c: 0x2404050c  addiu       $a0, $zero, 0x50C
    ctx->pc = 0x340c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1292));
    // 0x340c10: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x340c10u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340c14: 0x24461200  addiu       $a2, $v0, 0x1200
    ctx->pc = 0x340c14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4608));
    // 0x340c18: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x340c18u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340c1c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x340C1Cu;
    SET_GPR_U32(ctx, 31, 0x340C24u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x340C1Cu, 0x340C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340C24u;
label_340c24:
    // 0x340c24: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x340c24u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x340c28: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x340C28u;
    SET_GPR_U32(ctx, 31, 0x340C30u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x340C28u, 0x340C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340C30u;
label_340c30:
    // 0x340c30: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x340c30u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340c34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x340c34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x340c38: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x340c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x340c3c: 0xa44310a6  sh          $v1, 0x10A6($v0)
    ctx->pc = 0x340c3cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x340c40: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x340c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x340c44: 0xa04011ee  sb          $zero, 0x11EE($v0)
    ctx->pc = 0x340c44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4590), (uint8_t)GPR_U32(ctx, 0));
    // 0x340c48: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x340c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x340c4c: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x340c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x340c50: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x340C50u;
    {
        const bool branch_taken_0x340c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340c50) {
            ctx->pc = 0x340D00u;
            return;
        }
    }
    ctx->pc = 0x340C58u;
}
