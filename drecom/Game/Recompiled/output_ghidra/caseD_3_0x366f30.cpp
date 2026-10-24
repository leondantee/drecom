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

// Function: caseD_3
// Address: 0x366f30 - 0x366f9c
void caseD_3_0x366f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x366f30");
#endif

    switch (ctx->pc) {
        case 0x366f40u: goto label_366f40;
        case 0x366f4cu: goto label_366f4c;
        case 0x366f5cu: goto label_366f5c;
        case 0x366f68u: goto label_366f68;
        default: break;
    }

    ctx->pc = 0x366f30u;

    // 0x366f30: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x366f30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x366f34: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x366f34u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x366f38: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x366F38u;
    SET_GPR_U32(ctx, 31, 0x366F40u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x366F38u, 0x366F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366F40u;
label_366f40:
    // 0x366f40: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x366f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x366f44: 0xc05cd10  jal         func_173440
    ctx->pc = 0x366F44u;
    SET_GPR_U32(ctx, 31, 0x366F4Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x366F44u, 0x366F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366F4Cu;
label_366f4c:
    // 0x366f4c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x366f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x366f50: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x366f50u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x366f54: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x366F54u;
    SET_GPR_U32(ctx, 31, 0x366F5Cu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x366F54u, 0x366F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366F5Cu;
label_366f5c:
    // 0x366f5c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x366f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x366f60: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x366F60u;
    SET_GPR_U32(ctx, 31, 0x366F68u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x366F60u, 0x366F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366F68u;
label_366f68:
    // 0x366f68: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x366f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366f6c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x366f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x366f70: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x366f70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x366f74: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x366f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x366f78: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x366f78u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x366f7c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x366f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x366f80: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x366f80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x366f84: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x366f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x366f88: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x366f88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x366f8c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x366f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x366f90: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x366f90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x366f94: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x366F94u;
    {
        const bool branch_taken_0x366f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x366f94) {
            ctx->pc = 0x367040u;
            return;
        }
    }
    ctx->pc = 0x366F9Cu;
}
