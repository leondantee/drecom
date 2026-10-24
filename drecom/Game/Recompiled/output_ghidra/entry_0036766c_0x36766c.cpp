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

// Function: entry_0036766c
// Address: 0x36766c - 0x3676e8
void entry_0036766c_0x36766c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036766c_0x36766c");
#endif

    switch (ctx->pc) {
        case 0x36767cu: goto label_36767c;
        case 0x367688u: goto label_367688;
        case 0x367698u: goto label_367698;
        case 0x3676a4u: goto label_3676a4;
        default: break;
    }

    ctx->pc = 0x36766cu;

    // 0x36766c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36766cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367670: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x367670u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x367674: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x367674u;
    SET_GPR_U32(ctx, 31, 0x36767Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x367674u, 0x36767Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36767Cu;
label_36767c:
    // 0x36767c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36767cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367680: 0xc05cd10  jal         func_173440
    ctx->pc = 0x367680u;
    SET_GPR_U32(ctx, 31, 0x367688u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x367680u, 0x367688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367688u;
label_367688:
    // 0x367688: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36768c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36768cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x367690: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x367690u;
    SET_GPR_U32(ctx, 31, 0x367698u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x367690u, 0x367698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367698u;
label_367698:
    // 0x367698: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x367698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36769c: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x36769Cu;
    SET_GPR_U32(ctx, 31, 0x3676A4u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x36769Cu, 0x3676A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3676A4u;
label_3676a4:
    // 0x3676a4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3676a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3676a8: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x3676a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x3676ac: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3676ACu;
    {
        const bool branch_taken_0x3676ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3676ac) {
            ctx->pc = 0x3676E8u;
            return;
        }
    }
    ctx->pc = 0x3676B4u;
    // 0x3676b4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3676b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3676b8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3676b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3676bc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x3676bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x3676c0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3676c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3676c4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x3676c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3676c8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3676c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3676cc: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x3676ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3676d0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3676d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3676d4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x3676d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3676d8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3676d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3676dc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3676dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3676e0: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x3676E0u;
    {
        const bool branch_taken_0x3676e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3676e0) {
            ctx->pc = 0x3676E8u;
            return;
        }
    }
    ctx->pc = 0x3676E8u;
}
