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

// Function: entry_003498f4
// Address: 0x3498f4 - 0x349954
void entry_003498f4_0x3498f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003498f4_0x3498f4");
#endif

    switch (ctx->pc) {
        case 0x349904u: goto label_349904;
        case 0x349910u: goto label_349910;
        case 0x34994cu: goto label_34994c;
        default: break;
    }

    ctx->pc = 0x3498f4u;

    // 0x3498f4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3498f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3498f8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3498f8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3498fc: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x3498FCu;
    SET_GPR_U32(ctx, 31, 0x349904u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x3498FCu, 0x349904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349904u;
label_349904:
    // 0x349904: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x349904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349908: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x349908u;
    SET_GPR_U32(ctx, 31, 0x349910u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x349908u, 0x349910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349910u;
label_349910:
    // 0x349910: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x349910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349914: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x349914u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x349918: 0x1060018a  beqz        $v1, . + 4 + (0x18A << 2)
    ctx->pc = 0x349918u;
    {
        const bool branch_taken_0x349918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x349918) {
            ctx->pc = 0x349F44u;
            return;
        }
    }
    ctx->pc = 0x349920u;
    // 0x349920: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x349920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x349924: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x349924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349928: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x349928u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x34992c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34992cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349930: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x349930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x349934: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x349934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x349938: 0x24061e0f  addiu       $a2, $zero, 0x1E0F
    ctx->pc = 0x349938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7695));
    // 0x34993c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34993cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349940: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x349940u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x349944: 0xc0965d0  jal         func_259740
    ctx->pc = 0x349944u;
    SET_GPR_U32(ctx, 31, 0x34994Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x349944u, 0x34994Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34994Cu;
label_34994c:
    // 0x34994c: 0x1000017d  b           . + 4 + (0x17D << 2)
    ctx->pc = 0x34994Cu;
    {
        const bool branch_taken_0x34994c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34994c) {
            ctx->pc = 0x349F44u;
            return;
        }
    }
    ctx->pc = 0x349954u;
}
