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

// Function: entry_002dd63c
// Address: 0x2dd63c - 0x2dd6bc
void entry_002dd63c_0x2dd63c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dd63c_0x2dd63c");
#endif

    switch (ctx->pc) {
        case 0x2dd64cu: goto label_2dd64c;
        case 0x2dd65cu: goto label_2dd65c;
        case 0x2dd670u: goto label_2dd670;
        case 0x2dd680u: goto label_2dd680;
        default: break;
    }

    ctx->pc = 0x2dd63cu;

    // 0x2dd63c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd63cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd640: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2dd640u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dd644: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2DD644u;
    SET_GPR_U32(ctx, 31, 0x2DD64Cu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2DD644u, 0x2DD64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD64Cu;
label_2dd64c:
    // 0x2dd64c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2dd64cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2dd650: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd654: 0xc05cd10  jal         func_173440
    ctx->pc = 0x2DD654u;
    SET_GPR_U32(ctx, 31, 0x2DD65Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x2DD654u, 0x2DD65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD65Cu;
label_2dd65c:
    // 0x2dd65c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2dd65cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2dd660: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd664: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2dd664u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2dd668: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x2DD668u;
    SET_GPR_U32(ctx, 31, 0x2DD670u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x2DD668u, 0x2DD670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD670u;
label_2dd670:
    // 0x2dd670: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2dd670u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2dd674: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd678: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x2DD678u;
    SET_GPR_U32(ctx, 31, 0x2DD680u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x2DD678u, 0x2DD680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD680u;
label_2dd680:
    // 0x2dd680: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2dd680u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2dd684: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2dd684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd688: 0x8463127a  lh          $v1, 0x127A($v1)
    ctx->pc = 0x2dd688u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4730)));
    // 0x2dd68c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x2DD68Cu;
    {
        const bool branch_taken_0x2dd68c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd68c) {
            ctx->pc = 0x2DD6BCu;
            return;
        }
    }
    ctx->pc = 0x2DD694u;
    // 0x2dd694: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2dd694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd698: 0x8485127a  lh          $a1, 0x127A($a0)
    ctx->pc = 0x2dd698u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4730)));
    // 0x2dd69c: 0x24a6ffff  addiu       $a2, $a1, -0x1
    ctx->pc = 0x2dd69cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2dd6a0: 0xa486127a  sh          $a2, 0x127A($a0)
    ctx->pc = 0x2dd6a0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4730), (uint16_t)GPR_U32(ctx, 6));
    // 0x2dd6a4: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x2dd6a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2dd6a8: 0x94e809e0  lhu         $t0, 0x9E0($a3)
    ctx->pc = 0x2dd6a8u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2528)));
    // 0x2dd6ac: 0x35030100  ori         $v1, $t0, 0x100
    ctx->pc = 0x2dd6acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)256);
    // 0x2dd6b0: 0xa4e309e0  sh          $v1, 0x9E0($a3)
    ctx->pc = 0x2dd6b0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 2528), (uint16_t)GPR_U32(ctx, 3));
    // 0x2dd6b4: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x2DD6B4u;
    {
        const bool branch_taken_0x2dd6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd6b4) {
            ctx->pc = 0x2DD7C0u;
            return;
        }
    }
    ctx->pc = 0x2DD6BCu;
}
