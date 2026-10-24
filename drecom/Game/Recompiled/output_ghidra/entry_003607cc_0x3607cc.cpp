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

// Function: entry_003607cc
// Address: 0x3607cc - 0x36082c
void entry_003607cc_0x3607cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003607cc_0x3607cc");
#endif

    switch (ctx->pc) {
        case 0x3607dcu: goto label_3607dc;
        case 0x3607e8u: goto label_3607e8;
        case 0x3607f8u: goto label_3607f8;
        case 0x360804u: goto label_360804;
        default: break;
    }

    ctx->pc = 0x3607ccu;

    // 0x3607cc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3607ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3607d0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3607d0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3607d4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x3607D4u;
    SET_GPR_U32(ctx, 31, 0x3607DCu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x3607D4u, 0x3607DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3607DCu;
label_3607dc:
    // 0x3607dc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3607dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3607e0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x3607E0u;
    SET_GPR_U32(ctx, 31, 0x3607E8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x3607E0u, 0x3607E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3607E8u;
label_3607e8:
    // 0x3607e8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3607e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3607ec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x3607ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3607f0: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x3607F0u;
    SET_GPR_U32(ctx, 31, 0x3607F8u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x3607F0u, 0x3607F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3607F8u;
label_3607f8:
    // 0x3607f8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3607f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3607fc: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x3607FCu;
    SET_GPR_U32(ctx, 31, 0x360804u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x3607FCu, 0x360804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360804u;
label_360804:
    // 0x360804: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x360804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x360808: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x360808u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x36080c: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x36080Cu;
    {
        const bool branch_taken_0x36080c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36080c) {
            ctx->pc = 0x360888u;
            return;
        }
    }
    ctx->pc = 0x360814u;
    // 0x360814: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x360814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x360818: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x360818u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x36081c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x36081cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x360820: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x360820u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x360824: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x360824u;
    {
        const bool branch_taken_0x360824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x360824) {
            ctx->pc = 0x360888u;
            return;
        }
    }
    ctx->pc = 0x36082Cu;
}
