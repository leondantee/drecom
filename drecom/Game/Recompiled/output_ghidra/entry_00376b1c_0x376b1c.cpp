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

// Function: entry_00376b1c
// Address: 0x376b1c - 0x376b8c
void entry_00376b1c_0x376b1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00376b1c_0x376b1c");
#endif

    switch (ctx->pc) {
        case 0x376b2cu: goto label_376b2c;
        case 0x376b3cu: goto label_376b3c;
        case 0x376b48u: goto label_376b48;
        case 0x376b84u: goto label_376b84;
        default: break;
    }

    ctx->pc = 0x376b1cu;

    // 0x376b1c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x376b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376b20: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x376b20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x376b24: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x376B24u;
    SET_GPR_U32(ctx, 31, 0x376B2Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x376B24u, 0x376B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376B2Cu;
label_376b2c:
    // 0x376b2c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x376b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376b30: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x376b30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x376b34: 0xc0dd234  jal         func_3748D0
    ctx->pc = 0x376B34u;
    SET_GPR_U32(ctx, 31, 0x376B3Cu);
    ctx->pc = 0x3748D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3748D0u, 0x376B34u, 0x376B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376B3Cu;
label_376b3c:
    // 0x376b3c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x376b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376b40: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x376B40u;
    SET_GPR_U32(ctx, 31, 0x376B48u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x376B40u, 0x376B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376B48u;
label_376b48:
    // 0x376b48: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x376b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376b4c: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x376b4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x376b50: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x376B50u;
    {
        const bool branch_taken_0x376b50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x376b50) {
            ctx->pc = 0x376C50u;
            return;
        }
    }
    ctx->pc = 0x376B58u;
    // 0x376b58: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x376b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x376b5c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x376b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376b60: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x376b60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x376b64: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x376b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376b68: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x376b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x376b6c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x376b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x376b70: 0x24061404  addiu       $a2, $zero, 0x1404
    ctx->pc = 0x376b70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5124));
    // 0x376b74: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x376b74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x376b78: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x376b78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x376b7c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x376B7Cu;
    SET_GPR_U32(ctx, 31, 0x376B84u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x376B7Cu, 0x376B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376B84u;
label_376b84:
    // 0x376b84: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x376B84u;
    {
        const bool branch_taken_0x376b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x376b84) {
            ctx->pc = 0x376C50u;
            return;
        }
    }
    ctx->pc = 0x376B8Cu;
}
