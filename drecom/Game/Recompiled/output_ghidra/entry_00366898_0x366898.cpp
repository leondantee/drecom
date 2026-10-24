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

// Function: entry_00366898
// Address: 0x366898 - 0x3668f8
void entry_00366898_0x366898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00366898_0x366898");
#endif

    switch (ctx->pc) {
        case 0x3668a8u: goto label_3668a8;
        case 0x3668b4u: goto label_3668b4;
        case 0x3668c4u: goto label_3668c4;
        case 0x3668d0u: goto label_3668d0;
        default: break;
    }

    ctx->pc = 0x366898u;

    // 0x366898: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x366898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36689c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36689cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3668a0: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3668A0u;
    SET_GPR_U32(ctx, 31, 0x3668A8u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3668A0u, 0x3668A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3668A8u;
label_3668a8:
    // 0x3668a8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3668a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3668ac: 0xc05cd10  jal         func_173440
    ctx->pc = 0x3668ACu;
    SET_GPR_U32(ctx, 31, 0x3668B4u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x3668ACu, 0x3668B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3668B4u;
label_3668b4:
    // 0x3668b4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3668b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3668b8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3668b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3668bc: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x3668BCu;
    SET_GPR_U32(ctx, 31, 0x3668C4u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x3668BCu, 0x3668C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3668C4u;
label_3668c4:
    // 0x3668c4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3668c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3668c8: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x3668C8u;
    SET_GPR_U32(ctx, 31, 0x3668D0u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x3668C8u, 0x3668D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3668D0u;
label_3668d0:
    // 0x3668d0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3668d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3668d4: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x3668d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x3668d8: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x3668D8u;
    {
        const bool branch_taken_0x3668d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3668d8) {
            ctx->pc = 0x3669ACu;
            return;
        }
    }
    ctx->pc = 0x3668E0u;
    // 0x3668e0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3668e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3668e4: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x3668e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x3668e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3668e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3668ec: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x3668ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x3668f0: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x3668F0u;
    {
        const bool branch_taken_0x3668f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3668f0) {
            ctx->pc = 0x3669ACu;
            return;
        }
    }
    ctx->pc = 0x3668F8u;
}
